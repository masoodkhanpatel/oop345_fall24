#include <iostream>
#include <memory>
#include "SmartPointer.h"

class Student {
public:
	~Student() {
		std::cout << "Student deleted.\n";
	}
};

int main() {
	//Student* s2 = new Student();
	//Student* s3 = new Student();

	//SmartPtr<Student> p1(new Student());
	//SmartPtr<Student> p2(s2);
	//SmartPtr<Student> p3(s3);

	//std::unique_ptr<Student> p4(new Student());
	
	Student* s5 = new Student();
	std::shared_ptr<Student> p6(s5);
	{

		std::shared_ptr<Student> p5(p6);
	
	}
	std::cout << "p5 is out of scope.\n";


}
