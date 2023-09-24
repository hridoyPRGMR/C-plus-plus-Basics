#include<bits/stdc++.h>
using namespace std;

void increment_all(int *start,int *stop){

    int *curr=start;
    while(curr!=stop){
        (*curr)++;
        curr++;
    }

}

void print(int *start,int *stop){

    int *curr=start;
    while(curr!=stop){
        cout<<(*curr)<<endl;
        curr++;
    }

}

int main() {

    int arr[]={10,20,30,40};
    increment_all(arr,arr+4);

    print(arr,arr+4);

  return 0;
}
