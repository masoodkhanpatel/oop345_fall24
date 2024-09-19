//// Copy-Construction, Copy-Assignment and Subscripting Operator
//// copy_assign.cpp
//#include <iostream>
//
//class Array
//{
//    int* a = nullptr;
//    unsigned n = 0u;
//    int dummy = 0;
//
//public:
//    Array() {}
//    Array(unsigned no) : a(new int[no]), n(no) {}
//    Array(const Array& src) { *this = src; }
//
//    Array& operator=(const Array& src)
//    {
//        if (this != &src)
//        {
//            delete[] a;
//            n = src.n;
//            dummy = src.dummy;
//            a = new int[src.n];
//            for (unsigned i = 0u; i < src.n; ++i)
//                a[i] = src.a[i];
//        }
//        return *this;
//    }
//
//    ~Array() { delete[] a; }
//
//    int& operator[](unsigned i)
//    {
//        return n > 0u && i < n ? a[i] : dummy;
//    }
//
//    int operator[](unsigned i) const
//    {
//        return n > 0u && i < n ? a[i] : dummy;
//    }
//
//    unsigned size() const { return n; }
//}; // Class A; A b; b[23]
//
//
//int main()
//{
//    const unsigned size = 5;
//    Array a(size), b;
//
//    for (unsigned i = 0u; i < a.size(); ++i)
//        a[i] = 3 * i;
//
//    std::cout << "a:\n";
//    for (unsigned i = 0u; i < a.size(); ++i)
//        std::cout << a[i] << ' ';
//    std::cout << std::endl;
//
//    b = a;
//
//    std::cout << "b:\n";
//    for (unsigned i = 0u; i < b.size(); ++i)
//        std::cout << b[i] << ' ';
//    std::cout << std::endl;
//}