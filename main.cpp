#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>
#include"Person.h"
#include"Customer.h"
#include"Claim.h"
#include"EmployeeReport.h"
#include"Medical.h"
#include"Policy.h"
#include"Feedback.h"
#include"Payment.h"
#include"Employee.h"
using namespace std;

int main(){
    
    //Person
    Person p1;
    p1("Dhanushka",42,"1997/5/12","0771067701","Colombo08","dhanushka@gmail.com","Male","Married");
    p1.displayPersonDetails();
    cout<<endl;

    //Customer
    Customer cus1;
    cus1.setPersonalDetails("Banula",42,"1975 4 13","078823912","Rajagiriya","banula@gmail.com","Male","Married");
    cus1.displayCustomerDetails();
    
    cout<<endl;

    //Employee
    Employee emp1(100,"Agent","Insurance");
    emp1.setPersonaldetails("Uvindu",21,"2001 12 11","0783158893","Colombo07","kavishka@gmail.com","Male","Single");
    cout<<endl;
    emp1.displayEmployeedetails();
    cout<<endl;
    emp1.setCustomerID(301);
    
    //Policy
    Policy po1;
    po1.setPolcy(100,11,"Full","Family");
    po1.displayPolicyDetails();
    cout<<endl;
    

    //Medical
    Medical m1(11,"Diabates","Fab","Jan");
    m1.displayMedical();
    cout<<endl;

    //Claims
	Claims c1(001,"Full Body Check-Up","2022/05/20");
	c1.dispalyClaimDetails();
	cout<<endl;
	
	//Payment
	Payment pay(001,"6th Month Renewal","2022/05/13",25000.00,2500.00);
	pay.dispalyPaymentDetails();
	cout<<endl;
	
	//Feedback
	Feedback f1(001,"Good Service","2022/05/12",10);
	f1.dispalyFeedbackDetails();
	cout<<endl;
	
	//EmployeeReport
	EmployeeReport er1(1,"Sallary incremental 10%","2022/05/12");
	er1.dispalyEmpReportDetails();
	cout<<endl;
	
	return 0;
}