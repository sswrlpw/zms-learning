#include <iostream>
using namespace std;
void move(int m,char a,char b,char c) //把编号为m的盘子通过b从a移动到c
{
    cout << m << ":" << a << "->" << c << endl;
};
void hanoi(int number,char a,char b,char c){  //number个盘子通过b从a移动到c
    if (number == 1)
        cout << number << ":" << a << "->" << c << endl;
    else
        {
        hanoi(number-1,a,c,b);
        move(number,a,b,c);
        hanoi(number-1,b,a,c);
        }
};
int main(){
    char a,b,c ;int number;
    cin >> number >> a >> b >> c;
    hanoi(number,a,b,c);
    system("pause");
    return 0;
}
