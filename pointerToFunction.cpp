#include<bits/stdc++.h>
#define ll long long
using namespace std;

int add(int a,int b){
    return (a+b);
}

int sub(int a,int b){
    return (a-b);
}

int operation(int a,int b,int (*op)(int,int)){

    int ans=(*op)(a,b);
    return ans;
}

int main(){

    int m,n;
    int (*minus)(int,int)=sub;

    m=operation(10,10,add);
    n=operation(m,6,sub);

    cout<<n<<endl;

return 0;
}
