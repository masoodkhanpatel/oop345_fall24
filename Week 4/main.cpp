//#include <iostream>
//
//class Person {
//
//};
//
//class Student:public Person {
//	
//public:
//	static double gpa;
//	Student& foo() {
//		return *this;
//	};
//};
//
//
//
//double Student::gpa = 3.99;
//
//int main() {
//	double a[10];
//	int i = 2;
//
//	a[i] = 6; // lvalue
//	(i) = 6;
//	int* b = &i;
//	*b = 99; // *(&i) -> i
//	std::cout << i << std::endl;
//
//	Person* s = new Student;
//	// s -> (&new Student)
//	int x = 3 + 1;
//	b = &x;
//
//
//	char  name[] = "Jane Doe"; // name[1] = 'a'
//	char* surname = nullptr;
//
//	surname = &name[5];
//	// surname[-2] = 'e'
//	std::cout << surname << std::endl;
//	surname[-1] = '.';  // changes "Jane Doe" to "Jane.Doe"
//	std::cout << name << std::endl;
//	surname[-5] = 'S';
//	std::cout << name << std::endl;
//
//	// BODMAS
//	// 4 + 12 * 3 = 40
//
//	x = Student::gpa + (9.99 + a[0]);
//	std::string sid = typeid(*s).name();
//	std::cout << sid << std::endl;
//
//}