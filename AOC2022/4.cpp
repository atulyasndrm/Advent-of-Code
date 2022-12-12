#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

class Elf{
    public:
    int s[2];
};
class pir{
    public: 
        Elf e[2];
};


int main()
{
    vector<pir> v;
    string a;
    while(cin>>a){
        pir l;
        int j=0;
        int n=0;
        for(int i=0;i<a.size()+1;i++){
            if(a[i]<='9'&&a[i]>='0'){
                n=n*10+a[i]-'0';
            }else{
                l.e[j/2].s[j%2]=n;
                n=0;
                j++;
            }
        }
        v.push_back(l);
        // Elf e;
        // e.l=a[0];e.r=a[3];l.e1=e;
        // e.l=a[];e.r=a[3];l.
    }
    int sum=0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i].e[0].s[0]<=v[i].e[1].s[0]&&v[i].e[0].s[1]>=v[i].e[1].s[1]||v[i].e[0].s[0]>=v[i].e[1].s[0]&&v[i].e[0].s[1]<=v[i].e[1].s[1]){
    //         sum++;
    //     }
    // }
    
    for(int i=0;i<v.size();i++){
        if(v[i].e[0].s[1]<v[i].e[1].s[0]||v[i].e[0].s[0]>v[i].e[1].s[1]){
            sum++;
        }
    }


    cout<<v.size()-sum;

    return 0;
}