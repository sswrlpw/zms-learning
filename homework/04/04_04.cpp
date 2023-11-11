#include <iostream>
using namespace std;
int main(){
    char ch[80];
    cin.getline(ch,80);
    for (char& c : ch){    // 遍历并通过ASCII码改变大小写
        if (int(c) > 64 && int(c) <91){
            c = c+32;
                // cout << ch << endl;
        }
        else if (int(c) >96 && int(c) < 123){
            c = c-32;
                // cout << ch << endl;
        }
    }
    cout << ch;
    system("pause");
    return 0;

}
