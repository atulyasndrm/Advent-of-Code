#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
int main()
{
    vector<string> v;
    string a;int n=2;
    while(n--)
    {
    cin>>a;
    v.push_back(a);
    }
    cout<<(int)v[0][v[0].size()];
    return 0;
}