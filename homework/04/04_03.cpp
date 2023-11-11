#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long double a , b;
    cin >> a >> b;
    int x = 20;
    while (x<=20){   //逐个判断
        if(pow(a,x)<=b){
            cout << x;
            break;
        }
        x--;
    }
    system ("pause");
    return 0;
}
