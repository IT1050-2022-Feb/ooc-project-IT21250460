//S.A.U.K. Suraweera IT21370182 MLB_11.01_HealthInsurance

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

//Customer Class

class Customer:public Employee{
    protected:
    
    public:
        Customer();
        void setPersonalDetails(char pPersonName[], int pPersonAge, char pPersonDOB[],char pPersonContact[],char pPersonAddress[],char pPersonEmail[],string pPersonGender,string pPersonMarital)
        {
            strcpy(personName,pPersonName);
            personAge=pPersonAge;
            strcpy(personAddress,pPersonAddress);
            strcpy(personEmail,pPersonEmail);
            strcpy(personDOB,pPersonDOB);
            strcpy(personContact,pPersonContact);
            personGender=pPersonGender;
            maritalStatus=pPersonMarital;
        }
		
        void displayCustomerDetails();
        
        
};