#include <iostream>
using namespace std;
int main(){
    bool j1 = true; //j1控制游戏打开状态
    while (j1)
    {
        int p1,p2; //p1为玩家，p2为电脑
        p2 = rand() % 3;
        while (true) //判断玩家输入是否规范
        {
            cout << "石头(0)，剪刀(1),布(2):" << endl;
            cin >> p1 ;
            if (p1 == 0 || p1 == 1 || p1==2)
                break;
            else
                cout << "输入有误，请重新输入" << endl;
        }
        int result = p1-p2;
        switch (result)     //判断结果
        {
            case 0:
                cout << "平手，再来一局" << endl;
                break;
            case 1:
            case -2:
                cout << "你输了" << endl;
                break;
            case -1:
            case 2:
                cout << "你赢了" <<endl;
        }
        if (result != 0)
        {
            cout << "继续(1)或退出(0):" << endl;
            cin >> j1 ;
        }
    }
    system("pause");

 
}