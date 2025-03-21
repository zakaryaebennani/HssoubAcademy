#include <iostream>
#include <vector>
using namespace std;
#define sizev vector<int>::size_type

void insr(vector<int>& v, int holder, sizev i)
{
    long long j=i;
    while(holder < v[j] && j >=0)
    {
        v[j+1]=v[j];
        j--;
    }
    v[j+1] = holder;
}

void insertionsort(vector<int>& v)
{
    sizev length = v.size();

    for (sizev i=0; i< length-1; i++)
    {
        if(v[i] > v[i+1])
        {
            insr(v, v[i+1],i);
        }
    }
}

int main()
{
    vector<int>arr ={4,6,9,5,3};

    insertionsort(arr);

    for(int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    arr ={10,9,8,7,6,5,4,3,2,1,0};
    insertionsort(arr);

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}