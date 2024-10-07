// Normal Exits
// exit.cpp

#include <iostream>

class Person {
public:
    virtual void doSomething() = 0;
};

class Student : public Person {
public:
    void doSomething() {

    }
};

class Employee : public Person {
public:
    void doSomething() {

    }
};

void first()
{
    std::cout << "In exit_1\n";
}

void second()
{
    std::cerr << "In exit_2\n"; // std::cout
    // std::ostream
}

int main()
{
    int i;
    std::terminate();
    std::atexit(second); // at exit, call second
    std::cout << "Return(!=1), Exit(1) ? ";
    std::cin >> i;
    if (i == 1)
    {
        std::atexit(first); // at exit, call first


    }
    return i;

    Student* s1 = new Student();
    Student* s2 = new Student();
    Student* s3 = new Student();
    Student* s4 = new Student();
    Student* s5 = new Student();


    Student students[5]; // static memory
    students[0] = *s1;
    students[1] = *s2;
    students[2] = *s3;

    Student* students2 = new Student[10];
    students2[0] = *s1;

    Student** students3;
    students3 = new Student * [99];

    delete[] students;

    Person* persons[5];
    persons[0] = new Student();
    persons[1] = new Employee();

}