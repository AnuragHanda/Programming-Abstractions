#include<iostream>
using namespace std;
int main(){
//  int arr[5]={13,12,63,84,5};
//  double foo[3]={21,33,99};
//  cout<<"address of array is: "<<arr[0]<<endl;;
//  cout<<"address of array is: "<<&arr<<endl;
//  cout<<"address of array is: "<<*arr<<endl;
//  cout<<"address of array is: "<<arr+1<<endl;
//  cout<<"address of array is: "<<arr+2<<endl;;
//  cout<<"address of array is: "<<*(arr+3)<<endl;;
//  cout<<"address of array is: "<<foo+1<<endl;;
//  cout<<"address of array is: "<<foo+2<<endl;;
//  cout<<"address of array is: "<<foo+3;
int n;
cin>>n;
int arr[n];
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
for(int i=0;i<=n;i++){
    cout<<arr[i];
}

return 0;

}