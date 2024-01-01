#include <iostream>
#include <list>
using namespace std; 

int main() {
    list<int> myList;
    int num;

    cout << "请输入整数（输入非整数以结束输入）：" << endl;

    // 从标准输入读取整数并将其添加到链表中
    while (cin >> num) {
        myList.push_back(num);
    }

    // 删除第一个和最后一个元素
    if (!myList.empty()) {
        myList.pop_front(); // 删除第一个元素
        if (!myList.empty()) {
            myList.pop_back(); // 删除最后一个元素
        }
    }

    // 打印剩余链表的内容
    cout << "剩余链表的内容为：" << endl;
    for (const int& element : myList) {
        cout << element << " ";
    }
    cout << endl;
    system ("pause");
    return 0;
}
