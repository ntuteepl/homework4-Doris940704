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

    int drivers = 0; // 最少司机数量
    int driver_end_time[100]; // 司机的返回时间数组

    for (int i = 0; i < n; i++) {
        int driver_found = 0;
        for (int j = 0; j < drivers; j++) {
            if (s[i] >= driver_end_time[j]) {
                driver_end_time[j] = d[i];
                driver_found = 1;
                break;
            }
        }
        if (!driver_found) {
            driver_end_time[drivers] = d[i];
            drivers++;
        }
    }

    // 输出最少司机数量
    printf("%d\n", drivers);

    // 输出每位司机的时间表
    for (int i = 0; i < drivers; i++) {
        int driver_start_time = s[0];
        for (int j = 0; j < n; j++) {
            if (s[j] >= driver_start_time && d[j] <= driver_end_time[i]) {
                if (driver_start_time != s[j]) {
                    printf(" ");
                }
                printf("%d %d", s[j], d[j]);
                driver_start_time = d[j];
            }
        }
        printf("\n");
    }

    return 0;
}
