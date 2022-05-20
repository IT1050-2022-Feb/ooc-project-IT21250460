//Salgado M. B. D. I IT21289934  MLB_11.01_HealthInsurance

#include<iostream>
#include <cstring>
#include"Payment.h"
using namespace std;

Payment::Payment(){
	payment_id=0000;
	strcpy(paymentDescription," ");
	strcpy(paymentDate," ");
	paymentAmount=0.00;
	paymentOverDueAmount=0.00;
}

Payment::Payment(int p_id,char p_description[], char p_date[],float p_Amount,float p_OverDueAmount){
	payment_id=p_id;
	strcpy(paymentDescription,p_description);
	strcpy(paymentDate,p_date);
	paymentAmount=p_Amount;
	paymentOverDueAmount=p_OverDueAmount;
}

void Payment::dispalyPaymentDetails(){
	cout<<"Customer ID: "<<customerID<<endl
    	<<"Policy id: "<<policyID<<endl
    	<<"Payment ID: "<<payment_id<<endl
    	<<"Payment Description: "<<paymentDescription<<endl
    	<<"Payment Date: "<<paymentDate<<endl
    	<<"Payment Amount:"<<setiosflags(ios::fixed)<<setprecision(2)<<paymentAmount<<endl
    	<<"Payment over due amount:"<<setiosflags(ios::fixed)<<setprecision(2)<<paymentOverDueAmount<<endl;
}

int Payment::getPaymentid(){
	return payment_id;
}

Payment::~Payment(){
	cout<<"Deleted Data"<<endl;
}