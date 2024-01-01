#include <iostream>
#include <forward_list>
using namespace std;



template<typename T>
void filterList(forward_list<T>& myList, const T& threshold) {
    myList.remove_if([&threshold](const T& value) { return value < threshold; });
}

int main() {
    forward_list<int> myList;
    int num;
    int threshold;

    cout << "请输入整数序列（以非整数结束输入）：" << endl;

    // 从标准输入读取整数并将其添加到单向链表中
    while (cin >> num) {
        myList.push_front(num);
    }

    // cout << cin.rdstate() << endl; // 查看错误状态
    cin.clear(); // 清除错误表示符
    cin.sync();  // 清除缓冲区内容
    // cout << cin.rdstate() << endl; // 查看错误状态
    cout << "请输入阈值：" << endl;
    cin >> threshold;

    // 调用 filterList 函数移除小于阈值的元素
    filterList(myList, threshold);

    // 打印处理后的链表元素
    cout << "处理后的链表元素为：" << endl;
    for (const auto& element : myList) {
        cout << element << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
