#include <iostream>
#include <vector>
using namespace std;

void fill_vector(vector<int>& v, int n)
{
    int k;
    for (int i=0; i<n ; i++)
    {
        cin >>k;
        v.push_back(k);
    }
}
int main()
{
	int n;
	cin >> n;
    vector<int> v;
    fill_vector(v,n);
	int count=0;
    bool swaped = true;
	while(swaped)
	{
		swaped = false;
		count++;
		for(int i=0; i<n-1 ; i++)
		{
			if (v[i]>v[i+1])
			{
				swap(v[i], v[i+1]);
				swaped = true;
			}
		}
	}
	for (int i : v)
        cout << i << " ";
	return 0;	
}