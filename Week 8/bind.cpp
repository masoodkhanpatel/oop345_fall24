//#include<iostream>
//#include<string>
//#include <functional>
//
//auto login(std::string username, std::string pass) {
//
//	if(username=="student")
//	         std::cout << "Login successfull";
//	     else
//	         std::cout << "Login Fail";
//}
//
//auto add(int x, int y) {
//	return x+y;
//}
//
//int main() {
//	std::function<void(std::string, std::string)> a1 = login;
//
//	std::function<void(std::string)> myLogin = std::bind(login, "student", std::placeholders::_1);
//	// a1("student", "abc");
//
//	myLogin("abc"); // std::placeholders::_1 = "abc"
//
//	auto add10 = std::bind(add, 10, std::placeholders::_1);
//	std::cout << "\n" << add10(5);
//	std::cout << "\n" << add10(9);
//}