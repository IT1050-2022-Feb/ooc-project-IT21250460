//K Jayasinghe IT21249716 MLB_11.01_HealthInsurance

#include<iostream>
#include <cstring>
#include<string>
#include "Medical.h"
using namespace std;

Medical::Medical(){
    diseaseID=0;
    diseaseDescription="";
    startDate="";
    endDate="";
}
Medical::Medical(int pdiseaseID, string pdiseaseDes, string pstartDate, string pendDate){
   diseaseID=pdiseaseID;
   diseaseDescription=pdiseaseDes;
   startDate=pstartDate;
   endDate=pendDate;
}

void Medical::setCustomerID(int pcustomerID){
    customerID=pcustomerID;
}
void Medical::displayMedical(){
    cout<<"Customer ID: "<<customerID<<endl;
    cout<<"Disease id: "<<diseaseID<<endl;
    cout<<"Disease Description: "<<diseaseDescription<<endl;
    cout<<"Disease Start date: "<<startDate<<endl;
    cout<<"Disease End date: "<<endDate<<endl;
}
