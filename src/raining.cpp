#include "raining.hpp"

void businessSort()
{
    std::vector<std::string> businesses;
    bool keepGoing = false;
    std::cout << "Welcome to the Business Sorting Program!\n";
    do
    {
        std::string businessName = "";
        std::cout << "Please enter the name of a business: ";
        std::getline(std::cin, businessName);
        businesses.push_back(businessName);
        std::sort(businesses.begin(), businesses.end());

        if (businesses.size() == 1)
        {
            std::cout << "Your business is: \n";
        }
        else
        {
            std::cout << "Your businesses are: \n";
        }

        for (std::string business : businesses)
        {
            std::cout << business << "\n";
        }

        while (true)
        {
            std::string another;
            std::cout << "Another business? ";
            std::getline(std::cin, another);

            for (char &c : another)
            {
                c = std::tolower(c);
            }

            if (another == "n" || another == "no")
            {
                keepGoing = false;
                std::cout << "Thank you for using the Business Sorting Program!";
                break;
            }
            else if (another == "y" || another == "yes")
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
}
// $ ./busisort.out
 
// Welcome to the Business Sorting Program!
 
// Please enter the name of a business:  WalMart
 
// Your business is:
 
//     WalMart
 
// Another business?  y
 
// Please enter the name of a business:  JC Penney
 
// Your businesses are:
 
//     JC Penney
//     WalMart
 
// Another business?  Y
 
// Please enter the name of a business:  Merlin Muffler
 
// Your businesses are:
 
//     JC Penney
//     Merlin Muffler
//     WalMart
 
// Another business?  yes
 
// Please enter the name of a business:  Appleby's
 
// Your businesses are:
 
//     Appleby's
//     JC Penney
//     Merlin Muffler
//     WalMart
 
// Another business?  Yes
 
// Please enter the name of a business:  Zippy's
 
// Your businesses are:
 
//     Appleby's
//     JC Penney
//     Merlin Muffler
//     WalMart
//     Zippy's
 
// Another business?  no
 
// Thank you for using the Business Sorting Program!
