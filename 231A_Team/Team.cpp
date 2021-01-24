#include <iostream>

int main()
{
    int nbLines;
    int first;
    int second;
    int third;
    int output = 0;

    std::cin >> nbLines;
    for (int i = 0; i < nbLines; i++) {
        std::cin >> first >> second >> third;
        if ((first + second + third) > 1)
            output++;
    }
    std::cout << output;
}