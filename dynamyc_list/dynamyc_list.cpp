// dynamyc_list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "list.h"

int main()
{
    char str[] = { "test dynamic list" };
    char** list = NULL;
    CreateList(&list, str);
    AddElem(&list, str + 1);
    AddElem(&list, str + 2);
    AddElem(&list, str + 3);
    AddElem(&list, str + 4);
    
    int pos = 0;
    char* elem = NULL;
    do
    {
        elem = ReadElem(&list, pos);
        printf("Address: %p\n", elem);
        printf("Element: %s\n", elem);
        ++pos;
    } while (elem); 

    std::cout << std::endl << std::endl;
    
    RemoveElem(&list, 3);

    pos = 0;
    elem = NULL;
    do
    {
        elem = ReadElem(&list, pos);
        printf("Address: %p\n", elem);
        printf("Element: %s\n", elem);
        ++pos;
    } while (elem);

    RemoveAllElem(&list);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file