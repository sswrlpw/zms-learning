#include <iostream>
using namespace std;
int main(){
    for (int i = 200;i <= 300;i++) {    //i 为当前被检测数
        for (int j = 2;j * j <= i;j++) {
            int m;
            m = i % j;
            if (m==0){   //检测是否为合数，若不是，退出循环，进到下一个
                break;
            }
            int n;         //判断下一步是否退出循环
            n = j + 1;
            if (n * n > i){
                cout << i << " ";
            } 
        }
    }
    system("pause");
    return 0;

}