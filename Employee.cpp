//Niflan M. N. A. IT21371004  MLB_11.01_HealthInsurance

#include<iostream>
#include <cstring>
#include<string>
#include "Employee.h"
using namespace std;

Employee::Employee(){
 employeeID=0;
 employeeJobrole="";
 employeeDepartment="";
}
Employee::Employee(int pEmployeeID, string pEmploayeeJobrole, string 
pEmployeeDepartment){
 employeeID=pEmployeeID;
 employeeJobrole=pEmploayeeJobrole;
 employeeDepartment=pEmployeeDepartment;
}
void Employee::displayEmployeedetails(){
 cout<<"Employee ID: "<<employeeID<<endl;
 cout<<"Employee Job Role: "<<employeeJobrole<<endl;
 cout<<"Employee Department: "<<employeeDepartment<<endl;
 cout<<"Employee Name: "<<personName<<endl;
 cout<<"Employee Age: "<<personAge<<endl;
 cout<<"Employee DOB: "<<personDOB<<endl;
 cout<<"Employee Contact: "<<personContact<<endl;
 cout<<"Employee Address: "<<personAddress<<endl;
 cout<<"Employee Email: "<<personEmail<<endl;
 cout<<"Employee Gender: "<<personGender<<endl;
 cout<<"Employee Marital Status: "<<maritalStatus<<endl;
}
int Employee::getPolicyID(){
return policyID;
}
int Employee::getCustomerID(){
return customerID;
}
