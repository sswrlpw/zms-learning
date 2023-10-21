#include <iostream>
using namespace std;
int main(){
    int number,reverse = 0,i = 0,j = 0;
    cout << "请输入被操作数" << endl;
    cin >> number;
    do{                                         //i记录位数，j为当前取出的第一位
        i += 1;
        j = number % 10;
        reverse = reverse * 10 + j;
        number = number / 10;
    }
    while (number > 0);
    cout << reverse << endl << i <<endl;
    system("pause");
    return 0;

}