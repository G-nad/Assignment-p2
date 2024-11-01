#include <iostream>
//#include <cmath>

int main()
{
    double a;
    int n;
    std::cin >> a >> n;

    using namespace std;

    auto tmp = a*n*10;
    int tmp2;
    int q = tmp;
    int b = q % 10;
    if (b >= 5) tmp2 = q/10 + 1;
    else tmp2 = q/10;
    double tmp3 = (double)(tmp2) / n;
    cout.precision(10);
//    cout << tmp3 << "\n";

    int x = (int)tmp3;
    cout << x << " ";
    tmp3 -= x;
    if (tmp3 == 0){
        return 0;
    }

    tmp3 *= 1e18;
//    std::cout << tmp3 << "\n";
    long long tu = 1, mau = n, sum = 0;
    for (int i = 1; i <= 18; i++){
        tu *= 10;
        sum = sum * 10 + (tu / mau);
        tu %= mau;
    }
//    cout << sum;

    int ans = 0;
    long long l = 0, r = 0; // r: lam tron len, l: lam tron xuong
    for (int i = 1; i <= n + 1 ; i++){
        double res = (i * (sum));
//        cout << res << "\n";
        if (res > tmp3) {
            r = i;
            break;
        }
        else l = i;
    }
    int _r = r, _l = l;
    l = l * sum;
    l = tmp3 - l; //value: mid - left -> distance(mid, left)
    r = r * sum;
    r = r - tmp3; //value: right - mid -> distance(mid, right)

    if (r > l) cout << _l << "/" << n;
    else cout << _r << "/" << n;
    return 0;
}
