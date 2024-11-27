//// Diamond problem in C++
//#include <iostream>
//
//class Person {
//public:
//	void displayName() {
//		std::cout << "Person::displayName()" << std::endl;
//	}
//};
//
//class Student : virtual public Person {};
//class Employee : virtual public Person {};
//
//class PartTimeEmployee : public Student, public Employee {};
//
//int main() {
//	Student student;
//	Employee employee;
//	student.displayName();
//	employee.displayName();
//
//	PartTimeEmployee partTimeEmployee;
//	partTimeEmployee.displayName(); // error: request for member ‘displayName’ is ambiguous
//
//	partTimeEmployee.Student::displayName(); // resolve ambiguity explicitly
//	partTimeEmployee.Employee::displayName(); // resolve ambiguity explicitly
//	return 0;
//}
