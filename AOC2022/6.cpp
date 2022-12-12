#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
int main()
{   int t;
    cin>>t;
    string str;
        int flag=-1;
    cin>>str;int k=3;
    flag=0;int flag1=-1,flag2=-1;

    for(int i=0;i<t-1;i++){
        for(int j=i-1;j>=0;j--){
            if(str[j]==str[i]){
                if(j>flag1){
                    flag1=j;
                    flag2=i; 
                    break;  
                }
                
            }
        }
    }
    for(int i=t-1;i<str.size();i++){
        for(int j=1;j<t;j++){
            flag=0;
            if(str[i-j]==str[i]){
                if(i-j>flag1){
                    flag1=i-j;
                    flag2=i;   
                }
                flag=-1;
                break;
            }
        }
        if(!flag&&flag1<i-(t-1)){
            // cout<<str[i]<<endl;
            flag=i;
            break;
        }
    }
    if(flag+1) cout<<endl<<flag+1;
    else cout<<"DNE\n";
    return 0;
}