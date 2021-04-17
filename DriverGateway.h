//
// Created by Aisen on 14.04.2021.
//

#ifndef ITP_DRIVERGATEWAY_H
#define ITP_DRIVERGATEWAY_H
#include <string>
#include "Order.h"


class DriverGateway {
public:
    string name;
    string rating;
    string car;
    vector<Order> orderhistory;
    string status;

    DriverGateway(string newName, string newRating, vector<Order> newOrderHistory, string newCar, string newStatus): name(newName), rating(newRating), orderhistory(newOrderHistory),car(newCar), status(newStatus){}
};


#endif //ITP_DRIVERGATEWAY_H
