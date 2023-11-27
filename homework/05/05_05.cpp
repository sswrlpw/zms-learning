#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double getArea()   {            //虚函数
        return 0;                       
    }

    virtual double getPerimeter()   {
        return 0; 
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea()   override {                   //重写虚函数
        return M_PI * radius * radius;              
    }

    double getPerimeter()   override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea()   override {
        return length * width;
    }

    double getPerimeter()   override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double getArea()   override {
        // 海伦公式计算三角形面积
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double getPerimeter()   override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);

    // 输出圆的面积和周长
    cout << "圆的面积为：" << circle.getArea() << endl;
    cout << "圆的周长为：" << circle.getPerimeter() << endl;

    // 输出矩形的面积和周长
    cout << "矩形的面积为：" << rectangle.getArea() << endl;
    cout << "矩形的周长为：" << rectangle.getPerimeter() << endl;

    // 输出三角形的面积和周长
    cout << "三角形的面积为：" << triangle.getArea() << endl;
    cout << "三角形的周长为：" << triangle.getPerimeter() << endl;

    system ("pause");
    return 0;
}
