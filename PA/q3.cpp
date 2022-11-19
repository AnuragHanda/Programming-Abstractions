// #include<iostream>
// using namespace std;
// class employee{
//     private:
//     int empid;
//     char empname[20];
//     int empexp;
//     int perf;
//     int totalgrades;

//      public: 
     
//      employee(){
//         float calculatetotal(){
//         float result;
//         float per=((perf*100)/totalgrades);
//          return result;
//          return per;
// 		}
//      }
//      void employee::getdata(){
//         cout<<"Enter employee name -> ";
//         cin>>empname<endl;
//         cout<<"Enter employee id -> ";
//         cin>>empid<endl;
//         cout<<"Enter employee performace -> ";
//         cin>>empexp<endl;
//      }
//      void Showdata()
//         {
//             cout<<"Employee Name: "<<empname<<" employee id is: "<<empid<<" Employee's Performance : "<<calculatetotal()<<endl;
//         }
        
// };
// int main(){
// 	employee ob;
// 	cin>>ob.empname>>ob.empid>>ob.;
//     cout<<ob.calculatetotal()<<endl;
// 	ob.Showdata();
// 	return 0;
// }
//////..................................................................................///////
#include<iostream>
using namespace std;
class emp_detailsf;
class Employee{
int Emp_no;
string Emp_name;
int years;
int marks;
float rate;
char grade;
// int total_grades;
public:
Employee(int Emp_no, string Emp_name,int years,char grade,int marks,float rate):Emp_no(Emp_no),Emp_name(Emp_name),grade(grade),marks(marks),rate(rate){

}
friend class emp_details;
   float calculatetotal(){
float per= performance_marks;
}
};
class emp_details{
public:
void takedata(const Employee &e);
void showdata(const Employee &e);

};
void Student :: takedata(const Employee &e){
cin>>e.Emp_no>>e.Emp_name>>e.years>>e.grade>>e.marks>>e.rate;
}
void emp_details :: showdata(const Employee &e){
cout<<e.Emp_no<<" "<<e.Emp_me<<" "<<e.years<<" "<<e.grade<<e.marks<<" "<<e.rate<<endl;
}
int main(){
Employee e(10,"alex",20,'A',99,99.9);
emp_details s;
s.takedata(e);
s.showdata(e);
e.calculatetotal();
return 0;
}
