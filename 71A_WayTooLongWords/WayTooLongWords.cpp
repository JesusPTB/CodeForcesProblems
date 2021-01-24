#include <iostream>
#include <vector>
#include <string>

int main()
{
    int nbLines;
    std::vector<std::string> strings;
    std::string input;
    std::string transformed;
    int length;

    std::cin >> nbLines;
    for (int i = 0; i < nbLines; i++)
    {
        std::cin >> input;
        length = input.length();
        if (length > 10) {
            transformed = input.at(0) + std::to_string(length - 2) + input.at(length - 1);
        }
        else
            transformed = input;
        strings.push_back(transformed);
    }
    for (int i = 0; i < nbLines; i++)
    {
        std::cout << strings.at(i) << std::endl;
    }
}