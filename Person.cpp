//S.A.U.K. Suraweera IT21370182 MLB_11.01_HealthInsurance

#include<iostream>
#include<cstring>
#include<string>
#include "Person.h"
using namespace std;

void Person::displayPersonDetails(){
    cout<<"Person Name: "<<personName<<endl;
    cout<<"Person Age: "<<personAge<<endl;
    cout<<"Person DOB: "<<personDOB<<endl;
    cout<<"Person Contact: "<<personContact<<endl;
    cout<<"Person Address: "<<personAddress<<endl;
    cout<<"Person Email: "<<personEmail<<endl;
    cout<<"Person Gender: "<<personGender<<endl;
    cout<<"Person Marital Status: "<<maritalStatus<<endl;
}

Person::Person(){
    strcpy(personName,"");
    strcpy(personDOB,"");
    strcpy(personContact,"");
    strcpy(personAddress,"");
    strcpy(personEmail,"");
    personAge=0;
    personGender="";
    maritalStatus="";
}

Person::Person(char pPersonName[], int pPersonAge, char pPersonDOB[],char pPersonContact[],char pPersonAddress[],char pPersonEmail[],string pPersonGender,string pPersonMarital){
    strcpy(personName,pPersonName);
    personAge=pPersonAge;
    strcpy(personAddress,pPersonAddress);
    strcpy(personEmail,pPersonEmail);
    strcpy(personDOB,pPersonDOB);
    strcpy(personContact,pPersonContact);
    personGender=pPersonGender;
    maritalStatus=pPersonMarital;
}
