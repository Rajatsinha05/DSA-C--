#include <iostream>
using namespace std;

class Student
{
public:
    int grid;
    int number;
    string name;
    string course;
    int age = 20;

    Student()
    {
        cout << "Student constructor";
    }
    Student(int grid, int number, string name, string course)
    {
        this->grid = grid;
        this->number = number;
        this->name = name;
        this->course = course;
    }

    void printDetails()
    {

        cout << "Student name: " << this->name << endl;
        cout << "Student course: " << this->course << endl;
        cout << "Student age: " << this->age << endl;
        cout << "Student number: " << this->number << endl;
        cout << "Student grid: " << this->grid << endl;
    }

    ~Student()
    {
        cout << "Student destructor called  :" << this->name << endl;
    }
};

int main()
{

    Student s(3456, 543435, "Student", "full stack");
    // Student s2(4564, 543435678, "Student2", "full stack");
    Student *s2 = new Student(4564, 543435678, "Student2", "full stack");
    // s.grid = 89354;
    // s.number = 34858098;
    // s.name = "test";
    // cout << s.age << s.name << s.course << endl;
    // s.printDetails();
    s2->printDetails();
    delete s2;
    return 0;
}