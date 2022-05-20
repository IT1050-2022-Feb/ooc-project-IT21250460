//Niflan M. N. A. IT21371004  MLB_11.01_HealthInsurance

#include<iostream>
#include <cstring>
#include<string>
using namespace std;

//Employee Class

class Employee: public Person{
 protected:
 int employeeID;
 string employeeJobrole;
 string employeeDepartment;
 int policyID;
 string policyCoverage;
 string policyDescription;
 int customerID;
 public:
 Employee();

 Employee(int pEmployeeID, string pEmploayeeJobrole, string pEmployeeDepartment);
 void setPersonaldetails(char pPersonName[], int pPersonAge, char pPersonDOB[],char 
pPersonContact[],char pPersonAddress[],char pPersonEmail[],string pPersonGender,string 
pPersonMarital){
 strcpy(personName,pPersonName);
 personAge=pPersonAge;
 strcpy(personAddress,pPersonAddress);
 strcpy(personEmail,pPersonEmail);
 strcpy(personDOB,pPersonDOB);
 strcpy(personContact,pPersonContact);
 personGender=pPersonGender;
 maritalStatus=pPersonMarital;
 }
 void displayEmployeedetails();
 void setPolcy(int pPolicyID,int pCustomerID, string pPolicyCover, string pPolicyDes)
 {
 customerID=pCustomerID;
 policyID=pPolicyID;
 policyCoverage=pPolicyCover;
 policyDescription=pPolicyDes;
 }
 void setCustomerID(int pCustomerID)
 {
 customerID=pCustomerID;
 }
 
 int getCustomerID(); 
int getPolicyID(); 
};
