#include<iostream>
using namespace std;
struct gst
{
    float rate;
};

struct product{
    int w;
    float p;
    int *taxvalue;
    gst *tax; 
};


int main()
{
    int i=0;
    int standardTax=5;
    cout<<"How many products?";
    cin>>i;
    const int productCount=i;

    gst objGST;
    objGST.rate=15;

    product pObj[productCount];
    for(int count=0; count<productCount;count++)
    {
        cout<<"Enter the details(weight , price) for product number "<<count+1<<"\n";
        cin>>pObj[count].w;
        cin>>pObj[count].p;
        pObj[count].tax=&objGST;
        pObj[count].taxvalue=&standardTax;

    }

    for(int count=0; count<productCount;count++)
    {
        cout<<"product number "<<count+1<<" weight:"<<pObj[count].w<<", Price:"<<pObj[count].p<<endl;
        cout<<*pObj[count].taxvalue<<endl;
        cout<<"ttttt---"<<pObj[count].taxvalue<<" : "<<&standardTax<<endl;
        cout<<"GST tax rate"<<(*pObj[count].tax).rate<<endl;
    }
    return 0;
}
