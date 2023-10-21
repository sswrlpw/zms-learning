#include <iostream>
using namespace std;
int main(){
    int size, i=1; //size为输入的行数，i用于定位输入第几行
    cout << "输入金字塔行数" << endl;
    cin >> size;
    while(size > 0)
    {
        int j1 = size-1,j2 = size-1,j3 = i * 2-1;
        for (;j1 > 0;j1--)
        {
            cout << ' ';
        }
        for (;j3 > 0;j3--)
        {
            cout << "*";
        }
        for (;j2 > 0;j2--)
        {
            cout << " ";
        }
        cout << endl;
        size--;
        i++;
    }
    system("pause");
    return 0;
}
