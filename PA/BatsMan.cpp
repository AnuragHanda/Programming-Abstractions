#include<iostream>
using namespace std;
class batsman{
    public: 
       string name;
       float innings;
       float notout;
       float run;
       
       float average(){
       	return (run/(innings-notout));
	   }
	   
	    void displayInfo()
        {
            cout<<"BatsMan:"<<name<<" played:"<<innings<<" innings with runs:"<<run<<" and not out for: "<<notout<<endl;
        }
};
int main(){
	batsman ob;
	cin>>ob.name>>ob.innings>>ob.notout>>ob.run;
    cout<<ob.average()<<endl;
	ob.displayInfo();
	return 0;
}
