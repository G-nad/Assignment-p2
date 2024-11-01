#include <bits/stdc++.h>
using namespace std;

long long x, y, a, b;
int main(){
    cin >> x >> y >> a >> b;
    
    long long res = 500000 - (x * a + y * b);
    cout << "So tien ma ban Nguyen nhan lai: " << res;
    return 0;
}
