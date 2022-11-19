#include<iostream>
using namespace std;

int main()
{
    bool flagContinue=false;
    do
    {
        int cgpa;
        cout<<"Enter CGPA :";
        cin>>cgpa;
        switch (cgpa)
        {
            case 10:
                cout<<"Outstanding"<<endl;
                break;
            case 9:
                cout<<"Excellent"<<endl;
                break;
            case 8:
                cout<<"Fair"<<endl;            
                break;
            case 7:
                cout<<"Good"<<endl;
                break;
            case 6:
                cout<<"Fair"<<endl;
                break;
            
            case 5:
                cout<<"Satisfactory"<<endl;
                break;
            default:
                cout<<"Reappear"<<endl;
        }
        cout<<"Do you want to continue?(Y/N)"<<endl;
        char inputoption;
        cin>>inputoption;
        if(inputoption=='Y')
            flagContinue=true;
        else
            flagContinue=false;
    }while(flagContinue);
    cout<<"Thanks for using this program"<<endl;
}