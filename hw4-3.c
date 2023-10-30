#include <stdio.h>

int main() {
    int n = 0; // 任务订单数量
    int s[100]; // 司机的出发时间数组
    int d[100]; // 司机的返回时间数组

    // 读取输入数据
    while (scanf("%d %d", &s[n], &d[n]) != EOF) {
        n++;
    }

    // 对返回时间进行排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (d[i] > d[j]) {
                int temp = d[i];
                d[i] = d[j];
                d[j] = temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    int drivers = 1; // 最少司机数量
    int driver_end_time[100]; // 司机的返回时间数组
    driver_end_time[0] = d[0];

    // 打印输出
    for (int i = 1; i < n; i++) {
        if (s[i] > driver_end_time[drivers - 1]) {
            // 可以派遣同一位司机
            driver_end_time[drivers - 1] = d[i];
        } else {
            // 需要新增司机
            drivers++;
            driver_end_time[drivers - 1] = d[i];
        }
    }

    // 输出最少司机数量
    printf("%d\n", drivers);

    // 输出每位司机的时间表
    for (int i = 0; i < drivers; i++) {
        int driver_start_time = s[0];
        printf("%d", driver_start_time);
        for (int j = 0; j < n; j++) {
            if (s[j] >= driver_start_time && d[j] <= driver_end_time[i]) {
                printf(" %d", d[j]);
                driver_start_time = d[j];
            }
        }
        printf("\n");
    }

    return 0;
}
