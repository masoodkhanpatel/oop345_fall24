//// Liskov Substitution Principle - Rectangle
//// liskov_rectangle.cpp
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
//class Rectangle : public Square
//{
//    double height;
//public:
//    void setHeight(double h) { height = h; }
//    double getHeight() const { return height; }
//};
//
//void set(Square& s, double d)
//{
//    s.setWidth(d);
//}
//
//void setheight(Rectangle& abc, double d) {
//    abc.setHeight(d);
//}
//
//int main()
//{
//    Square s;
//
//    s.setWidth(20.0);
//    std::cout << "Square : " << s.getWidth() << std::endl;
//
//    Rectangle r;
//    r.setWidth(10.0);
//    r.setHeight(30.0);
//    std::cout << "Rectangle : " << r.getWidth() << ", " << r.getHeight() << std::endl;
//
//    set(s, 15.0);
//    std::cout << "Square : " << s.getWidth() << std::endl;
//
//    set(r, 25.0);
//    std::cout << "Rectangle : " << r.getWidth() << ", " << r.getHeight() << std::endl;
//}
//
//// Design your classes such a way, 
//// if a function uses a Base class object,
//// all the derived class object must also be valid for the same function
//
//
//
