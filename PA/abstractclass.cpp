// #include <iostream>
// using namespace std;
// class polymorphism{
//   protected:
//     int widht,height;
//     public:
//     void set_values(){
//         width=w;
//         height=h;
//     }
//     virtual int area()=0;
    
// };
// class Rectangle:public Polygon{
//   public:
//     int area(){
//         return width*height;
//     }
//     }
// };
// class Triangle:public Polygon{
//   public:
//     int area(){
//         return 1/2(width*height);
//     }
//     }
// };
// int main(){
//     Rectangle rect;
//     Triangle trgl;
//     Polygon *ppoly1=&rect;
//     Polygon *ppoly2=&trgl;
//     ppoly1->set_values(4,5);
//     ppoly2->set_values(4,5);
//     cout<<ppoly1->area();
//     cout<<ppoly2->area();
// return 0;
// }

// #include <iostream>
// using namespace std;

// class polygon{
//   protected:
//     int width,height;
//   public:
//     void set_values(int a,int b){
//       width=a;
//       height=b;
//     }
//     virtual int area()=0;
// };

// class rectangle:public polygon{
//   public:
//     int area(void){
//       return(width*height);
//     }
// };

// class triangle:public polygon{
//   public:
//     int area(void){
//       return((width*height)/2);
//     }
// };

// int main(){
//   rectangle rect;
//   triangle tri;
//   polygon *ppoly1=&rect;
//   polygon *ppoly2=&tri;
//   ppoly1->set_values(4,5);
//   ppoly2->set_values(4,5);
//   cout<<ppoly1->area()<<endl;
//   cout<<ppoly2->area()<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// #include<fstream>
// int main(){
//     string line ;
//     ifstream myfile.open("example.txt");
//     if(myfile.is_open()){
//         while(getline(myfile.line)){
//             cout<<line<<"\n";
//         }
//         myfile.close()
//     }


// }

//  #include<iostream>
//  using namespace std;
//  #include<fstream>
//  struct info{
//     string name;
//     string branch;
//     int rollno;
//     int year;
//  };

// int main(){
//     string name,branch;
//     int rollno,year;
//     cin>>name>>branch;
//     cin>>rollno>>year;
//     info stud={name,branch,rollno,year};
//     ofstream myfile;
//     myfile.open("example.txt");
//     myfile<<"name:- "<<stud.name<<"\n";
//     myfile<<"rollno:- "<<stud.rollno<<"\n";
//     myfile<<"branch:- "<<stud.branch<<"\n";
//     myfile<<"year:- "<<stud.year<<"\n";
//     myfile.close();
//     return 0;
// }

//////////////////////////////////////////////////////////////
/*..................fstream and istream.....................*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct info{
  string name;
  string branch;
  int rollNo;
  int year;
};

int main(){
  string name,branch;
  int rollNo,year;
  cout << "Enter Name and Branch:-"<<endl;
  cin>> name >>branch;
  cout << "Enter Your Roll No and year:-"<<endl;
  cin>> rollNo>> year;
  info stud = {name,branch,rollNo,year};
  
  ofstream myfile;
  myfile.open("example.txt");
  myfile << "Name:-" <<stud.name<<"\n";
  myfile << "Roll No:-" <<stud.rollNo<<"\n";
  myfile << "Branch:-" <<stud.branch<<"\n";
  myfile << "Year:-" <<stud.year<<"\n";
  myfile.close();
  
  fstream inFile;
  inFile.open("example.txt");
  if(!inFile){
    cout << "Unable to open file"<<endl;
    exit(1);
  }else{
    string tp;
    while(getline(inFile,tp)){ 
      cout << tp<<'\n';
    }
    inFile.close();
  }
}


#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Book{
    private:
           string title;
           string author;
    public:
           Book(string title"",string author""){
            int->title = title;
            this->author =author;
           }
};
int main(){
    Book.ob("abc","mno");
   ofstream f1("book.txt");
   f1.write((char *)&b, sizeof(b));
   f1.close();
   f2.((char *)&b, sizeof(b));
  
}