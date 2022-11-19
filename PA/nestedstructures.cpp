#include <iostream>
using namespace std;
 struct movies_t{
    string title;
    int year;    
    };
    struct friends_t
    
    {
    string name;
    string email;
    movies_t favourite_movie;
    }charlie,maria;
int main(){
	friends_t anurag;
    anurag.name="Nishant";
    anurag.email="anurag@outlook.com";
    anurag.favourite_movie="Super Bad";
    
   
    
	return 0;
}