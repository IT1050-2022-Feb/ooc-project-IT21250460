//S.A.U.K. Suraweera IT21370182 MLB_11.01_HealthInsurance

#include<iostream>
#include <cstring>
#include<string>
#include "Customer.h"
using namespace

Customer::Customer(){
    strcpy(personName,"");
            personAge=0;
            strcpy(personAddress,"");
            strcpy(personEmail,"");
            strcpy(personDOB,"");
            strcpy(personContact,"");
            personGender="";
            maritalStatus="";
}

void Customer::displayCustomerDetails(){
    cout<<"Customer ID: "<<customerID<<endl;
    cout<<"Customer Name: "<<personName<<endl;
    cout<<"Customer Age: "<<personAge<<endl;
    cout<<"Customer DOB: "<<personDOB<<endl;
    cout<<"Customer Contact: "<<personContact<<endl;
    cout<<"Customer Address: "<<personAddress<<endl;
    cout<<"Customer Email: "<<personEmail<<endl;
    cout<<"Customer Gender: "<<personGender<<endl;
    cout<<"Customer Marital Status: "<<maritalStatus<<endl;
}
