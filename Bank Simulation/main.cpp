
/* 
 * File:   main.cpp
 * Author: Nicholas MercuryQ
 * purpose: This is an application that simulates the reception of a Bank
 * Created on January 13, 2018, 6:07 PM
 * Modified on January 27, 2018
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
#include <queue>
#include <string>
#include <iomanip>
#include <algorithm>
#include "customer.h"

using namespace std;

int main() {

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
    

    string option;

    queue<int> customer; // store customer count
    queue<string>transaction; // store transactions
    //queue<string>serviceTime; //store service times
    queue<int>moneyQty; // store money amount
    queue<string>firstName; // store first names
    queue<string>lastName; // store last names
    queue<int>waitTime; // store wait time which is based on service times
    queue<string>arrivalTime; // store  arrival times
    
 
    // customer objects
    Customer tenFirstHalf;
    Customer tenSecondHalf;
    Customer elevenFirstHalf;
    Customer elevenSecondHalf;
    Customer twelveFirstHalf;
    Customer twelveSecondHalf;
    

  

    // to calculate todays date
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);

    srand(time(0)); //seed time

    while (true) { // display menu 
        cout << "\t\t" << "Bank Reception Simulator Application" << endl;
        cout << "\t\t" << "------------------------------------" << endl;
        cout << "\t\t" << "Option 1: Display End of the day Customer Report" << endl;
        cout << "\t\t" << "Option 2: Exit" << endl;
        cout << "\n\t\t";
        cin>>option;

        if (option == "1") { // display reports
            system("clear");
            cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Customer Data On " << (timePtr->tm_mon) + 1 << "/" << (timePtr->tm_mday) << "/" << (timePtr->tm_year) + 1900 << endl; // current date
            cout << "\n\n";
            tenFirstHalf.ReportTenFirst(customer, transaction, moneyQty, firstName, lastName, waitTime, arrivalTime);
            cout << "\n";   
            cout << "\n\n\n";
            tenSecondHalf.ReportTenSecond(customer, transaction, moneyQty, firstName, lastName, waitTime, arrivalTime);
            cout << "\n\n\n";
            elevenFirstHalf.ReportElevenFirst(customer, transaction, moneyQty, firstName, lastName, waitTime, arrivalTime);
            cout << "\n\n\n";
            elevenSecondHalf.ReportElevenSecond(customer, transaction, moneyQty, firstName, lastName, waitTime, arrivalTime);
            cout << "\n\n\n";
            twelveFirstHalf.ReportTwelveFirst(customer, transaction, moneyQty, firstName, lastName, waitTime, arrivalTime);
            cout << "\n\n\n";
            twelveSecondHalf.ReportTwelveSecond(customer, transaction, moneyQty, firstName, lastName, waitTime, arrivalTime);
            
            cout << "\t\t\t\t\t\t\t\t\t" << "---------------------------------------------------------------------------\n" << endl;
            break;
        }
        if (option == "2") {
            cout << "\n\t\tGood Bye!" << endl; // end program
            break;
        } else {

            cout << "\n\t\tInvalid Selection"; //prompt user to enter correct option

        }


    }


    return 0;
}

