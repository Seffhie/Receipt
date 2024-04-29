#include <iostream>
using namespace std;

int main(){
    int nproduct;
    cout <<"How many products? ";
    cin>>nproduct;

    int qty[nproduct];
    float price[nproduct];

    for(int i = 0; i<nproduct; i++){
        cout<<"products "<<i+1<<": "<<endl;
        cout<<"enter quantity: ";
        cin>>qty[i];
        cout<<"Enter price: ";
        cin>>price[i];
    }
    cout<<"Product information";
    for (int i = 0; i<nproduct; i++){
        cout<<" Product: "<<i+1<<endl<<" Quantity: "<<qty[i]<<endl<<" Price: "<<price[i]<<endl;
    }
    int pay, exc;
    double total=0.0;
    cout<<"Payment Area: ";
    cin>>pay;
    
    for (int  i = 0; i<nproduct; i++){
        total += qty[i] * price[i];
    }
    cout<<"Total of everything: "<<total<<endl;
    cout<<"Your money: "<<pay<<endl;
    if (pay>=total){
            exc = pay - total;
        cout<<"Exchange: "<<exc<<endl;
        cout<<"thank you for buying!"<<endl;
    }
    else{
        cout<<"Not enough money to pay all of this groceries";
        return 0;
    }
return 0;
}