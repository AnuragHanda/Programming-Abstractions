
//////////#include <iostream>
using namespace std;
class rectangle{

int width,height;

public:

rectangle(){}
rectangle(int x,int y):width(x),height(y){}

int area(){return width*height;}
 friend rectangle duplicate(rectangle&);
};

rectangle duplicate(const rectangle& param)
{
    rectangle res;
    res.width=width*2;
    res.height=param.height*2;
    return res;
}
// rectangle(int b1,b2){
//     if(b1.width>b2.width)
//     if(b1.height>b2.height)
//     return b1.widht;
//     else
//     return b2.width
// }
int main(){
    rectangle foo ;
    rectangle bar(2,3);
    foo=duplicate(bar);
    cout<<foo.area<<'\n';
    return 0;

}

//////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

class TimeTrack{
	int hours{0};
	int minutes{0};
	public:
		void inputTime(int hours,int minutes);
		void showTime();
		int getHours();
		int getMinutes();
		friend int* TotalTime(TimeTrack &t1,TimeTrack &t2);
};

void TimeTrack::inputTime(int hours,int minutes){
	this->hours = hours;
	this->minutes = minutes;
}

void TimeTrack::showTime(){
	cout << this->hours << " hrs "<<this->minutes<<" min"<<endl;
}

int TimeTrack::getHours(){
	return this->hours;
}

int TimeTrack::getMinutes(){
	return this->minutes;
}

int* TotalTime(TimeTrack &t1,TimeTrack &t2){
	int *arr=new int[2];
	arr[0]=t1.getHours()+t2.getHours();
	arr[1]=t1.getMinutes()+t2.getMinutes();
	return arr;
}

int main(){
	TimeTrack t1;
	t1.inputTime(7,56);
	TimeTrack t2;
	t2.inputTime(8,2);
	int *p = TotalTime(t1,t2);
	cout << p[0] <<" hrs "<<p[1]<<" mins "<<endl;
	return 0;
}////////////////////////////////////////////////////////////////////////////
//complex class



// rectangle(int b1,b2){
//     if(b1.width>b2.width)
//     if(b1.height>b2.height)
//     return b1.widht;
//     else
//     return b2.width
// }
#include <iostream>
using namespace std;

class arithmetic{
    int a{0},b{0};
    public:
        arithmetic(int a,int b){
            this->a=a;
            this->b=b;
        }
        arithmetic operator+(arithmetic &b){
            arithmetic add(this->a - b.a,this->b - b.b);
            return add;
        }
        void display(){
            cout << a <<" "<<b <<endl;
        }
};

int main()
{
    arithmetic obj1(2,4);
    arithmetic obj2(2,3);
    arithmetic sum = obj1.operator+(obj2);
    sum.display();
    return 0;
}

//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class complex{
     float real;
	 int img;
	 public:
	       complex(float r=0,int i=0){
			real=r;
			img=i;
		   }
};
void display(){
	cout<<real<<imaginary;
}
friend complex operator(complex c1 ,complex c2);
friend complex operator(complex c1,float value);

complex operator+(complex c1,complex c2){
	complex result;
	result.real=c1.real+c2.real; 
	result.imaginary=c1.imaginary+c2.imaginary; 
	return result;
}
complex operator+(complex c1,float value){
	complex result;
	result.real=c1.real+ value; 
	result.imaginary=c1.imaginary+ value; 
	return result;
}
int main(){
	complex c1(2,4),c2(3,4);2
	complex c3=c1+c2;
	complex c4=c1+c2;
	complex c5=20+c1;
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	c5.display();

	return 0;
}