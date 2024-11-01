#include <iostream>
#include <cmath>

int main()
{
    double a;
    int n;
    std::cin >> a >> n;

    std::cout.precision(10);

    auto tmp = a*n;
    auto tmp2 = round(tmp);
    auto tmp3 = tmp2/n;
    std::cout << tmp3;

    return 0;
}
