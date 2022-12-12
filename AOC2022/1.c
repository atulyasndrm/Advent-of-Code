#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<stdlib.h>
int* join(int*a,int l1,int r1,int l2,int r2){
    int * c=(int*)malloc(sizeof(int)*(r2-l1+1));int k=0;
    while(l1<=r1&&l2<=r2){
        if(a[l1]<a[l2]){
            c[k]=a[l2];
            l2++;k++;
        }else{
            c[k]=a[l1];
            l1++;k++;
        }
    }
    while(l1<=r1){
        c[k]=a[l1];
        l1++;k++;
    }
    while(l2<=r2){
        c[k]=a[l2];
        l2++;k++;
    }
    return c;
}

void mr(int* a, int l, int r){
    if(l==r){
        return;
    }
    int mid=(l+r)/2;
    mr(a,l,mid);mr(a,mid+1,r);
    int* c=join(a,l,mid,mid+1,r);
    for(int i=l;i<=r;i++){
        a[i]=c[i-l];
    }
    free(c);

}


int main()
{

    char a;
    // char a;int n=0;int t=1;int sum=0;int max=0;int flag=0;
    // scanf("%c",&a);int p=4469;
    // int v[10000];int i=0;
    // // for(int x=0;x<3;x++)
    // while(t-p)
    // {
    //     while(a!='\n')
    //     {
    //         n=n*10;
    //         // printf("%c",a);
    //         // printf("%d\n",t);
    //         n=((n)+(int)(a-'0'));
    //         // printf("%d\n",n);
    //         scanf("%c",&a);
    //     }
    //     scanf("%c",&a);
    //     if(a=='\n'){
    //         sum=sum+n;
    //         if(n==p){
    //             t=p;
    //         }
    //         // if(sum>max) max=sum;
    //         // v[i]=sum;i++;
    //         printf("%d\n",sum);
    //         n=0;
    //         sum=0;
    //         scanf("%c",&a);
    //     }else{
    //         if(n==p){
    //             t=p;
    //         }
    //         sum=sum+n;
    //         n=0;
    //     }
    // }
    while(scanf("%c",&a)){
        printf("%c",a);
    }

    
    return 0;
}