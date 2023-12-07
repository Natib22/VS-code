#include<iostream>
using namespace std;
int reference(int &num);

int main(){
    int x=100;
    reference(x);
     cout<<" main function manipulated "<<x;
    return 0;
}
int reference(int &num){

    cout<<"passed "<<num<<endl;
    num=10;
    cout<<"changed "<<num<<endl; 
   return num;
}
