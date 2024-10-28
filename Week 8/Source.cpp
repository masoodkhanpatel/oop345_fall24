//#include <iostream>
//#include <array>
//#include <cstddef>
//#include <string>
//
//class ABC {
//	int a;
//};
//
//const char* abcd(std::string abc) {
//	return abc.c_str();
//}
//
//int main() {
//	ABC a;
//	std::cout << typeid(a).name() << "\n";
//	std::cout << sizeof(a) << "\n";
//
//
//	std::array<std::size_t, 10> b;
//
//	// 3 + 4i
//
//	std::string a1;
//	a1 = "Hello";
//	// std::cout << a1.at(99) << "\n";
//	std::cout << a1.c_str() << "\n"; // const char*
//
//
//	std::cout << a1.empty() << "\n"; // const char*
//
//
//	 std::string str1("Hello");
//     std::string str2("World");
//     std::string str3("His");
//
//     std::string str4;
//     std::cout << str4.empty() << "\n"; // returns true i.e. 1
//     str4 = str1 + str2 + str3;
//     std::cout << str4.empty() << "\n"; // returns false i.e. 0
//     std::cout << str4 << "\n";
//     std::cout << str4.size() << "\n";
//     std::cout << str4.find('i') << "\n";
//     str4.clear(); //  empty the string
//     std::cout << str4.size();
//
//     // int i=0;
//     // for(const auto& x:str4){
//     //     if(str4[i++]=='\0')
//     //         std::cout << "null byte found";
//     // }
//
//
//
//     // for (const auto& abc: str)
//     //     if (str[i++] == '\0')
//     //         std::cout << "Null byte at str[" << i-1 << "]\n";
//}