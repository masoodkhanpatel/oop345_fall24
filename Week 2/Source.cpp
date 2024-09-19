//#include <iostream>
//
//void foo(int& a) {
//	std::cout << "lvaue: " << a << "\n";
//}
//
//void foo(int&& a) {
//	std::cout << "rvaue: " << a << "\n";
//}
//
//int temp = 5;
//
//int& foo() {
//	return temp;
//}
//
//class Student {
//	int sid;
//public:
//	int& sidvalue() {
//		return sid;
//	}
//};
//
//int main() {
//	//int x = 3; // has a location or address in memory
//	//int y = 5; // ""
//	//int z = x + y; // ""
//	//3 = x; // 
//	//67 = 5;
//
//	//int abc = foo();
//	std::cout << temp << "\n";
//	foo() = 99;
//	std::cout << temp << "\n";
//	foo() = 100;
//	std::cout << temp << "\n";
//	//int x = 5;
//	//foo(x);
//	//foo(3);
//
//	Student a;
//	a.sidvalue() = 1001;
//	std::cout << a.sidvalue() << "\n";
//}