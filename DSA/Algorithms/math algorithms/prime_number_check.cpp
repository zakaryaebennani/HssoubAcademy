#include <iostream>

using namespace std;
int is_prime(int x)
{
    int i=2;
    while(i*i<=x)
    {
        if(x%i==0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << is_prime(n);
    return 0;
}
