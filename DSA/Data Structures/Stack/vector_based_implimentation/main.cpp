#include <iostream>
#include<bits\stdc++.h>
using namespace std;
class Stack
{
private :
    vector <int>v;
public :
    void push(int a)
    {
        v.push_back(a);
    }
    void pop()
    {
        if(!v.empty()) (this->v).pop_back() ;
        else cout << "this stack is empty" << endl;
    }
    void top()
    {
        if (v.empty()) cout << "this stack is empty" << endl;
        else cout << v.back() << endl;
    }
    void isempty()
    {
        if(v.empty()) cout << "true" << endl;
        else cout << "false" << endl;
    }
};
int main()
{
    Stack st;
    st.push(8);
    st.push(9);
    st.top();
    st.isempty();
    st.pop();
    st.pop();
    st.isempty();
    st.top();
    return 0;
}
