#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

struct Base2 { virtual void foo() {} }; // polymorphic
struct Derived2 : Base2 {};

int main() {

	//try {
	//	int a;
	//	std::cin >> a;
	//	int b;
	//	std::cin >> b;
	//	//int divideByZero = a / b;
	//	//std::cout << divideByZero << std::endl;
	//	if(b==0)
	//		throw "Divide by Zero"; // char*
	//	if (b > a)
	//		throw "b > a";
	//}
	//catch (const char* a) {
	//	std::cout << "Exception Caught: " << a;
	//}

	//try {
	//	throw std::overflow_error("Stack overflow!");
	//}
	//catch (std::overflow_error& a) {
	//	std::cout << "Caught Overflow";
	//}
	//catch (std::exception& e) {
	//	std::cout << "Caught Exception";
	//}

	double* mydoubleptr = nullptr;
	try
	{
		// dereferencing a null pointer: okay for a non-polymorphic expression
		std::cout << "mydoubleptr points to " << typeid(*mydoubleptr).name() << '\n';
		// dereferencing a null pointer: not okay for a polymorphic lvalue
		Derived2* bad_ptr = nullptr;
		std::cout << "bad_ptr points to... ";
		std::cout << typeid(*bad_ptr).name() << '\n';
	}
	catch (const std::bad_typeid& e)
	{
		std::cout << " caught " << e.what() << '\n';
	}
	
}