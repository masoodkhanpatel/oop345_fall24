//#include <iostream>
//
//class A {
//public:
//	virtual void display() {
//		std::cout << "A" << std::endl;
//	}
//};
//
//class B : virtual public A {
//public:
//	void display() {
//		std::cout << "B" << std::endl;
//	}
//};
//
//class C : virtual public A {
//public:
//
//};
//
//class D : virtual public B, virtual public C {
//public:
//};
//
//int main() {
//	D d;
//
//
//	d.B::display();
//
//	d.C::display(); 
//	// Because C is derived from A
//	// C does not have a display() method
//	// So, it will call A::display() instead
//
//	d.A::display();
//
//	d.display(); // conflict between B and C
//	// call display() from B or C?
//	// This will cause an error
//
//	// Implement virtual inheritance
//}
//
