#include <iostream>
using namespace std;
class Student{   
public:
    Student(string name,string klass,int number,double score);
    void getInfo();
    static int getCount(){
        cout << "创建了" << count << "个学生对象。" <<endl;
        return count;
    };
private:
    string name,klass;
    int number;
    double score;
    static int count;
    
};

Student::Student(string name,string klass,int number,double score):name(name),klass(klass),number(number),score(score){
    count++;
};

void Student::getInfo(){                     //获取学生信息
    cout << "姓名：" << name << endl;
    cout << "班级：" << klass << endl;
    cout << "学号：" << number << endl;
    cout << "分数：" << score << endl;
    if (score >=90 ) {
        cout << "成绩：" << "A" << endl;
    }
    else if (score >=70 && score <90){
        cout << "成绩：" << "B" << endl;
    }
    else if (score >=60 && score<80){
        cout << "成绩：" << "C" << endl;
    }
    else{
        cout << "成绩：" << "D" << endl;
    }
};

int Student::count = 0;  // 初始化静态变量

int main(){
    Student student1("张三","A",2201,87);
    Student Student2("李四","B",2202,75);
    student1.getInfo();
    Student2.getInfo();
    Student::getCount();
    system("pause");
    return 0;
}

