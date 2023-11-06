#include <iostream>
using namespace std;
int main(){
    int day,i = 0; //day是输入的日期，i用于计算星期几
    cout << "请输入日期" << endl;
    cin >> day;
    i = day % 7;
    switch (i)
    {
    case 0:
        cout << "星期日" << endl;
        break;
    case 1:
        cout << "星期一" << endl;
        break;
    case 2 :
        cout << "星期二" << endl;
        break;
    case 3 :
        cout << "星期三" << endl;
        break;
    case 4 :
        cout << "星期四" << endl;
        break;
    case 5 :
        cout << "星期五" << endl;
        break;
    case 6:
        cout << "星期六" << endl;
        break;
    }
    system("pause");
    return 0;
}