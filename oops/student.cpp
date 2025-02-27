#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int number;
    int grid;
    string course;
    int fees;

public:
    Student(string name, int number, int grid, string course, int fees)
    {
        name = name;
        number = number;
        grid = grid;
        course = course;
        fees = fees;
    }


    // 
};

int main()
{

    // Student std1 = new Student("jigar", 78346578, 6788, "full stack", 93784);
    // Student std1("abc", 78346578, 6788, "full stack", 93784);

    // cout << std1.name << endl;

    return 0;
}