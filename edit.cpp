 #include<iostream>//how to access the array in the main function?
using namespace std;
template<typename T>
T array1[5];

template<typename T>
void arr1(T a,T b,T c, T d);
template<typename T>
void output(T array1){
       cout<<array1[0];
	   cout<<array1[1];
	   cout<<array1[2];
	   cout<<array1[3];
}

int main(){
	cout<<"organizing stuff into an array\n";
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	arr1(a,b,c,d);
	cout<<endl;`
	
	return 0;
}
template<typename T>
void arr1(T a,T b,T c, T d){
   T  array1[]={a,b,c,d};
	output(array1);
}
