#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 函数用于去除重复元素并按升序排序
void uniqueSort(vector<int>& vec) {
    // 对容器进行排序
    sort(vec.begin(), vec.end());

    // 使用unique函数去除相邻的重复元素
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

int main() {
    vector<int> myVector;
    int num;

    cout << "请输入整数序列（以非整数结束输入）：" << endl;

    // 从标准输入读取整数并将其添加到向量中
    while (cin >> num) {
        myVector.push_back(num);
    }

    // 调用 uniqueSort 函数去除重复元素并按升序排序
    uniqueSort(myVector);

    // 打印处理后的容器元素
    cout << "处理后的容器元素为：" << endl;
    for (const auto& element : myVector) {
        cout << element << " ";
    }
    cout << endl;
    system ("pause");
    return 0;
}
