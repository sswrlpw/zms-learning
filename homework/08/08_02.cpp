
#include <iostream>
#include <deque>
#include <sstream>
#include <string>

using namespace std;

int main() {
    deque<int> myQueue;
    string input;

    cout << "请输入命令 ('push <value>', 'pop', 'print', 'exit')：" << endl;

    while (true) {
        getline(cin, input);
        istringstream iss(input);
        string command;
        iss >> command;

        if (command == "push") {
            int value;
            if (iss >> value) {
                myQueue.push_back(value);
                cout << value << " 已入队" << endl;
            } else {
                cout << "无效的 push 命令，请输入整数值" << endl;
            }
        } else if (command == "pop") {
            if (!myQueue.empty()) {
                int frontValue = myQueue.front();
                myQueue.pop_front();
                cout << frontValue << " 已出队" << endl;
            } else {
                cout << "队列已空，无法出队" << endl;
            }
        } else if (command == "print") {
            cout << "队列中的元素为：";
            for (const auto& element : myQueue) {
                cout << element << " ";
            }
            cout << endl;
        } else if (command == "exit") {
            cout << "退出程序" << endl;
            break;
        } else {
            cout << "未知命令，请重新输入" << endl;
        }
    }
    system ("pause");
    return 0;
}
