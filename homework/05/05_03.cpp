#include <iostream>
using namespace std;
class Point{                    
public:
    Point(double xx,double yy);
    void showPoint();
    void changePoint(double xx,double yy);

private:
    double x,y;
};

Point::Point(double xx, double yy):x(xx),y(yy){};       //构造函数：点

void Point::showPoint(){                        //成员函数：显示点的坐标
    cout << x << y << endl;
}

void Point::changePoint(double xx,double yy){  //成员函数：改变点的坐标
    x = xx;
    y = yy;
    cout << "更改为" << xx << yy << endl;
}


class Rectangle{
public:
    Rectangle(Point xp1, double L ,double W);
    double getSquare();
    double getCircumference();
private:
    Point p1;
    double length,width;
};

Rectangle::Rectangle(Point xp1, double L, double W):p1(xp1),length(L),width(W){ //构造函数：长方形
}

double Rectangle::getSquare(){                          //成员函数：计算面积
    double square;
    square = length*width;
    cout << "面积为" << square << endl;
    return square;
}
double Rectangle::getCircumference(){                   //成员函数：计算周长
    double circumference;
    circumference = 2*(length + width);
    cout << "周长为" << circumference << endl;
    return circumference;
}

int main(){
    Point myPoint(2,5);
    // myPoint.showPoint();
    // myPoint.changePoint(3,3);
    Rectangle myRectangle(myPoint,6,2);
    myRectangle.getCircumference();
    myRectangle.getSquare();
    system ("pause");
    return 0;
}