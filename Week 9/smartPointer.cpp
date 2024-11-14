//#include <iostream>
//
//class Student {
//	float* grades;
//public:
//
//	Student() {
//		grades = new float[3];
//	}
//	~Student() {
//		std::cout << "Student object deleted.\n";
//		delete[] grades;
//	}
//
//};
//
//int main() {
//	Student a; // stack
//	Student* b = new Student();
//	delete b;
//}