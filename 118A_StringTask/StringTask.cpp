#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
    std::string input;

    std::cin >> input;
    std::transform(input.begin(), input.end(), input.begin(),[](unsigned char c) {return std::tolower(c); });
    input.erase(std::remove(input.begin(), input.end(), 'a'), input.end());
    input.erase(std::remove(input.begin(), input.end(), 'o'), input.end());
    input.erase(std::remove(input.begin(), input.end(), 'e'), input.end());
    input.erase(std::remove(input.begin(), input.end(), 'u'), input.end());
    input.erase(std::remove(input.begin(), input.end(), 'i'), input.end());
    input.erase(std::remove(input.begin(), input.end(), 'y'), input.end());
    for (int i = 0; i < input.length(); i++) {
        if (input.at(i) != '.') {
            input.insert(i, 1, '.');
            i++;
        }
    }
    std::cout << input << std::endl;
}