#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<",";
    for (int i=1;i<=n;i++){
            cout<<","<<(2*i)-1;
    }
    return 0;

}
