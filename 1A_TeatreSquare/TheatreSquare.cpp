#include <iostream>

int main(){
    long long int n;
    long long int m;
    long long int a;
    long long int nb_n;
    long long int nb_m;
    long long int total;

    std::cin >> n >> m >> a;
    if (n % a == 0) {
        nb_n = n / a;
    }
    else
        nb_n = n / a + 1;
    if (m % a == 0)
        nb_m = m / a;
    else
        nb_m = m / a + 1;
    total = nb_m * nb_n;
    std::cout << total << std::endl;
}