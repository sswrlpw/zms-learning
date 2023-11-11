#include <iostream>
#include <vector>
using namespace std;

// 判断当前位置是否可以放置皇后
bool isSafe(vector<int>& queens, int row, int col) {
    for (int i = 0; i < row; ++i) {
        if (queens[i] == col || abs(queens[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

// 回溯法
void solveQueens(vector<int>& queens, int row, int& count, int target) {
    if (row == 8) {
        count++;
        if (count == target) {
            for (int i = 0; i < 8; ++i) {
                cout << queens[i] + 1;
            }
            cout << endl;
        }
        return;
    }

    for (int col = 0; col < 8; ++col) {
        if (isSafe(queens, row, col)) {
            queens[row] = col;                              //回溯与递归
            solveQueens(queens, row + 1, count, target);
        }
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int target;
        cin >> target;

        vector<int> queens(8, 0);
        int count = 0;

        solveQueens(queens, 0, count, target);
    }
    system("pause");
    return 0;
}