#include <iostream>
using namespace std;

long modular_exponentiation(int x, int n, long m)
{
    long res=1;
    while(n>0)
    {
        if (n%2==1)
            res=(res*x)%m;
        x= (x*x)%m;
        n/=2;
    }
}
int main()
{
    int x, n; 
    long m;
    cin >> x >> n >> m;
    cout << modular_exponentiation(x, n, m);
    return 0;
}