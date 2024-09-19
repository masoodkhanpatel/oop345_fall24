//// Liskov Substitution Principle
//// liskov_square.cpp
//#include <iostream>
//
//class Square
//{
//    double width;
//public:
//    void setWidth(double w) { width = w; }
//    double getWidth() const { return width; }
//};
//
//void set(Square& s, double d)
//{
//    s.setWidth(d);
//}
//
//int main()
//{
//    Square s;
//
//    s.setWidth(20.0);
//    std::cout << "Square : " << s.getWidth() << std::endl;
//
//    set(s, 15.0);
//    std::cout << "Square : " << s.getWidth() << std::endl;
//}