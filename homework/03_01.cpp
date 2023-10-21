#include <iostream>
using namespace std;
int main(){
    int number1,number2;
    cout << "请输入用于比较的两个数" << endl;
    cin >> number1 >>number2;
    if (number1 > number2)  // 使用if else 比较
        cout << number1 << "大于" << number2 << endl;
    else if (number1 == number2)
        cout << number1 << "等于" << number2 << endl;
    else if (number1<number2)
        cout << number1 << "小于" << number2 << endl;
    system("pause");
    return 0;
}
