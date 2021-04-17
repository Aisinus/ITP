#include <iostream>
#include <fstream>
#include <string>
#include "PassengerGateway.h"
#include "DriverGateway.h"
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

void Passenger_output(PassengerGateway* Passenger){
    cout<<Passenger->Name<<endl<<Passenger->rating<<endl<<Passenger->payment_methods<<endl<<Passenger->pinnedAddress<<endl;
    cout<<Passenger->orderhistory.size()<<endl;
    for(int i=0;i<Passenger->orderhistory.size()-1;i++){
        cout<<Passenger->orderhistory[i].time<<endl<<Passenger->orderhistory[i].start<<endl<<Passenger->orderhistory[i].final<<endl<<Passenger->orderhistory[i].cartype<<endl<<Passenger->orderhistory[i].price<<endl;
    }
};


int main() {
    vector<PassengerGateway*> Passengers;
    string line;
    bool check = true;
    ifstream users_input("User.txt");
        if(users_input.is_open()){
            while(!users_input.eof()){
                getline(users_input, line);
                cout<<line<<endl;
                if(line == "-"){
                    check = false;
                    continue;
                }
                ifstream newuser_input(line);

                string line2;
                if(newuser_input.is_open()){
                    if(check){
                    string name;
                    string rating;
                    string payment;
                    string pinned;
                    vector<Order> orderhistory;

                  getline(newuser_input,line2);
                  name=line2;
                getline(newuser_input,line2);
                rating=line2;
                getline(newuser_input,line2);
                payment = line2;
                getline(newuser_input,line2);
                pinned=line2;
                while(!newuser_input.eof()){
                    getline(newuser_input,line2);
                    string time=line2;
                    getline(newuser_input,line2);
                    string start,final;
                    start=line2;
                    getline(newuser_input,line2);
                    final=line2;
                    getline(newuser_input,line2);
                    string carType=line2;
                    getline(newuser_input,line2);
                    string price=line2;
                   Order newOrder = Order(time,start,final,carType,price);
                   orderhistory.push_back(newOrder);
                }
                PassengerGateway* newPassenger = new PassengerGateway(name,rating,orderhistory,payment,pinned);
                Passengers.push_back(newPassenger);

                }else{
                    ifstream newuser_input(line);
                    string line2;
                    if(newuser_input.is_open()){

                    }
                    }
                }
            }
        }

        Passenger_output(Passengers[1]);

        Passenger_output(Passengers[0]);
//    int test=menu();
//    cout<<test;
    return 0;
}
