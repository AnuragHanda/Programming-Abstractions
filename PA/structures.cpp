#include <iostream>
using namespace std;

struct student{
	string name;
	string branch;
	long int rollNo;
};

struct product{
	int weight;
	double price;
};

int main(){
	student myname={"Anurag","CSE",2010991247};
	product itmeweight={1.2,405.20};
	cout << "Name:-" << myname.name<<"\n"<<"Branch:-"<<myname.branch<<"\n"<<"Roll No:-"<<myname.rollNo<<endl;
	cout << "Weight:-"<<item.weight<<"\n"<<"Price:-"<<item.price<<endl;
	return 0;
}