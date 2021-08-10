#include <iostream>
using namespace std;
int tenpow(int y)
{
    int ans = 1;
    while (y--) {
        ans *= 10;
    }
    return ans;
}
int dgt(int d, int order)
{
    return (d % tenpow(order)) / tenpow(order - 1);
}
int main()
{
    int n, k;
    cin>>n>>k;
    cout << dgt(n, k);
}