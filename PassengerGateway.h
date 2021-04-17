//
// Created by Aisen on 14.04.2021.
//

#ifndef ITP_PASSENGERGATEWAY_H
#define ITP_PASSENGERGATEWAY_H
#include <string>
#include "Order.h"
using namespace std;

class PassengerGateway {
public:
    string Name;
    string rating;
    vector<Order> orderhistory;
    string payment_methods;
    string pinnedAddress;



    PassengerGateway(string newName, string newRating, vector <Order> newOrderHistory, string newPayment, string newPinnedAddress):Name(newName),rating(newRating),orderhistory(newOrderHistory),payment_methods(newPayment),pinnedAddress(newPinnedAddress){};
};


#endif //ITP_PASSENGERGATEWAY_H
