
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <queue>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

class Customer
{
  public:
        // variable declarations
    string trans;
    //string serTime;
    string strFirstName;
    string strLastName;
    string myTime;
    int randCustom;
    int randTrans;
    int randCash;
    int randFName;
    int randLName;
    int randMin;

   

    queue<int> customer; // store customer count
    queue<string>transaction; // store transactions
    //queue<string>serviceTime; //store service times
    queue<int>moneyQty; // store money amount
    queue<string>firstName; // store first names
    queue<string>lastName; // store last names
    queue<int>waitTime; // store wait time which is based on service times
    queue<string>arrivalTime; // store  arrival times
    

   
    Customer(); // constructor
   ~Customer(); // destructor
   
    //print functions
    // from 10:00 AM to 10:29 AM
    void ReportTenFirst( queue<int> customer, queue<string>transaction,queue<int>moneyQty,queue<string>firstName,queue<string>lastName,queue<int>waitTime,queue<string>arrivalTime);
    // from 10:30 AM to 10:59 AM
    void ReportTenSecond( queue<int> customer, queue<string>transaction,queue<int>moneyQty,queue<string>firstName,queue<string>lastName,queue<int>waitTime,queue<string>arrivalTime);
    // from 11:00 AM to 11:29 AM
    void ReportElevenFirst( queue<int> customer, queue<string>transaction,queue<int>moneyQty,queue<string>firstName,queue<string>lastName,queue<int>waitTime,queue<string>arrivalTime);
    // from 11:30 AM to 11:59 AM
    void ReportElevenSecond( queue<int> customer, queue<string>transaction,queue<int>moneyQty,queue<string>firstName,queue<string>lastName,queue<int>waitTime,queue<string>arrivalTime);
    // from 12:00 noon to 12:29 noon
    void ReportTwelveFirst( queue<int> customer, queue<string>transaction,queue<int>moneyQty,queue<string>firstName,queue<string>lastName,queue<int>waitTime,queue<string>arrivalTime);
    // from 12:30 noon to 12:59 noon
    void ReportTwelveSecond( queue<int> customer, queue<string>transaction,queue<int>moneyQty,queue<string>firstName,queue<string>lastName,queue<int>waitTime,queue<string>arrivalTime);
     
   

};


#endif /* CUSTOMER_H */

