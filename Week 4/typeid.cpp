//// Downcast within the Hierarchy
//// downcast.cpp
//
//#include <iostream>
//
//class Base {
//public:
//    virtual void display() const { std::cout << "Base\n"; }
//};
//class Derived : public Base {
//public:
//    void display() const { std::cout << "Derived\n"; }
//};
//
//void callDisplay(Base* obj) {
//    obj->display();
//}
//
//int main() {
//    Base* b1 = new Base;
//    Base* b2 = new Derived; // Person* p = new Student;
//
//    callDisplay(b1);
//    callDisplay(b2);
//
//    //Derived* d1 = dynamic_cast<Derived*>(b1); // Base to Derived
//    //Derived* d2 = dynamic_cast<Derived*>(b2);
//
//    /*if (d1 != nullptr)
//        d1->display();
//    else
//        std::cout << "d1 conversion has failed" << std::endl;
//
//    if (d2 != nullptr)
//        d2->display();
//    else
//        std::cout << "d2 conversion has failed" << std::endl;*/
//
//    std::cout << typeid(*b2).name() << std::endl;
//    //std::cout << typeid(*d2).name() << std::endl;
//
//}