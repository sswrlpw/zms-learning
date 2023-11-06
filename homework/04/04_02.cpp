#include <iostream>
using namespace std;
int fibonacci(int a){ //计算第a位的斐波那契数列
    int sum = 0;
    if (a <= 2)
    {
        sum = 1;
    }
    else
    {
        sum += fibonacci(a-1)+fibonacci(a-2);
    }
    return sum;
}
int main(){
    int num,a;
    cin >> num;
    for (int i = 1; i <= num ;i++)
    {
    cin >> a ;
    cout << fibonacci(a) << endl;
    }
    system ("pause");
    
}