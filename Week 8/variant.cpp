 //#include <iostream>
 //#include <variant>
 //#include <string>

 //using option = std::variant<int, double, std::string>;
 //// typedef
 //// option, std::variant<int, double, std::string>

 //void printOption(const option& o){
 //    if (std::holds_alternative<int>(o))
 //        std::cout << "User entered integer: " << std::get<int>(o) << "\n";
 //    else if (std::holds_alternative<double>(o))
 //        std::cout << "User entered double: " << std::get<double>(o) << "\n";
 //    else if (std::holds_alternative<std::string>(o))
 //        std::cout << "User entered string: " << std::get<std::string>(o) << "\n";
 //}

 //int main(){
 //    option userOption = "exit";
 //    // std::variant<int, double, std::string> userOption = "exit";
 //    printOption(userOption);

 //    userOption = 9.9; // change to double
 //    std::cout << "After changing to double\n";
 //    printOption(userOption);

 //    userOption = 99; // change to integer
 //    std::cout << "After changing to integer\n";
 //    printOption(userOption);

 //    return 0;

 //}
