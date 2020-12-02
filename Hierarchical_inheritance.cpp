#include<iostream>
using namespace std;

class Human {
    public:
    int age;
    string fullName;
    string phoneNumber;
};

class Student : public Human {

    public:
    int id;
    string schoolName;

    void study() {
        cout<< "Studying"<< endl;
    }
};

class Employee : public Human {

    public:
    int id;
    string companyName;

    void work() {
        cout<< "Working"<< endl;
    }
};

int main(){

    Student student;
    student.id = 1;
    student.age = 15;
    student.fullName = "Elon";
    student.phoneNumber = +012153112;
    student.schoolName = "B-school of Harvard";
    student.study();

    Employee employee;
    employee.id = 1;
    employee.age = 15;
    employee.fullName = "Krish";
    employee.phoneNumber = +9032126964;
    employee.companyName = "apple.in";
    employee.work();

    Human businessman;
    businessman.phoneNumber = +26595457596;
    
return 0;
}