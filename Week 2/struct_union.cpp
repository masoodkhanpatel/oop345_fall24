// Structs with Unions
// struct_union.cpp

#include <iostream>
#include <cstring>

enum ProductId { sku = 3, upc = 4 };


typedef struct 
{
    ProductId id; // enumeration type holds a symbolic constant
    union // some have skus, some upcs
    {
        int  sku;
        char upc[13];
    } code;
    char desc[100];
} Product;


int main()
{
    Product p[2];

    p[0].id = sku;
    p[0].code.sku = 4789;
    std::strcpy(p[0].desc, "A history book about ancient Rome.");

    p[1].id = upc;
    std::strcpy(p[1].code.upc, "0360002607555");
    std::strcpy(p[1].desc, "A universal remote control for TVs.");
   

    for (int i = 0; i < 2; i++)
    {
        switch (p[i].id)
        {
        case sku:
            std::cout << p[i].code.sku << std::endl;
            break;
        case upc:
            std::cout << p[i].code.upc << std::endl;
            break;
        }
    }
}