#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
int main()
{
    vector<string> v;
    string a;int sum=0;
    while(cin>>a){
        v.push_back(a);
        // string s1=a.substr(0,a.length()/2);
        // string s2=a.substr(a.length()/2,a.length());
        // c1=s1;c2=s2;
        // //    cout<<s1<<endl<<s2<<endl;
        // //    cout<<s1.length()<<" "<<s2.length();
        // sort(s1.begin(),s1.end());
        // sort(s2.begin(),s2.end());
        // //  cout<<c1<<endl<<c2<<endl;
        // //  cout<<s1.find("ST");
        // int l1=0,l2=0;
        // int flag=0;
        // char ele;
        // while(l1<s1.length()&&l2<s2.length()){
        //     if(s1[l1]<s2[l2]){
        //         l1++;
        //     }else if(s1[l1]>s2[l2]){
        //         l2++;
        //     }else{
        //         flag=1;
        //         ele=s1[l1];
        //         break;
        //     }
        // }
        // if(ele<='Z'&&ele>='A'){
        //     sum=sum+ele-'A'+27;
        // }else if(ele<='z'&&ele>='a'){
        //     sum=sum+ele-'a'+1;
        // }
        
    }
    for(int i=0;i<v.size();i++){
        sort(v[i].begin(),v[i].end());
    }
    
    int i=0;
    while(i<v.size())
    {
    int l1=0,l2=0,l3=0;
    int flag=0;
    char ele;
    


        cout<<v[i]<<endl<<v[i+1]<<endl<<v[i+2]<<endl;
    string s1=v[i],s2=v[i+1],s3=v[i+2];

    while(l1<s1.length()&&l2<s2.length()&&l3<s3.length()){
        if      (s1[l1]<s2[l2]&&s1[l1]<s3[l3]||s1[l1]==s2[l2]&&s1[l1]<s3[l3]||s1[l1]<s2[l2]&&s1[l1]==s3[l3]){
            l1++;
        }else if(s2[l2]<s1[l1]&&s2[l2]<s3[l3]||s2[l2]==s1[l1]&&s2[l2]<s3[l3]||s2[l2]<s1[l1]&&s2[l2]==s3[l3]){
            l2++;
        }else if(s3[l3]<s1[l1]&&s3[l3]<s2[l2]||s3[l3]==s1[l1]&&s3[l3]<s2[l2]||s3[l3]<s1[l1]&&s3[l3]==s2[l2]){
            l3++;
        }else{
            ele=s1[l1];
            break;
        }
    }
    i+=3;
    cout<<ele<<endl;
    if(ele<='Z'&& ele>='A'){
            sum=sum+ele-'A'+27;
        }else if(ele<='z'&&ele>='a'){
            sum=sum+ele-'a'+1;
        }
    
    
    }
    // cout<<v.size();
    cout<<sum;
    return 0;
}