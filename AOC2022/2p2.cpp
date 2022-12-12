#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
int main()
{   
    char a;int s=0;
    int c=0;int o,i;
    
    while(cin>>a){
        if(c%2) i=(int)(a-'X')+1;
        else    o=(int)(a-'A')+1;
        
            // cout<<a<<endl;
        if(c%2){
            if(i==2){
                s=s+3+o;
            }else if(i==3){
                if(o==1||o==2){
                    i=o+1;
                }else{
                    i=o-2;
                }
                s=s+6+i;
            }else{  
                if(o==2||o==3){
                    i=o-1;
                }else{
                    i=o+2;
                }
                s=s+i;
            }
            // cin>>a;
        }c++;
    }
    std::cout<<s;
    return 0;
}