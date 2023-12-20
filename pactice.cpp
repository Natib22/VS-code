#include<iostream>
#include<string.h>
using namespace std;
struct  Profile
{
    string name;
    string country;
    void display(const Profile &person)
    {   cout<<"name of person"<<endl;

        cout<< person.name<<endl;
        cout<<"country of residency\n";
        cout<<person.country<<endl;
    }
};


int main(){

   Profile person[5];

for(int i=0;i<4;i++){
    cout<<"enter name of person"<<i+1<<endl;
    cin>>person[i].name;
    cout<<"enter the country of the person"<<i+1<<endl;
    cin>>person[i].country;


}
for(int i=0;i<4;i++)
{
   person[i].display(person[i]);
}
cout<< sizeof(person[0])<<endl;
cout<<&person[0];


    return 0;
}