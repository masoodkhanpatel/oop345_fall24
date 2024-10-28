//// String View Class
//// string_view.cpp
//
//#include <iostream>
//#include <string>
//#include <string_view>
//
//int main()
//{
//    std::string str("Hello");
//    str += '\0'; // adds a null byte
//    str += " World"; // adds a string
//
//    int i = 0;
//
//    std::string_view str_view(str);
//
//    for (const auto& c : str_view)
//        if (str_view[i++] == '\0')
//            std::cout << "Null byte at str_view[" << i - 1 << "]\n";
//
//    std::cout << str_view << std::endl;
//}