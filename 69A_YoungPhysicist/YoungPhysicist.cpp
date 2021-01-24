#include <iostream>

int main()
{
    int nbLines;
    int a = 0;
    int tempA;
    int b = 0;
    int tempB;
    int c = 0;
    int tempC;

    std::cin >> nbLines;
    for (int i = 0; i < nbLines; i++){
        std::cin >> tempA >> tempB >> tempC;
        a += tempA;
        b += tempB;
        c += tempC;
    }
    if (a == 0 && b == 0 && c == 0)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}