//// Direct Selection
//// direct.cpp
//
//#include <iostream>
//
//typedef struct
//{
//    int x;
//    double y;
//} S;
//
//S* add2(S* s)
//{
//    s->x += 2;
//    s->y += 2;
//    return s;
//}
//
//int main()
//{
//    S s = { 0, 0.0 };
//
//    s.x = 1; // lvalue
//    add2(&s)->x++;
//    std::cout << "x = " << s.x << "; y = " << s.y << std::endl;
//}