#include<iostream>
#include<string.h>
using namespace std;
struct Address{
 string country;
 string city;
 double longtide;
 double latittude;
 void diplay(const Address &location){
    cout<< location.city<<endl;
    cout<<location.country<<endl;
    cout<<location.longtide<<endl;
    cout<<location.latittude<<endl;
 }

 
};

struct emp
{
    int id;
    string name;
    int salary;
    string jobTitle;
/*void display(const emp &employee) {
    cout << "ID: " << employee.id << ", Name: " << employee.name
         << ", Salary: " << employee.salary << ", Job Title: " << employee.jobTitle << endl;
      
}
   */
};


int main(){
    Address location1,location2;

emp person1,person2,person3,person4;

location1.country="Ethiopia";
location1.city="A/A";
location1.latittude= 111.01;
location1.longtide=55474;

location2.country="Eth";
location2.city="A/A";
location2.latittude= 111.1;
location2.longtide=55474;


location2.diplay(location2);










/*person1.id = 1;
    person1.name = "John";
    person1.salary = 1000;
    person1.jobTitle = "Software Engineer";

    
    person2.id = 2;
    person2.name = "Jane";
    person2.salary = 1000;
    person2.jobTitle = "Data Scientist";

   
    person3.id = 3;
    person3.name = "Bob";
    person3.salary = 550;
    person3.jobTitle = "WebDev";

    person4.id = 4;
    person4.name = "Alice";
    person4.salary = 5000;
    person4.jobTitle = "Product Manager";
    */


    return 0;
}