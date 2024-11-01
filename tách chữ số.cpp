#include <bits/stdc++.h>
using namespace std;

int n;
int a, b, c;
int main(){
    cin >> n;
    c = n % 10; n /= 10;
    b = n % 10; n /= 10;
    a = n % 10; n /= 10;
    cout << a << "\n" << b << "\n" << c;
    return 0;
}
