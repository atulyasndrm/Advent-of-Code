#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
int main()
{   char a;int s=0;
    int c=0;int o,i;
    
    while(cin>>a){
        if(c%2) i=(int)(a-'X')+1;
        else    o=(int)(a-'A')+1;
        
            // cout<<a<<endl;
        if(c%2){
            if(o==i){
                s=s+3+i;
            }else if(o==1&&i==2||o==2&&i==3||i==1&&o==3){
                s=s+6+i;
            }else{
                s=s+i;
            }
            // cin>>a;
        }c++;
    }
    cout<<s;
    return 0;
}