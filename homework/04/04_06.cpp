#include <iostream>
using namespace std;

// 模拟约瑟夫过程，返回最后猴王的编号
int josephus(int n, int m) {
    int monkeys[301];  

    // 初始化猴子编号
    for (int i = 1; i <= n; ++i) {
        monkeys[i] = i;
    }

    int current = 1;
    int count = 0;
    int remaining = n;

    while (remaining > 1) {
        count++;
        if (count == m) {
            monkeys[current] = 0;  // 表示淘汰
            count = 0;
            remaining--;
        }

        current = current % n + 1;  // 循环计数
        while (monkeys[current] == 0) {
            current = current % n + 1;
        }
    }

    // 找到最后一个剩下的猴王
    for (int i = 1; i <= n; ++i) {
        if (monkeys[i] != 0) {
            return monkeys[i];
        }
    }

    return 0;
}

int main() {
    int n, m;
    while (cin >> n >> m && !(n == 0 && m == 0)) {
        int kingNumber = josephus(n, m);
        cout << kingNumber << endl;
    }
    system("pause");
    return 0;
}
