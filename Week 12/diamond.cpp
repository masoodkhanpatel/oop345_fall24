//// Diamond problem in C++
//
//#include <iostream>
//
//class A {
//public:
//	void show() {
//		std::cout << "Class A" << std::endl;
//	}
//};
//
//class B :  public A{
//};
//
//class C :  public A {
//};
//
//// Diamond problem
//class D : public B, public C {
//};
//
//
//
//
//int main() {
//
//	B objB;
//	C objC;
//
//	std::cout << "B objB:" << std::endl;
//	objB.show();
//	std::cout << "C objC:" << std::endl;
//	objC.show();
//
//	D obj; // grandchild class object
//
//	std::cout << "D obj:" << std::endl;
//	obj.show(); // error: request for member ‘show’ is ambiguous
//	// fix: implement virtual inheritance
//
//	std::cout << "D obj via Parent B:" << std::endl;
//	obj.B::show(); // resolve ambiguity explicitly
//
//	std::cout << "D obj via Parent C:" << std::endl;
//	obj.C::show(); // resolve ambiguity explicitly
//	return 0;
//}
//
//
//// fix: virtual inheritance