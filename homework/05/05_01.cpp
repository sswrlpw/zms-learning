#include <iostream>
using namespace std;
class Circle{
public:
    Circle(double r);    // 构造函数

    double getArea();    //  成员函数
    double getRound();
private:
    double radius;
};

Circle::Circle(double r):radius(r){} // 构造函数的实现

double  Circle::getArea(){          // 面积
    double area;
    area = radius*radius*3.14;
    cout << "面积为" << area << endl;
    return area;
}

double  Circle:: getRound(){        //周长
    double round;
    round = 2*radius*3.14;
    cout << "周长为" << round << endl;
    return round;
}

int main(){
    Circle myCircle(5);
    myCircle.getRound();
    myCircle.getArea();
    system("pause");
    return 0;

}