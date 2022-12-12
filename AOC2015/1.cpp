#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
int main()
{string s;
// cin>>s
int sum=0;int pos=0;
while(cin>>s)
{
for(int i=0;i<s.size();i++){
    if(s[i]=='('){
        sum++;
    }else{
        sum--;
    }
    if(!(sum+1)){
        pos=pos+i;
        break;
    }
   
}
    if(!(sum+1)){
        break;
    }else{
        pos=pos+s.size();
    }
}
cout<<pos+1;
    return 0;
}