#include "raining.hpp"

#include <iostream>
#include <cstring>
#include <algorithm>

void businessSort()
{
    const int SIZE = 100;
    std::vector<char*> businesses;
    bool keepGoing = false;
    std::cout << "Welcome to the Business Sorting Program!\n";
    do
    {
        char businessName[SIZE] = "";
        std::cout << "Please enter the name of a business: ";
        std::cin.getline(businessName, SIZE);
        businesses.push_back(strdup(businessName));
        std::sort(businesses.begin(), businesses.end(), cstringLess);

        if (businesses.size() == 1)
        {
            std::cout << "Your business is: \n";
        }
        else
        {
            std::cout << "Your businesses are: \n";
        }

        for (auto business : businesses)
        {
            std::cout << business << "\n";
        }

        while (true)
        {
            char another[SIZE];
            std::cout << "Another business? ";
            std::cin.getline(another, SIZE);

            for (char &c : another)
            {
                c = std::tolower(c);
            }

            if (std::strcmp(another, "n") == 0 || std::strcmp(another, "no") == 0)
            {
                keepGoing = false;
                std::cout << "Thank you for using the Business Sorting Program!" << std::endl;
                break;
            }
            else if (std::strcmp(another, "y") == 0 || std::strcmp(another, "yes") == 0)
            {
                keepGoing = true;
                break;
            }
            else
            {
                std::cout << "Not an acceptible answer, please try again.\n";
            }
        }
    } while (keepGoing);

    for (auto ptr : businesses) 
    {
        delete[] ptr;
    }
}

bool cstringLess(const char* a, const char* b) {
    return std::strcmp(a, b) < 0;
}