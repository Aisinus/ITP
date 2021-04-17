//
// Created by Aisen on 14.04.2021.
//

#ifndef ITP_ORDER_H
#define ITP_ORDER_H
#include <vector>
#include <ctime>
#include <chrono>

#include <string>
using namespace std;
class Order {
public:
     string time;
     string start,final;
     string cartype;
     string price;

    Order(string newtime,string newstart, string newfinal, string newcartype,string newprice):time(newtime),start(newstart),final(newfinal),cartype(newcartype),price(newprice){};
};


#endif //ITP_ORDER_H
