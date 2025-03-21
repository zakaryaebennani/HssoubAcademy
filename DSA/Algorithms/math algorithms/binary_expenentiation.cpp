#include <iostream>
using namespace std;

long binary_exponentiation(int x, int n)
{
    long res=1;
    while(n>=1)
    {
        while(n%2==0)
        {
            x*=x;
            n/=2;
        }
    res*=x;
    n-=1;
    }
    return res;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << binary_exponentiation(x, n);
    return 0;
}
