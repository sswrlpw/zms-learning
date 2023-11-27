#include <iostream>
using namespace std;
class Triangle{
public:
    Triangle(double s1,double s2,double s3);
    void getType();

private:
    double size1,size2,size3;
};

Triangle::Triangle(double s1,double s2, double s3):size1(s1),size2(s2),size3(s3){}; //构造函数

void Triangle::getType(){                                           //判断三角形类型
    if (size1 == size3 && size1 == size2)
    {
        cout << "等边三角形" << endl;
    }
    else if (size1 == size3 || size2 == size3 || size1 == size2)
    {
        cout << "等腰三角形" << endl;
    }
    else{
        cout << "不等边三角形" << endl;
    }
}

int main(){
    double size1,size2,size3;
    cout << "请输入三条边长" << endl;
    cin >> size1 >> size2 >> size3;
    Triangle myTriangle(size1,size2,size3);
    myTriangle.getType();
    system ("pause");
    return 0;

}
