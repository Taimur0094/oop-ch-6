#include<iostream>
using namespace std;
minimum(float a, float b, float c){
	int minimum=0;
	if (a<b && a<c){
		minimum=a;
		cout<<a<<" is Minimum"<<endl;
	}
	else if(b<a && b<c){
		minimum=b;
		cout<<b<<" is minimum"<<endl;
	}
	else{
		minimum=c;
		cout<<c<<" is minimum"<<endl;
	}
}
int main(){
	float d,e,f;
	cout<<"Enter 1 number: "<<endl;
	cin>>d;
	cout<<"Enter 2 number: "<<endl;
	cin>>e;
	cout<<"Enter 3 number: "<<endl;
	cin>>f;
	minimum(d,e,f);
}

