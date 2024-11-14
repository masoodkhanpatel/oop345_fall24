// Smart Pointers
// Title.h

#include <iostream>

class Title
{
    const char* title; // c style string
    const char* validTitle() const
    {
        if (!title[0])
            throw "invalid title"; // throwing exception if title is invalid

        return title; // otherwise, return the title itself (if valid)
    }

public:
    Title(const char* s) : title(s) {}
    ~Title() {
        std::cout << title << " " << "deleted.\n";
    }

    void display() const
    {
        std::cout << validTitle() << std::endl;
    }
};