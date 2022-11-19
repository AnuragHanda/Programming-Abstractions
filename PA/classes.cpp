// #include <iostream>
// using namespace std;

// class Books
// {
//    string title;
//    string publisher;
//    string author;
//    double price{0.0};
//    int stock{0};

// public:
//    void AddBook(string title, string publisher, string author, double price, int stock)
//    {
//       this->title = title;
//       this->publisher = publisher;
//       this->author = author;
//       this->price = price;
//       this->stock = stock;
//    }
//    void getBook()
//    {
//       cout << "Book Name:-" << title << endl;
//       cout << "Book Author:-" << author << endl;
//       cout << "Book publisher:-" << publisher << endl;
//       cout << "Book Price:-" << price << endl;
//       cout << "Book Stock:-" << stock << endl;
//    }
//    string getTitle()
//    {
//       return this->title;
//    }
//    int isInStock(int stock)
//    {
//       return this->stock - stock;
//    }
//    int priceB(int copies)
//    {
//       return copies * this->price;
//    }
// };

// int main()
// {
//    int n{0}, copies{0};
//    string bookTitle;

//    cout << "Enter The No of books you want to add:-";
//    cin >> n;
//    Books *B = new Books[n];
//    for (int i = 0; i < n; i++)
//    {
//       string title, author, publisher;
//       int stock{0};
//       double price{0.0};
//       cout << "Enter Title of Books:-";
//       cin >> title;
//       cout << "Enter Name of Author:-";
//       cin >> author;
//       cout << "Enter Publisher of Book:-";
//       cin >> publisher;
//       cout << "Enter Price of book:-";
//       cin >> price;
//       cout << "Enter stock of book:-";
//       cin >> stock;
//       B[0].AddBook(title, author, publisher, price, stock);
//    }
//    cout << "Enter Book Name:-";
//    cin >> bookTitle;
//    cout << "Enter Number of Copies:-";
//    cin >> copies;
//    while (true)
//    {
//       for (int i = 0; i < n; i++)
//       {
//          if (bookTitle == B[0].getTitle())
//          {
//             if (B[0].isInStock(copies) >= 0)
//             {
//                cout << "Copies are avialabe" << endl;
//                cout << "Price of books:-";
//                cout << B[0].priceB(copies) << endl;
//             }
//             else
//             {
//                cout << "Books are not in stock" << endl;
//             }
//          }
//       }
//        int n{0};
//    cout<<"Enter -1 to exit : ";
//    cin>>n;
//    if(n==-1)
//    break;
//    }
  
// }


//////////////////////////////////////////////////////////////////////////////


// #include <iostream>
// using namespace std;

// class a
// {
//    public:
//    a(){
//       cout<<"this is class a"<<endl;
//    }
// };
// class b:public a{
//    public:
//    b(){
//       cout<<"this is class b"<<endl;
//    }
// };
// class c:private b{
//    public:
//    c(){
//       cout<<"this is class c"<<endl;
//    }
// };   
// int main(){
//    c ob;

// }


// #include<iostream>
// using namespace std;
// class batsman{
//     public: 
//        string name;
//        float innings;
//        float notout;
//        float run;
       
//        float average(){
//        	return (run/(innings-notout));
// 	   }
	   
// 	    void displayInfo()
//         {
//             cout<<"BatsMan:"<<name<<" played:"<<innings<<" innings with runs:"<<run<<" and not out for: "<<notout<<endl;
//         }
// };
// int main(){
// 	batsman ob;
// 	cin>>ob.name>>ob.innings>>ob.notout>>ob.run;
//     cout<<ob.average()<<endl;
// 	ob.displayInfo();
// 	return 0;
// }

#include<iostream>
using namespace std;
class student{
	//  string studentname;
   //  float admission;
   //  float englishmarks;
   //  float mathsmarks;
   //  float sciencemarks;
   //  float totalmarks;
    public: 
    string studentname;
    float admission;
    float englishmarks;
    float mathsmarks;
    float sciencemarks;
    float totalmarks;
        float calculator(){
        	int result=englishmarks+mathsmarks+sciencemarks;
         float per=((result*100)/3);
         return result;
         return per;
		}
	   
	    void Showdata()
        {
            cout<<"Student Name: "<<studentname<<" admission number is: "<<admission<<" total marks are : "<<calculator()<<endl;
        }
};
int main(){
	 student ob;
	cin>>ob.studentname>>ob.admission>>ob.sciencemarks>>ob.mathsmarks>>ob.englishmarks;
   cout<<ob.calculator()<<endl;
	ob.Showdata();
	return 0;
}

