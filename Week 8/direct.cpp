//// File Objects - Direct Access
//// direct.cpp
//
//#include <iostream>
//#include <fstream>
//
//int main(int argc, char* argv[])
//{
//    std::ofstream fo(argv[1]);      // open for output
//
//    fo << "Line 1" << std::endl;    // line 1
//    fo << "Line 2" << std::endl;    // line 2
//    fo << "Line 3" << std::endl << std::endl;    // line 3
//
//    //fo.seekp(0, std::ios::beg);     // go to the start of the file
//    //fo << "****";                   // overwrite four characters
//
//    //fo.seekp(4, std::ios::cur);     // go 4 char's beyond current
//    //fo << '#';                      // overwrite one character
//
//    //std::streampos p = fo.tellp();  // remember current position
//    //fo.seekp(0, std::ios::end);     // go to end of the file
//    //fo << "The last line\n";        // add a line
//
//    //fo.seekp(p);                    // jump back to pos
//    //fo << '^';                      // overwrite one character
//    //fo.close();                     // close file
//
//    //std::ifstream fi(argv[1]);      // open for reading
//    //char c;
//
//    //while (fi.get(c))               // read 1 character at a time
//    //    std::cout << c;             // display the character
//
//    //fi.clear();                     // clear failed (eof) state
//    //fi.seekg(-8, std::ios::end);    // move 8 bytes from end
//
//    //while (fi.get(c))               // read 1 character at a time
//    //    std::cout << c;             // display the character read
//}