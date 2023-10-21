#include <iostream>
#include <math.h>
using namespace std;
int main(){               // 计算一元二次方程的根
    double a,b,c; 
    cout << "请输入三个正整数" << endl;
    cin >> a >> b >> c;
    if (a == 0)
        cout << "a不能为0" << endl;
    else if (a > 0)
    {   
        double deta;
        deta = b * b - 4 * a * c;
        if (deta >= 0)   // 判断deta，分析根
        {
            double x1,x2;
            x1 = (-b + sqrt(deta)) / 2 / a;
            x2 = (-b - sqrt(deta)) / 2 / a;
            if (x1 == x2)
            {
                cout << "方程根为" << x1 << endl;
            }
            else 
            {
                cout << "方程根为" << x1 << "和" << x2 << endl;
            }

        }
        else if (deta < 0)
        {
            cout << "方程无根" << endl;
        }
    }
    system("pause");
    return 0;


}