//// Copy and Move
//// copy_move.cpp
//#include <iostream>
//#include <utility>
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
//
//    // the COPY constructor
//    Array(const Array& src) { *this = src; }
//
//    // the MOVE constructor
//    Array(Array&& src) { *this = std::move(src); } // std::move makes the object into rvalue
//
//    // the COPY assignment operator
//    Array& operator=(const Array& src)
//    {
//        // 1. check for self-assignment
//        if (this != &src)
//        {
//            // 2. clean-up the resource used by the current instance
//            delete[] a;
//
//            // 3. shallow copy
//            n = src.n;
//            dummy = src.dummy;
//
//            // 4. deep copy
//            a = new int[src.n];
//            for (unsigned i = 0u; i < src.n; ++i)
//                a[i] = src.a[i];
//        }
//        return *this;
//    }
//
//    // the MOVE assignment operator
//    Array& operator=(Array&& src)
//    {
//        // 1. check for self-assignment
//        if (this != &src)
//        {
//            // 2. clean-up the resource used by the current instance
//            delete[] a;
//
//            // 3. shallow copy
//            n = src.n;
//            dummy = src.dummy;
//
//            // 4. move the resource from parameter into current instance
//            a = src.a;       // copy address to current object
//            src.a = nullptr; // the parameter doesn't have the resource anymore
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
//};
//
//
//int main()
//{
//    const unsigned size = 5;
//
//    Array a(size), b;
//    for (unsigned i = 0u; i < a.size(); ++i)
//        a[i] = 3 * i;
//
//
//    std::cout << "Copy-Assignment\n";
//
//    std::cout << "a : ";
//    for (unsigned i = 0u; i < a.size(); ++i)
//        std::cout << a[i] << ' ';
//    std::cout << std::endl;
//
//    b = a; // calls copy-assignment
//
//    std::cout << "b : ";
//    for (unsigned i = 0u; i < b.size(); ++i)
//        std::cout << b[i] << ' ';
//    std::cout << std::endl;
//
//    std::cout << "-------------------------------\n";
//
//    std::cout << "a : ";
//    for (unsigned i = 0u; i < a.size(); ++i)
//        std::cout << a[i] << ' ';
//    std::cout << std::endl;
//
//
//    std::cout << "Move-Assignment\n";
//
//    b = std::move(a); // calls move-assignment
//
//    
//
//    std::cout << "b : ";
//    for (unsigned i = 0u; i < b.size(); ++i)
//        std::cout << b[i] << ' ';
//    std::cout << std::endl;
//
//    std::cout << "a : ";
//    for (unsigned i = 0u; i < a.size(); ++i)
//        std::cout << a[i] << ' ';
//    std::cout << std::endl;
//}