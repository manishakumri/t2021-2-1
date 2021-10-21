#include<iostream>
using namespace std;

void fun(int n){
     if (n%2){
        n = 2*n;
    }else{
        n = 2*(n-1);
    }
    for (int i=1;i<n;i++){
       if(i%2)
            cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    fun(n);

    return 0;
}