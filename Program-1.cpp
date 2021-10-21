#include <iostream>
#include <string>
using namespace std;

class calculater{
    public:
    double a,b;
    string operation;

    void input(){
        cout<<"Enter Your input & operation \n";
        cin>>this->a;
        cin>>this->b;
        cin>>this->operation;
    }

    double operate(){
        if(this->operation == "+")
            cout<<this->a<<"+"<<this->b<<"="<<this->a + this->b;
        if(this->operation == "-")
            cout<<this->a<<"-"<<this->b<<"="<<this->a - this->b;
        if(this->operation == "*")
            cout<<this->a<<"*"<<this->b<<"="<<this->a * this->b;
        if(this->operation == "/")
            cout<<this->a<<"/"<<this->b<<"="<<this->a / this->b;    
    }
};
 
int main(){
    calculater cal;
    cal.input();
    cal.operate();

    return 0;
}
