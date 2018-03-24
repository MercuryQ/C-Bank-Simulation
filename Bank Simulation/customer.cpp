#include "customer.h"

// constructor

Customer::Customer() {

}

// destructor

Customer::~Customer() {

}


//print functions to be called
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// from 10:00 AM to 10:29 AM

void Customer::ReportTenFirst(queue<int> customer, queue<string>transaction, queue<int>moneyQty, queue<string>firstName, queue<string>lastName, queue<int>waitTime, queue<string>arrivalTime) {

    
    cout << "\t\t\t\t\t\t\t\t\t" << "BANK RECPTION SIMULATION REPORT OF CUSTOMERS (Between 10:00 Am to 10:29 AM)" << endl;
    cout << "\t\t\t\t\t\t\t\t\t" << "---------------------------------------------------------------------------\n" << endl;



    // generate random amount of customers
    randCustom = rand() % 9 + 1; // random number between 1 and 9
    for (int i = 0; i < randCustom; i++) {
        randTrans = rand() % 3 + 1; // generate random transaction types
        randCash = rand() % 5000 + 1; // generate random numbers between 9k and 1
        randFName = rand() % 20 + 1; // generate for random first name
        randLName = rand() % 20 + 1; // generate for random last name  
        randMin = rand() % 30 + 1; // generate for random minutes for 1 to 30 

        trans = to_string(randTrans);
        strFirstName = to_string(randFName);
        myTime = to_string(randMin);
        strLastName = to_string(randLName);
        customer.push(randCustom);
        moneyQty.push(randCash);
        
        
        
      

        // if statements for names first 
        if (strFirstName == "1") {
            strFirstName = "Tom";
            firstName.push(strFirstName);
        } else if (strFirstName == "2") {
            strFirstName = "Sam";
            firstName.push(strFirstName);
        } else if (strFirstName == "3") {
            strFirstName = "Bill";
            firstName.push(strFirstName);
        } else if (strFirstName == "4") {
            strFirstName = "Jennifer";
            firstName.push(strFirstName);
        } else if (strFirstName == "5") {
            strFirstName = "Sarah";
            firstName.push(strFirstName);
        } else if (strFirstName == "6") {
            strFirstName = "Jordan";
            firstName.push(strFirstName);
        } else if (strFirstName == "7") {
            strFirstName = "Nick";
            firstName.push(strFirstName);
        } else if (strFirstName == "8") {
            strFirstName = "Logan";
            firstName.push(strFirstName);
        } else if (strFirstName == "9") {
            strFirstName = "Elizabeth";
            firstName.push(strFirstName);
        } else if (strFirstName == "10") {
            strFirstName = "Ben";
            firstName.push(strFirstName);
        } else if (strFirstName == "11") {
            strFirstName = "Heather";
            firstName.push(strFirstName);
        } else if (strFirstName == "12") {
            strFirstName = "Brain";
            firstName.push(strFirstName);
        } else if (strFirstName == "13") {
            strFirstName = "Kat";
            firstName.push(strFirstName);
        } else if (strFirstName == "14") {
            strFirstName = "Oscar";
            firstName.push(strFirstName);
        } else if (strFirstName == "15") {
            strFirstName = "Mike";
            firstName.push(strFirstName);
        } else if (strFirstName == "16") {
            strFirstName = "Wayne";
            firstName.push(strFirstName);
        } else if (strFirstName == "17") {
            strFirstName = "Rosa";
            firstName.push(strFirstName);
        } else if (strFirstName == "18") {
            strFirstName = "Luna";
            firstName.push(strFirstName);
        } else if (strFirstName == "19") {
            strFirstName = "Jack";
            firstName.push(strFirstName);
        } else {
            strFirstName = "Kyle";
            firstName.push(strFirstName);
        }



        // if statements for last names
        if (strLastName == "1") {
            strLastName = "Young";
            lastName.push(strLastName);
        } else if (strLastName == "2") {
            strLastName = "Allen";
            lastName.push(strLastName);
        } else if (strLastName == "3") {
            strLastName = "Price";
            lastName.push(strLastName);
        } else if (strLastName == "4") {
            strLastName = "Morgan";
            lastName.push(strLastName);
        } else if (strLastName == "5") {
            strLastName = "Wilson";
            lastName.push(strLastName);
        } else if (strLastName == "6") {
            strLastName = "Perry";
            lastName.push(strLastName);
        } else if (strLastName == "7") {
            strLastName = "Sanchez";
            lastName.push(strLastName);
        } else if (strLastName == "8") {
            strLastName = "Cooper";
            lastName.push(strLastName);
        } else if (strLastName == "9") {
            strLastName = "Carter";
            lastName.push(strLastName);
        } else if (strLastName == "10") {
            strLastName = "Hayes";
            lastName.push(strLastName);
        } else if (strLastName == "11") {
            strLastName = "Lewis";
            lastName.push(strLastName);
        } else if (strLastName == "12") {
            strLastName = "Lee";
            lastName.push(strLastName);
        } else if (strLastName == "13") {
            strLastName = "Smith";
            lastName.push(strLastName);
        } else if (strLastName == "14") {
            strLastName = "Brown";
            lastName.push(strLastName);
        } else if (strLastName == "15") {
            strLastName = "Green";
            lastName.push(strLastName);
        } else if (strLastName == "16") {
            strLastName = "Alexander";
            lastName.push(strLastName);
        } else if (strLastName == "17") {
            strLastName = "Williams";
            lastName.push(strLastName);
        } else if (strLastName == "18") {
            strLastName = "Axe";
            lastName.push(strLastName);
        } else if (strLastName == "19") {
            strLastName = "Venus";
            lastName.push(strLastName);
        } else {
            strLastName = "Bell";
            lastName.push(strLastName);
        }



      // if statements for wait time and transaction type 

        if (trans == "1") {
            //serTime = "3 minutes";
            trans = "deposit";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(3);
            
        
                    
          
        } else if (trans == "2") {
            // serTime = "4 minutes";
            trans = "withdrawal";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(4);
         
          
        
            
        } else {
            // serTime = "5 minutes";
            trans = "new account";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(5);
            
           
            
           
        }


        // arrival time 30 minute range 

        if (myTime == "1") {
            myTime = "00";
            arrivalTime.push(myTime);
        } else if (myTime == "2") {
            myTime = "01";
            arrivalTime.push(myTime);
        } else if (myTime == "3") {
            myTime = "02";
            arrivalTime.push(myTime);
        } else if (myTime == "4") {
            myTime = "03";
            arrivalTime.push(myTime);
        } else if (myTime == "5") {
            myTime = "04";
            arrivalTime.push(myTime);
        } else if (myTime == "6") {
            myTime = "05";
            arrivalTime.push(myTime);
        } else if (myTime == "7") {
            myTime = "06";
            arrivalTime.push(myTime);
        } else if (myTime == "8") {
            myTime = "07";
            arrivalTime.push(myTime);
        } else if (myTime == "9") {
            myTime = "08";
            arrivalTime.push(myTime);
        } else if (myTime == "10") {
            myTime = "09";
            arrivalTime.push(myTime);
        } else if (myTime == "11") {
            myTime = "10";
            arrivalTime.push(myTime);
        } else if (myTime == "12") {
            myTime = "11";
            arrivalTime.push(myTime);
        } else if (myTime == "13") {
            myTime = "12";
            arrivalTime.push(myTime);
        } else if (myTime == "14") {
            myTime = "13";
            arrivalTime.push(myTime);
        } else if (myTime == "15") {
            myTime = "14";
            arrivalTime.push(myTime);
        } else if (myTime == "16") {
            myTime = "15";
            arrivalTime.push(myTime);
        } else if (myTime == "17") {
            myTime = "16";
            arrivalTime.push(myTime);
        } else if (myTime == "18") {
            myTime = "17";
            arrivalTime.push(myTime);
        } else if (myTime == "19") {
            myTime = "18";
            arrivalTime.push(myTime);
        } else if (myTime == "20") {
            myTime = "19";
            arrivalTime.push(myTime);
        } else if (myTime == "21") {
            myTime = "20";
            arrivalTime.push(myTime);
        } else if (myTime == "22") {
            myTime = "21";
            arrivalTime.push(myTime);
        } else if (myTime == "23") {
            myTime = "22";
            arrivalTime.push(myTime);
        } else if (myTime == "24") {
            myTime = "23";
            arrivalTime.push(myTime);
        } else if (myTime == "25") {
            myTime = "24";
            arrivalTime.push(myTime);
        } else if (myTime == "26") {
            myTime = "25";
            arrivalTime.push(myTime);
        } else if (myTime == "27") {
            myTime = "26";
            arrivalTime.push(myTime);
        } else if (myTime == "28") {
            myTime = "27";
            arrivalTime.push(myTime);
        } else if (myTime == "29") {
            myTime = "28";
            arrivalTime.push(myTime);
        } else {
            myTime = "29";
            arrivalTime.push(myTime);
        }



        // display output
        cout << "Customers: " << customer.front() << "\t\t" << "FirstName: " << firstName.front() << setw(20) << "\t" << "LastName: " << lastName.front() << setw(20)
                << "\t" << "Transaction Type: " << transaction.front() << "\t\t" << "Amount: $" << moneyQty.front()
                << "\t\t" << "Wait Time: " << waitTime.front() << " minutes" << "\t\t" << "Arrival Time: 10:" << arrivalTime.front() << endl;
        

        arrivalTime.pop();
        customer.pop();
        transaction.pop();
        moneyQty.pop();
        firstName.pop();
        lastName.pop();
        waitTime.pop();
        
     
                   
    
    }
    
     
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// from 10:30 AM to 10:59 AM

void Customer::ReportTenSecond(queue<int> customer, queue<string>transaction, queue<int>moneyQty, queue<string>firstName, queue<string>lastName, queue<int>waitTime, queue<string>arrivalTime) {


    cout << "\t\t\t\t\t\t\t\t\t" << "BANK RECPTION SIMULATION REPORT OF CUSTOMERS (Between 10:30 Am to 10:59 AM)" << endl;
    cout << "\t\t\t\t\t\t\t\t\t" << "---------------------------------------------------------------------------\n" << endl;



    // generate random amount of customers
    randCustom = rand() % 9 + 1; // random number between 1 and 9
    for (int i = 0; i < randCustom; i++) {
        randTrans = rand() % 3 + 1; // generate random transaction types
        randCash = rand() % 5000 + 1; // generate random numbers between 9k and 1
        randFName = rand() % 20 + 1; // generate for random first name
        randLName = rand() % 20 + 1; // generate for random last name  
        randMin = rand() % 30 + 1; // generate for random minutes for 1 to 30 

        trans = to_string(randTrans);
        strFirstName = to_string(randFName);
        myTime = to_string(randMin);
        strLastName = to_string(randLName);
        customer.push(randCustom);
        moneyQty.push(randCash);
    
      





        // if statements for names first 
        if (strFirstName == "1") {
            strFirstName = "Tom";
            firstName.push(strFirstName);
        } else if (strFirstName == "2") {
            strFirstName = "Sam";
            firstName.push(strFirstName);
        } else if (strFirstName == "3") {
            strFirstName = "Bill";
            firstName.push(strFirstName);
        } else if (strFirstName == "4") {
            strFirstName = "Jennifer";
            firstName.push(strFirstName);
        } else if (strFirstName == "5") {
            strFirstName = "Sarah";
            firstName.push(strFirstName);
        } else if (strFirstName == "6") {
            strFirstName = "Jordan";
            firstName.push(strFirstName);
        } else if (strFirstName == "7") {
            strFirstName = "Nick";
            firstName.push(strFirstName);
        } else if (strFirstName == "8") {
            strFirstName = "Logan";
            firstName.push(strFirstName);
        } else if (strFirstName == "9") {
            strFirstName = "Elizabeth";
            firstName.push(strFirstName);
        } else if (strFirstName == "10") {
            strFirstName = "Ben";
            firstName.push(strFirstName);
        } else if (strFirstName == "11") {
            strFirstName = "Heather";
            firstName.push(strFirstName);
        } else if (strFirstName == "12") {
            strFirstName = "Brain";
            firstName.push(strFirstName);
        } else if (strFirstName == "13") {
            strFirstName = "Kat";
            firstName.push(strFirstName);
        } else if (strFirstName == "14") {
            strFirstName = "Oscar";
            firstName.push(strFirstName);
        } else if (strFirstName == "15") {
            strFirstName = "Mike";
            firstName.push(strFirstName);
        } else if (strFirstName == "16") {
            strFirstName = "Wayne";
            firstName.push(strFirstName);
        } else if (strFirstName == "17") {
            strFirstName = "Rosa";
            firstName.push(strFirstName);
        } else if (strFirstName == "18") {
            strFirstName = "Luna";
            firstName.push(strFirstName);
        } else if (strFirstName == "19") {
            strFirstName = "Jack";
            firstName.push(strFirstName);
        } else {
            strFirstName = "Kyle";
            firstName.push(strFirstName);
        }



        // if statements for last names
        if (strLastName == "1") {
            strLastName = "Young";
            lastName.push(strLastName);
        } else if (strLastName == "2") {
            strLastName = "Allen";
            lastName.push(strLastName);
        } else if (strLastName == "3") {
            strLastName = "Price";
            lastName.push(strLastName);
        } else if (strLastName == "4") {
            strLastName = "Morgan";
            lastName.push(strLastName);
        } else if (strLastName == "5") {
            strLastName = "Wilson";
            lastName.push(strLastName);
        } else if (strLastName == "6") {
            strLastName = "Perry";
            lastName.push(strLastName);
        } else if (strLastName == "7") {
            strLastName = "Sanchez";
            lastName.push(strLastName);
        } else if (strLastName == "8") {
            strLastName = "Cooper";
            lastName.push(strLastName);
        } else if (strLastName == "9") {
            strLastName = "Carter";
            lastName.push(strLastName);
        } else if (strLastName == "10") {
            strLastName = "Hayes";
            lastName.push(strLastName);
        } else if (strLastName == "11") {
            strLastName = "Lewis";
            lastName.push(strLastName);
        } else if (strLastName == "12") {
            strLastName = "Lee";
            lastName.push(strLastName);
        } else if (strLastName == "13") {
            strLastName = "Smith";
            lastName.push(strLastName);
        } else if (strLastName == "14") {
            strLastName = "Brown";
            lastName.push(strLastName);
        } else if (strLastName == "15") {
            strLastName = "Green";
            lastName.push(strLastName);
        } else if (strLastName == "16") {
            strLastName = "Alexander";
            lastName.push(strLastName);
        } else if (strLastName == "17") {
            strLastName = "Williams";
            lastName.push(strLastName);
        } else if (strLastName == "18") {
            strLastName = "Axe";
            lastName.push(strLastName);
        } else if (strLastName == "19") {
            strLastName = "Venus";
            lastName.push(strLastName);
        } else {
            strLastName = "Bell";
            lastName.push(strLastName);
        }



        // if statements for wait time and transaction type

        if (trans == "1") {
            //serTime = "3 minutes";
            trans = "deposit";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(3);
            
          

            

        } else if (trans == "2") {
            // serTime = "4 minutes";
            trans = "withdrawal";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(4);
            
        


        } else {
            // serTime = "5 minutes";
            trans = "new account";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(5);
            
          


        }


        // arrival time  

        if (myTime == "1") {
            myTime = "30";
            arrivalTime.push(myTime);
        } else if (myTime == "2") {
            myTime = "31";
            arrivalTime.push(myTime);
        } else if (myTime == "3") {
            myTime = "32";
            arrivalTime.push(myTime);
        } else if (myTime == "4") {
            myTime = "33";
            arrivalTime.push(myTime);
        } else if (myTime == "5") {
            myTime = "34";
            arrivalTime.push(myTime);
        } else if (myTime == "6") {
            myTime = "35";
            arrivalTime.push(myTime);
        } else if (myTime == "7") {
            myTime = "36";
            arrivalTime.push(myTime);
        } else if (myTime == "8") {
            myTime = "37";
            arrivalTime.push(myTime);
        } else if (myTime == "9") {
            myTime = "38";
            arrivalTime.push(myTime);
        } else if (myTime == "10") {
            myTime = "39";
            arrivalTime.push(myTime);
        } else if (myTime == "11") {
            myTime = "40";
            arrivalTime.push(myTime);
        } else if (myTime == "12") {
            myTime = "41";
            arrivalTime.push(myTime);
        } else if (myTime == "13") {
            myTime = "42";
            arrivalTime.push(myTime);
        } else if (myTime == "14") {
            myTime = "43";
            arrivalTime.push(myTime);
        } else if (myTime == "15") {
            myTime = "44";
            arrivalTime.push(myTime);
        } else if (myTime == "16") {
            myTime = "45";
            arrivalTime.push(myTime);
        } else if (myTime == "17") {
            myTime = "46";
            arrivalTime.push(myTime);
        } else if (myTime == "18") {
            myTime = "47";
            arrivalTime.push(myTime);
        } else if (myTime == "19") {
            myTime = "48";
            arrivalTime.push(myTime);
        } else if (myTime == "20") {
            myTime = "49";
            arrivalTime.push(myTime);
        } else if (myTime == "21") {
            myTime = "50";
            arrivalTime.push(myTime);
        } else if (myTime == "22") {
            myTime = "51";
            arrivalTime.push(myTime);
        } else if (myTime == "23") {
            myTime = "52";
            arrivalTime.push(myTime);
        } else if (myTime == "24") {
            myTime = "53";
            arrivalTime.push(myTime);
        } else if (myTime == "25") {
            myTime = "54";
            arrivalTime.push(myTime);
        } else if (myTime == "26") {
            myTime = "55";
            arrivalTime.push(myTime);
        } else if (myTime == "27") {
            myTime = "56";
            arrivalTime.push(myTime);
        } else if (myTime == "28") {
            myTime = "57";
            arrivalTime.push(myTime);
        } else if (myTime == "29") {
            myTime = "58";
            arrivalTime.push(myTime);
        } else {
            myTime = "59";
            arrivalTime.push(myTime);
        }

        // display output
        cout << "Customers: " << customer.front() << "\t\t" << "FirstName: " << firstName.front() << setw(20) << "\t" << "LastName: " << lastName.front() << setw(20)
                << "\t" << "Transaction Type: " << transaction.front() << "\t\t" << "Amount: $" << moneyQty.front()
                << "\t\t" << "Wait Time: " << waitTime.front() << " minutes" << "\t\t" << "Arrival Time: 10:" << arrivalTime.front() << endl;

        arrivalTime.pop();
        customer.pop();
        transaction.pop();
        moneyQty.pop();
        firstName.pop();
        lastName.pop();
        waitTime.pop();
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// from 11:00 AM to 11:29 AM

void Customer::ReportElevenFirst(queue<int> customer, queue<string>transaction, queue<int>moneyQty, queue<string>firstName, queue<string>lastName, queue<int>waitTime, queue<string>arrivalTime) {


    cout << "\t\t\t\t\t\t\t\t\t" << "BANK RECPTION SIMULATION REPORT OF CUSTOMERS (Between 11:00 Am to 11:29 AM)" << endl;
    cout << "\t\t\t\t\t\t\t\t\t" << "---------------------------------------------------------------------------\n" << endl;




    // generate random amount of customers
    randCustom = rand() % 9 + 1; // random number between 1 and 9
    for (int i = 0; i < randCustom; i++) {
        randTrans = rand() % 3 + 1; // generate random transaction types
        randCash = rand() % 5000 + 1; // generate random numbers between 9k and 1
        randFName = rand() % 20 + 1; // generate for random first name
        randLName = rand() % 20 + 1; // generate for random last name  
        randMin = rand() % 30 + 1; // generate for random minutes for 1 to 30 

        trans = to_string(randTrans);
        strFirstName = to_string(randFName);
        myTime = to_string(randMin);
        strLastName = to_string(randLName);
        customer.push(randCustom);
        moneyQty.push(randCash);
     






        // if statements for names first 
        if (strFirstName == "1") {
            strFirstName = "Tom";
            firstName.push(strFirstName);
        } else if (strFirstName == "2") {
            strFirstName = "Sam";
            firstName.push(strFirstName);
        } else if (strFirstName == "3") {
            strFirstName = "Bill";
            firstName.push(strFirstName);
        } else if (strFirstName == "4") {
            strFirstName = "Jennifer";
            firstName.push(strFirstName);
        } else if (strFirstName == "5") {
            strFirstName = "Sarah";
            firstName.push(strFirstName);
        } else if (strFirstName == "6") {
            strFirstName = "Jordan";
            firstName.push(strFirstName);
        } else if (strFirstName == "7") {
            strFirstName = "Nick";
            firstName.push(strFirstName);
        } else if (strFirstName == "8") {
            strFirstName = "Logan";
            firstName.push(strFirstName);
        } else if (strFirstName == "9") {
            strFirstName = "Elizabeth";
            firstName.push(strFirstName);
        } else if (strFirstName == "10") {
            strFirstName = "Ben";
            firstName.push(strFirstName);
        } else if (strFirstName == "11") {
            strFirstName = "Heather";
            firstName.push(strFirstName);
        } else if (strFirstName == "12") {
            strFirstName = "Brain";
            firstName.push(strFirstName);
        } else if (strFirstName == "13") {
            strFirstName = "Kat";
            firstName.push(strFirstName);
        } else if (strFirstName == "14") {
            strFirstName = "Oscar";
            firstName.push(strFirstName);
        } else if (strFirstName == "15") {
            strFirstName = "Mike";
            firstName.push(strFirstName);
        } else if (strFirstName == "16") {
            strFirstName = "Wayne";
            firstName.push(strFirstName);
        } else if (strFirstName == "17") {
            strFirstName = "Rosa";
            firstName.push(strFirstName);
        } else if (strFirstName == "18") {
            strFirstName = "Luna";
            firstName.push(strFirstName);
        } else if (strFirstName == "19") {
            strFirstName = "Jack";
            firstName.push(strFirstName);
        } else {
            strFirstName = "Kyle";
            firstName.push(strFirstName);
        }



        // if statements for last names
        if (strLastName == "1") {
            strLastName = "Young";
            lastName.push(strLastName);
        } else if (strLastName == "2") {
            strLastName = "Allen";
            lastName.push(strLastName);
        } else if (strLastName == "3") {
            strLastName = "Price";
            lastName.push(strLastName);
        } else if (strLastName == "4") {
            strLastName = "Morgan";
            lastName.push(strLastName);
        } else if (strLastName == "5") {
            strLastName = "Wilson";
            lastName.push(strLastName);
        } else if (strLastName == "6") {
            strLastName = "Perry";
            lastName.push(strLastName);
        } else if (strLastName == "7") {
            strLastName = "Sanchez";
            lastName.push(strLastName);
        } else if (strLastName == "8") {
            strLastName = "Cooper";
            lastName.push(strLastName);
        } else if (strLastName == "9") {
            strLastName = "Carter";
            lastName.push(strLastName);
        } else if (strLastName == "10") {
            strLastName = "Hayes";
            lastName.push(strLastName);
        } else if (strLastName == "11") {
            strLastName = "Lewis";
            lastName.push(strLastName);
        } else if (strLastName == "12") {
            strLastName = "Lee";
            lastName.push(strLastName);
        } else if (strLastName == "13") {
            strLastName = "Smith";
            lastName.push(strLastName);
        } else if (strLastName == "14") {
            strLastName = "Brown";
            lastName.push(strLastName);
        } else if (strLastName == "15") {
            strLastName = "Green";
            lastName.push(strLastName);
        } else if (strLastName == "16") {
            strLastName = "Alexander";
            lastName.push(strLastName);
        } else if (strLastName == "17") {
            strLastName = "Williams";
            lastName.push(strLastName);
        } else if (strLastName == "18") {
            strLastName = "Axe";
            lastName.push(strLastName);
        } else if (strLastName == "19") {
            strLastName = "Venus";
            lastName.push(strLastName);
        } else {
            strLastName = "Bell";
            lastName.push(strLastName);
        }



     // if statements for wait time and transaction type

        if (trans == "1") {
            //serTime = "3 minutes";
            trans = "deposit";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(3);
            
           


        } else if (trans == "2") {
            // serTime = "4 minutes";
            trans = "withdrawal";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(4);
            
     


        } else {
            // serTime = "5 minutes";
            trans = "new account";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(5);
            
       


        }


        // arrival time 30 minute range 

        if (myTime == "1") {
            myTime = "00";
            arrivalTime.push(myTime);
        } else if (myTime == "2") {
            myTime = "01";
            arrivalTime.push(myTime);
        } else if (myTime == "3") {
            myTime = "02";
            arrivalTime.push(myTime);
        } else if (myTime == "4") {
            myTime = "03";
            arrivalTime.push(myTime);
        } else if (myTime == "5") {
            myTime = "04";
            arrivalTime.push(myTime);
        } else if (myTime == "6") {
            myTime = "05";
            arrivalTime.push(myTime);
        } else if (myTime == "7") {
            myTime = "06";
            arrivalTime.push(myTime);
        } else if (myTime == "8") {
            myTime = "07";
            arrivalTime.push(myTime);
        } else if (myTime == "9") {
            myTime = "08";
            arrivalTime.push(myTime);
        } else if (myTime == "10") {
            myTime = "09";
            arrivalTime.push(myTime);
        } else if (myTime == "11") {
            myTime = "10";
            arrivalTime.push(myTime);
        } else if (myTime == "12") {
            myTime = "11";
            arrivalTime.push(myTime);
        } else if (myTime == "13") {
            myTime = "12";
            arrivalTime.push(myTime);
        } else if (myTime == "14") {
            myTime = "13";
            arrivalTime.push(myTime);
        } else if (myTime == "15") {
            myTime = "14";
            arrivalTime.push(myTime);
        } else if (myTime == "16") {
            myTime = "15";
            arrivalTime.push(myTime);
        } else if (myTime == "17") {
            myTime = "16";
            arrivalTime.push(myTime);
        } else if (myTime == "18") {
            myTime = "17";
            arrivalTime.push(myTime);
        } else if (myTime == "19") {
            myTime = "18";
            arrivalTime.push(myTime);
        } else if (myTime == "20") {
            myTime = "19";
            arrivalTime.push(myTime);
        } else if (myTime == "21") {
            myTime = "20";
            arrivalTime.push(myTime);
        } else if (myTime == "22") {
            myTime = "21";
            arrivalTime.push(myTime);
        } else if (myTime == "23") {
            myTime = "22";
            arrivalTime.push(myTime);
        } else if (myTime == "24") {
            myTime = "23";
            arrivalTime.push(myTime);
        } else if (myTime == "25") {
            myTime = "24";
            arrivalTime.push(myTime);
        } else if (myTime == "26") {
            myTime = "25";
            arrivalTime.push(myTime);
        } else if (myTime == "27") {
            myTime = "26";
            arrivalTime.push(myTime);
        } else if (myTime == "28") {
            myTime = "27";
            arrivalTime.push(myTime);
        } else if (myTime == "29") {
            myTime = "28";
            arrivalTime.push(myTime);
        } else {
            myTime = "29";
            arrivalTime.push(myTime);
        }



        // display output
        cout << "Customers: " << customer.front() << "\t\t" << "FirstName: " << firstName.front() << setw(20) << "\t" << "LastName: " << lastName.front() << setw(20)
                << "\t" << "Transaction Type: " << transaction.front() << "\t\t" << "Amount: $" << moneyQty.front()
                << "\t\t" << "Wait Time: " << waitTime.front() << " minutes" << "\t\t" << "Arrival Time: 11:" << arrivalTime.front() << endl;

        arrivalTime.pop();
        customer.pop();
        transaction.pop();
        moneyQty.pop();
        firstName.pop();
        lastName.pop();
        waitTime.pop();
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// from 11:30 AM to 11:59 AM

void Customer::ReportElevenSecond(queue<int> customer, queue<string>transaction, queue<int>moneyQty, queue<string>firstName, queue<string>lastName, queue<int>waitTime, queue<string>arrivalTime) {

    cout << "\t\t\t\t\t\t\t\t\t" << "BANK RECPTION SIMULATION REPORT OF CUSTOMERS (Between 11:30 Am to 11:59 AM)" << endl;
    cout << "\t\t\t\t\t\t\t\t\t" << "---------------------------------------------------------------------------\n" << endl;



    // generate random amount of customers
    randCustom = rand() % 9 + 1; // random number between 1 and 9
    for (int i = 0; i < randCustom; i++) {
        randTrans = rand() % 3 + 1; // generate random transaction types
        randCash = rand() % 5000 + 1; // generate random numbers between 9k and 1
        randFName = rand() % 20 + 1; // generate for random first name
        randLName = rand() % 20 + 1; // generate for random last name  
        randMin = rand() % 30 + 1; // generate for random minutes for 1 to 30 

        trans = to_string(randTrans);
        strFirstName = to_string(randFName);
        myTime = to_string(randMin);
        strLastName = to_string(randLName);
        customer.push(randCustom);
        moneyQty.push(randCash);
     
 





        // if statements for names first 
        if (strFirstName == "1") {
            strFirstName = "Tom";
            firstName.push(strFirstName);
        } else if (strFirstName == "2") {
            strFirstName = "Sam";
            firstName.push(strFirstName);
        } else if (strFirstName == "3") {
            strFirstName = "Bill";
            firstName.push(strFirstName);
        } else if (strFirstName == "4") {
            strFirstName = "Jennifer";
            firstName.push(strFirstName);
        } else if (strFirstName == "5") {
            strFirstName = "Sarah";
            firstName.push(strFirstName);
        } else if (strFirstName == "6") {
            strFirstName = "Jordan";
            firstName.push(strFirstName);
        } else if (strFirstName == "7") {
            strFirstName = "Nick";
            firstName.push(strFirstName);
        } else if (strFirstName == "8") {
            strFirstName = "Logan";
            firstName.push(strFirstName);
        } else if (strFirstName == "9") {
            strFirstName = "Elizabeth";
            firstName.push(strFirstName);
        } else if (strFirstName == "10") {
            strFirstName = "Ben";
            firstName.push(strFirstName);
        } else if (strFirstName == "11") {
            strFirstName = "Heather";
            firstName.push(strFirstName);
        } else if (strFirstName == "12") {
            strFirstName = "Brain";
            firstName.push(strFirstName);
        } else if (strFirstName == "13") {
            strFirstName = "Kat";
            firstName.push(strFirstName);
        } else if (strFirstName == "14") {
            strFirstName = "Oscar";
            firstName.push(strFirstName);
        } else if (strFirstName == "15") {
            strFirstName = "Mike";
            firstName.push(strFirstName);
        } else if (strFirstName == "16") {
            strFirstName = "Wayne";
            firstName.push(strFirstName);
        } else if (strFirstName == "17") {
            strFirstName = "Rosa";
            firstName.push(strFirstName);
        } else if (strFirstName == "18") {
            strFirstName = "Luna";
            firstName.push(strFirstName);
        } else if (strFirstName == "19") {
            strFirstName = "Jack";
            firstName.push(strFirstName);
        } else {
            strFirstName = "Kyle";
            firstName.push(strFirstName);
        }



        // if statements for last names
        if (strLastName == "1") {
            strLastName = "Young";
            lastName.push(strLastName);
        } else if (strLastName == "2") {
            strLastName = "Allen";
            lastName.push(strLastName);
        } else if (strLastName == "3") {
            strLastName = "Price";
            lastName.push(strLastName);
        } else if (strLastName == "4") {
            strLastName = "Morgan";
            lastName.push(strLastName);
        } else if (strLastName == "5") {
            strLastName = "Wilson";
            lastName.push(strLastName);
        } else if (strLastName == "6") {
            strLastName = "Perry";
            lastName.push(strLastName);
        } else if (strLastName == "7") {
            strLastName = "Sanchez";
            lastName.push(strLastName);
        } else if (strLastName == "8") {
            strLastName = "Cooper";
            lastName.push(strLastName);
        } else if (strLastName == "9") {
            strLastName = "Carter";
            lastName.push(strLastName);
        } else if (strLastName == "10") {
            strLastName = "Hayes";
            lastName.push(strLastName);
        } else if (strLastName == "11") {
            strLastName = "Lewis";
            lastName.push(strLastName);
        } else if (strLastName == "12") {
            strLastName = "Lee";
            lastName.push(strLastName);
        } else if (strLastName == "13") {
            strLastName = "Smith";
            lastName.push(strLastName);
        } else if (strLastName == "14") {
            strLastName = "Brown";
            lastName.push(strLastName);
        } else if (strLastName == "15") {
            strLastName = "Green";
            lastName.push(strLastName);
        } else if (strLastName == "16") {
            strLastName = "Alexander";
            lastName.push(strLastName);
        } else if (strLastName == "17") {
            strLastName = "Williams";
            lastName.push(strLastName);
        } else if (strLastName == "18") {
            strLastName = "Axe";
            lastName.push(strLastName);
        } else if (strLastName == "19") {
            strLastName = "Venus";
            lastName.push(strLastName);
        } else {
            strLastName = "Bell";
            lastName.push(strLastName);
        }



     // if statements for wait time and transaction type

        if (trans == "1") {
            //serTime = "3 minutes";
            trans = "deposit";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(3);
          


        } else if (trans == "2") {
            // serTime = "4 minutes";
            trans = "withdrawal";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(4);
            
     


        } else {
            // serTime = "5 minutes";
            trans = "new account";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(5);
            


        }


        // arrival time  

        if (myTime == "1") {
            myTime = "30";
            arrivalTime.push(myTime);
        } else if (myTime == "2") {
            myTime = "31";
            arrivalTime.push(myTime);
        } else if (myTime == "3") {
            myTime = "32";
            arrivalTime.push(myTime);
        } else if (myTime == "4") {
            myTime = "33";
            arrivalTime.push(myTime);
        } else if (myTime == "5") {
            myTime = "34";
            arrivalTime.push(myTime);
        } else if (myTime == "6") {
            myTime = "35";
            arrivalTime.push(myTime);
        } else if (myTime == "7") {
            myTime = "36";
            arrivalTime.push(myTime);
        } else if (myTime == "8") {
            myTime = "37";
            arrivalTime.push(myTime);
        } else if (myTime == "9") {
            myTime = "38";
            arrivalTime.push(myTime);
        } else if (myTime == "10") {
            myTime = "39";
            arrivalTime.push(myTime);
        } else if (myTime == "11") {
            myTime = "40";
            arrivalTime.push(myTime);
        } else if (myTime == "12") {
            myTime = "41";
            arrivalTime.push(myTime);
        } else if (myTime == "13") {
            myTime = "42";
            arrivalTime.push(myTime);
        } else if (myTime == "14") {
            myTime = "43";
            arrivalTime.push(myTime);
        } else if (myTime == "15") {
            myTime = "44";
            arrivalTime.push(myTime);
        } else if (myTime == "16") {
            myTime = "45";
            arrivalTime.push(myTime);
        } else if (myTime == "17") {
            myTime = "46";
            arrivalTime.push(myTime);
        } else if (myTime == "18") {
            myTime = "47";
            arrivalTime.push(myTime);
        } else if (myTime == "19") {
            myTime = "48";
            arrivalTime.push(myTime);
        } else if (myTime == "20") {
            myTime = "49";
            arrivalTime.push(myTime);
        } else if (myTime == "21") {
            myTime = "50";
            arrivalTime.push(myTime);
        } else if (myTime == "22") {
            myTime = "51";
            arrivalTime.push(myTime);
        } else if (myTime == "23") {
            myTime = "52";
            arrivalTime.push(myTime);
        } else if (myTime == "24") {
            myTime = "53";
            arrivalTime.push(myTime);
        } else if (myTime == "25") {
            myTime = "54";
            arrivalTime.push(myTime);
        } else if (myTime == "26") {
            myTime = "55";
            arrivalTime.push(myTime);
        } else if (myTime == "27") {
            myTime = "56";
            arrivalTime.push(myTime);
        } else if (myTime == "28") {
            myTime = "57";
            arrivalTime.push(myTime);
        } else if (myTime == "29") {
            myTime = "58";
            arrivalTime.push(myTime);
        } else {
            myTime = "59";
            arrivalTime.push(myTime);
        }

        // display output
        cout << "Customers: " << customer.front() << "\t\t" << "FirstName: " << firstName.front() << setw(20) << "\t" << "LastName: " << lastName.front() << setw(20)
                << "\t" << "Transaction Type: " << transaction.front() << "\t\t" << "Amount: $" << moneyQty.front()
                << "\t\t" << "Wait Time: " << waitTime.front() << " minutes" << "\t\t" << "Arrival Time: 11:" << arrivalTime.front() << endl;

        arrivalTime.pop();
        customer.pop();
        transaction.pop();
        moneyQty.pop();
        firstName.pop();
        lastName.pop();
        waitTime.pop();
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// from 12:00 noon to 12:29 noon

void Customer::ReportTwelveFirst(queue<int> customer, queue<string>transaction, queue<int>moneyQty, queue<string>firstName, queue<string>lastName, queue<int>waitTime, queue<string>arrivalTime) {


    cout << "\t\t\t\t\t\t\t\t\t" << "BANK RECPTION SIMULATION REPORT OF CUSTOMERS (Between 12:00 noon to 12:29 noon)" << endl;
    cout << "\t\t\t\t\t\t\t\t\t" << "---------------------------------------------------------------------------\n" << endl;



    // generate random amount of customers
    randCustom = rand() % 9 + 1; // random number between 1 and 9
    for (int i = 0; i < randCustom; i++) {
        randTrans = rand() % 3 + 1; // generate random transaction types
        randCash = rand() % 5000 + 1; // generate random numbers between 9k and 1
        randFName = rand() % 20 + 1; // generate for random first name
        randLName = rand() % 20 + 1; // generate for random last name  
        randMin = rand() % 30 + 1; // generate for random minutes for 1 to 30 

        trans = to_string(randTrans);
        strFirstName = to_string(randFName);
        myTime = to_string(randMin);
        strLastName = to_string(randLName);
        customer.push(randCustom);
        moneyQty.push(randCash);
     
 





        // if statements for names first 
        if (strFirstName == "1") {
            strFirstName = "Tom";
            firstName.push(strFirstName);
        } else if (strFirstName == "2") {
            strFirstName = "Sam";
            firstName.push(strFirstName);
        } else if (strFirstName == "3") {
            strFirstName = "Bill";
            firstName.push(strFirstName);
        } else if (strFirstName == "4") {
            strFirstName = "Jennifer";
            firstName.push(strFirstName);
        } else if (strFirstName == "5") {
            strFirstName = "Sarah";
            firstName.push(strFirstName);
        } else if (strFirstName == "6") {
            strFirstName = "Jordan";
            firstName.push(strFirstName);
        } else if (strFirstName == "7") {
            strFirstName = "Nick";
            firstName.push(strFirstName);
        } else if (strFirstName == "8") {
            strFirstName = "Logan";
            firstName.push(strFirstName);
        } else if (strFirstName == "9") {
            strFirstName = "Elizabeth";
            firstName.push(strFirstName);
        } else if (strFirstName == "10") {
            strFirstName = "Ben";
            firstName.push(strFirstName);
        } else if (strFirstName == "11") {
            strFirstName = "Heather";
            firstName.push(strFirstName);
        } else if (strFirstName == "12") {
            strFirstName = "Brain";
            firstName.push(strFirstName);
        } else if (strFirstName == "13") {
            strFirstName = "Kat";
            firstName.push(strFirstName);
        } else if (strFirstName == "14") {
            strFirstName = "Oscar";
            firstName.push(strFirstName);
        } else if (strFirstName == "15") {
            strFirstName = "Mike";
            firstName.push(strFirstName);
        } else if (strFirstName == "16") {
            strFirstName = "Wayne";
            firstName.push(strFirstName);
        } else if (strFirstName == "17") {
            strFirstName = "Rosa";
            firstName.push(strFirstName);
        } else if (strFirstName == "18") {
            strFirstName = "Luna";
            firstName.push(strFirstName);
        } else if (strFirstName == "19") {
            strFirstName = "Jack";
            firstName.push(strFirstName);
        } else {
            strFirstName = "Kyle";
            firstName.push(strFirstName);
        }



        // if statements for last names
        if (strLastName == "1") {
            strLastName = "Young";
            lastName.push(strLastName);
        } else if (strLastName == "2") {
            strLastName = "Allen";
            lastName.push(strLastName);
        } else if (strLastName == "3") {
            strLastName = "Price";
            lastName.push(strLastName);
        } else if (strLastName == "4") {
            strLastName = "Morgan";
            lastName.push(strLastName);
        } else if (strLastName == "5") {
            strLastName = "Wilson";
            lastName.push(strLastName);
        } else if (strLastName == "6") {
            strLastName = "Perry";
            lastName.push(strLastName);
        } else if (strLastName == "7") {
            strLastName = "Sanchez";
            lastName.push(strLastName);
        } else if (strLastName == "8") {
            strLastName = "Cooper";
            lastName.push(strLastName);
        } else if (strLastName == "9") {
            strLastName = "Carter";
            lastName.push(strLastName);
        } else if (strLastName == "10") {
            strLastName = "Hayes";
            lastName.push(strLastName);
        } else if (strLastName == "11") {
            strLastName = "Lewis";
            lastName.push(strLastName);
        } else if (strLastName == "12") {
            strLastName = "Lee";
            lastName.push(strLastName);
        } else if (strLastName == "13") {
            strLastName = "Smith";
            lastName.push(strLastName);
        } else if (strLastName == "14") {
            strLastName = "Brown";
            lastName.push(strLastName);
        } else if (strLastName == "15") {
            strLastName = "Green";
            lastName.push(strLastName);
        } else if (strLastName == "16") {
            strLastName = "Alexander";
            lastName.push(strLastName);
        } else if (strLastName == "17") {
            strLastName = "Williams";
            lastName.push(strLastName);
        } else if (strLastName == "18") {
            strLastName = "Axe";
            lastName.push(strLastName);
        } else if (strLastName == "19") {
            strLastName = "Venus";
            lastName.push(strLastName);
        } else {
            strLastName = "Bell";
            lastName.push(strLastName);
        }



       // if statements for wait time and transaction type

        if (trans == "1") {
            //serTime = "3 minutes";
            trans = "deposit";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(3);
            



        } else if (trans == "2") {
            // serTime = "4 minutes";
            trans = "withdrawal";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(4);
            



        } else {
            // serTime = "5 minutes";
            trans = "new account";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(5);
            



        }


        // arrival time 30 minute range 

        if (myTime == "1") {
            myTime = "00";
            arrivalTime.push(myTime);
        } else if (myTime == "2") {
            myTime = "01";
            arrivalTime.push(myTime);
        } else if (myTime == "3") {
            myTime = "02";
            arrivalTime.push(myTime);
        } else if (myTime == "4") {
            myTime = "03";
            arrivalTime.push(myTime);
        } else if (myTime == "5") {
            myTime = "04";
            arrivalTime.push(myTime);
        } else if (myTime == "6") {
            myTime = "05";
            arrivalTime.push(myTime);
        } else if (myTime == "7") {
            myTime = "06";
            arrivalTime.push(myTime);
        } else if (myTime == "8") {
            myTime = "07";
            arrivalTime.push(myTime);
        } else if (myTime == "9") {
            myTime = "08";
            arrivalTime.push(myTime);
        } else if (myTime == "10") {
            myTime = "09";
            arrivalTime.push(myTime);
        } else if (myTime == "11") {
            myTime = "10";
            arrivalTime.push(myTime);
        } else if (myTime == "12") {
            myTime = "11";
            arrivalTime.push(myTime);
        } else if (myTime == "13") {
            myTime = "12";
            arrivalTime.push(myTime);
        } else if (myTime == "14") {
            myTime = "13";
            arrivalTime.push(myTime);
        } else if (myTime == "15") {
            myTime = "14";
            arrivalTime.push(myTime);
        } else if (myTime == "16") {
            myTime = "15";
            arrivalTime.push(myTime);
        } else if (myTime == "17") {
            myTime = "16";
            arrivalTime.push(myTime);
        } else if (myTime == "18") {
            myTime = "17";
            arrivalTime.push(myTime);
        } else if (myTime == "19") {
            myTime = "18";
            arrivalTime.push(myTime);
        } else if (myTime == "20") {
            myTime = "19";
            arrivalTime.push(myTime);
        } else if (myTime == "21") {
            myTime = "20";
            arrivalTime.push(myTime);
        } else if (myTime == "22") {
            myTime = "21";
            arrivalTime.push(myTime);
        } else if (myTime == "23") {
            myTime = "22";
            arrivalTime.push(myTime);
        } else if (myTime == "24") {
            myTime = "23";
            arrivalTime.push(myTime);
        } else if (myTime == "25") {
            myTime = "24";
            arrivalTime.push(myTime);
        } else if (myTime == "26") {
            myTime = "25";
            arrivalTime.push(myTime);
        } else if (myTime == "27") {
            myTime = "26";
            arrivalTime.push(myTime);
        } else if (myTime == "28") {
            myTime = "27";
            arrivalTime.push(myTime);
        } else if (myTime == "29") {
            myTime = "28";
            arrivalTime.push(myTime);
        } else {
            myTime = "29";
            arrivalTime.push(myTime);
        }



        // display output
        cout << "Customers: " << customer.front() << "\t\t" << "FirstName: " << firstName.front() << setw(20) << "\t" << "LastName: " << lastName.front() << setw(20)
                << "\t" << "Transaction Type: " << transaction.front() << "\t\t" << "Amount: $" << moneyQty.front()
                << "\t\t" << "Wait Time: " << waitTime.front() << " minutes" << "\t\t" << "Arrival Time: 12:" << arrivalTime.front() << endl;

        arrivalTime.pop();
        customer.pop();
        transaction.pop();
        moneyQty.pop();
        firstName.pop();
        lastName.pop();
        waitTime.pop();
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// from 12:30 noon to 12:59 noon

void Customer::ReportTwelveSecond(queue<int> customer, queue<string>transaction, queue<int>moneyQty, queue<string>firstName, queue<string>lastName, queue<int>waitTime, queue<string>arrivalTime) {

    cout << "\t\t\t\t\t\t\t\t\t" << "BANK RECPTION SIMULATION REPORT OF CUSTOMERS (Between 12:30 Noon to 12:59 Noon)" << endl;
    cout << "\t\t\t\t\t\t\t\t\t" << "---------------------------------------------------------------------------\n" << endl;



    // generate random amount of customers
    randCustom = rand() % 9 + 1; // random number between 1 and 9
    for (int i = 0; i < randCustom; i++) {
        randTrans = rand() % 3 + 1; // generate random transaction types
        randCash = rand() % 5000 + 1; // generate random numbers between 9k and 1
        randFName = rand() % 20 + 1; // generate for random first name
        randLName = rand() % 20 + 1; // generate for random last name  
        randMin = rand() % 30 + 1; // generate for random minutes for 1 to 30 

        trans = to_string(randTrans);
        strFirstName = to_string(randFName);
        myTime = to_string(randMin);
        strLastName = to_string(randLName);
        customer.push(randCustom);
        moneyQty.push(randCash);
      





        // if statements for names first 
        if (strFirstName == "1") {
            strFirstName = "Tom";
            firstName.push(strFirstName);
        } else if (strFirstName == "2") {
            strFirstName = "Sam";
            firstName.push(strFirstName);
        } else if (strFirstName == "3") {
            strFirstName = "Bill";
            firstName.push(strFirstName);
        } else if (strFirstName == "4") {
            strFirstName = "Jennifer";
            firstName.push(strFirstName);
        } else if (strFirstName == "5") {
            strFirstName = "Sarah";
            firstName.push(strFirstName);
        } else if (strFirstName == "6") {
            strFirstName = "Jordan";
            firstName.push(strFirstName);
        } else if (strFirstName == "7") {
            strFirstName = "Nick";
            firstName.push(strFirstName);
        } else if (strFirstName == "8") {
            strFirstName = "Logan";
            firstName.push(strFirstName);
        } else if (strFirstName == "9") {
            strFirstName = "Elizabeth";
            firstName.push(strFirstName);
        } else if (strFirstName == "10") {
            strFirstName = "Ben";
            firstName.push(strFirstName);
        } else if (strFirstName == "11") {
            strFirstName = "Heather";
            firstName.push(strFirstName);
        } else if (strFirstName == "12") {
            strFirstName = "Brain";
            firstName.push(strFirstName);
        } else if (strFirstName == "13") {
            strFirstName = "Kat";
            firstName.push(strFirstName);
        } else if (strFirstName == "14") {
            strFirstName = "Oscar";
            firstName.push(strFirstName);
        } else if (strFirstName == "15") {
            strFirstName = "Mike";
            firstName.push(strFirstName);
        } else if (strFirstName == "16") {
            strFirstName = "Wayne";
            firstName.push(strFirstName);
        } else if (strFirstName == "17") {
            strFirstName = "Rosa";
            firstName.push(strFirstName);
        } else if (strFirstName == "18") {
            strFirstName = "Luna";
            firstName.push(strFirstName);
        } else if (strFirstName == "19") {
            strFirstName = "Jack";
            firstName.push(strFirstName);
        } else {
            strFirstName = "Kyle";
            firstName.push(strFirstName);
        }



        // if statements for last names
        if (strLastName == "1") {
            strLastName = "Young";
            lastName.push(strLastName);
        } else if (strLastName == "2") {
            strLastName = "Allen";
            lastName.push(strLastName);
        } else if (strLastName == "3") {
            strLastName = "Price";
            lastName.push(strLastName);
        } else if (strLastName == "4") {
            strLastName = "Morgan";
            lastName.push(strLastName);
        } else if (strLastName == "5") {
            strLastName = "Wilson";
            lastName.push(strLastName);
        } else if (strLastName == "6") {
            strLastName = "Perry";
            lastName.push(strLastName);
        } else if (strLastName == "7") {
            strLastName = "Sanchez";
            lastName.push(strLastName);
        } else if (strLastName == "8") {
            strLastName = "Cooper";
            lastName.push(strLastName);
        } else if (strLastName == "9") {
            strLastName = "Carter";
            lastName.push(strLastName);
        } else if (strLastName == "10") {
            strLastName = "Hayes";
            lastName.push(strLastName);
        } else if (strLastName == "11") {
            strLastName = "Lewis";
            lastName.push(strLastName);
        } else if (strLastName == "12") {
            strLastName = "Lee";
            lastName.push(strLastName);
        } else if (strLastName == "13") {
            strLastName = "Smith";
            lastName.push(strLastName);
        } else if (strLastName == "14") {
            strLastName = "Brown";
            lastName.push(strLastName);
        } else if (strLastName == "15") {
            strLastName = "Green";
            lastName.push(strLastName);
        } else if (strLastName == "16") {
            strLastName = "Alexander";
            lastName.push(strLastName);
        } else if (strLastName == "17") {
            strLastName = "Williams";
            lastName.push(strLastName);
        } else if (strLastName == "18") {
            strLastName = "Axe";
            lastName.push(strLastName);
        } else if (strLastName == "19") {
            strLastName = "Venus";
            lastName.push(strLastName);
        } else {
            strLastName = "Bell";
            lastName.push(strLastName);
        }



        // if statements for wait time and transaction type

        if (trans == "1") {
            //serTime = "3 minutes";
            trans = "deposit";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(3);



        } else if (trans == "2") {
            // serTime = "4 minutes";
            trans = "withdrawal";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(4);
            
      

        } else {
            // serTime = "5 minutes";
            trans = "new account";
            transaction.push(trans);
            // serviceTime.push(serTime);
            waitTime.push(5);
            



        }


        // arrival time  

        if (myTime == "1") {
            myTime = "30";
            arrivalTime.push(myTime);
        } else if (myTime == "2") {
            myTime = "31";
            arrivalTime.push(myTime);
        } else if (myTime == "3") {
            myTime = "32";
            arrivalTime.push(myTime);
        } else if (myTime == "4") {
            myTime = "33";
            arrivalTime.push(myTime);
        } else if (myTime == "5") {
            myTime = "34";
            arrivalTime.push(myTime);
        } else if (myTime == "6") {
            myTime = "35";
            arrivalTime.push(myTime);
        } else if (myTime == "7") {
            myTime = "36";
            arrivalTime.push(myTime);
        } else if (myTime == "8") {
            myTime = "37";
            arrivalTime.push(myTime);
        } else if (myTime == "9") {
            myTime = "38";
            arrivalTime.push(myTime);
        } else if (myTime == "10") {
            myTime = "39";
            arrivalTime.push(myTime);
        } else if (myTime == "11") {
            myTime = "40";
            arrivalTime.push(myTime);
        } else if (myTime == "12") {
            myTime = "41";
            arrivalTime.push(myTime);
        } else if (myTime == "13") {
            myTime = "42";
            arrivalTime.push(myTime);
        } else if (myTime == "14") {
            myTime = "43";
            arrivalTime.push(myTime);
        } else if (myTime == "15") {
            myTime = "44";
            arrivalTime.push(myTime);
        } else if (myTime == "16") {
            myTime = "45";
            arrivalTime.push(myTime);
        } else if (myTime == "17") {
            myTime = "46";
            arrivalTime.push(myTime);
        } else if (myTime == "18") {
            myTime = "47";
            arrivalTime.push(myTime);
        } else if (myTime == "19") {
            myTime = "48";
            arrivalTime.push(myTime);
        } else if (myTime == "20") {
            myTime = "49";
            arrivalTime.push(myTime);
        } else if (myTime == "21") {
            myTime = "50";
            arrivalTime.push(myTime);
        } else if (myTime == "22") {
            myTime = "51";
            arrivalTime.push(myTime);
        } else if (myTime == "23") {
            myTime = "52";
            arrivalTime.push(myTime);
        } else if (myTime == "24") {
            myTime = "53";
            arrivalTime.push(myTime);
        } else if (myTime == "25") {
            myTime = "54";
            arrivalTime.push(myTime);
        } else if (myTime == "26") {
            myTime = "55";
            arrivalTime.push(myTime);
        } else if (myTime == "27") {
            myTime = "56";
            arrivalTime.push(myTime);
        } else if (myTime == "28") {
            myTime = "57";
            arrivalTime.push(myTime);
        } else if (myTime == "29") {
            myTime = "58";
            arrivalTime.push(myTime);
        } else {
            myTime = "59";
            arrivalTime.push(myTime);
        }

        // display output
        cout << "Customers: " << customer.front() << "\t\t" << "FirstName: " << firstName.front() << setw(20) << "\t" << "LastName: " << lastName.front() << setw(20)
                << "\t" << "Transaction Type: " << transaction.front() << "\t\t" << "Amount: $" << moneyQty.front()
                << "\t\t" << "Wait Time: " << waitTime.front() << " minutes" << "\t\t" << "Arrival Time: 12:" << arrivalTime.front() << endl;

        arrivalTime.pop();
        customer.pop();
        transaction.pop();
        moneyQty.pop();
        firstName.pop();
        lastName.pop();
        waitTime.pop();
    }
    
}
