#include <iostream>
#include <fstream>
using namespace std;

int menu(){
    cout<<"Choose test:"<<endl;
    cout<<"1-Passenger"<<endl;
    cout<<"2-Driver"<<endl;
    int a;
    cin>>a;
    if(a==1 || a==2) return a;
    cout<<"Please input correct number!"<<endl;
    return menu();
}

int main() {
    int test=menu();
    cout<<test;
    return 0;
}
