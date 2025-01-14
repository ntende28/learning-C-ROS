/*Write a program that defines an enum. Create an object of that enum as use it in a switch
statement. Use the switch statement to print the value of an object*/

#include <iostream>

enum class Colors
{
    Red,
    Green,
    Blue
};

int main()
{
    Colors mycolors = Colors::Red;

    switch (mycolors)
    {
        case Colors::Red:
            std::cout << "The color is Red." << '\n';
            break;

        case Colors::Green:
            std::cout << "The color is Green." << '\n';
            break;

        case Colors::Blue:
            std::cout << "The color is Blue." << '\n';
            break;
        
        default:
            break;
    }

    return 0;
}