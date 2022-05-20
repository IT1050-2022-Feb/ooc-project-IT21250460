//De Silva Y. S. I IT21250460  MLB_11.01_HealthInsurance

#include<iostream>
#include<cstring>
#include<string>
#include "EmployeeReport.h"

EmployeeReport::EmployeeReport(){
	EReport_id=0000;
	strcpy(EReportDescription," ");
	strcpy(EReportDate," ");
}

EmployeeReport::EmployeeReport(int ER_id,char ER_description[], char ER_date[]){
	EReport_id=ER_id;
	strcpy(EReportDescription,ER_description);
	strcpy(EReportDate,ER_date);
}

void EmployeeReport::dispalyEmpReportDetails(){
	cout<<"Employee ID: "<<employeeID<<endl
    	<<"Report ID: "<<EReport_id<<endl
    	<<"Report Description: "<<EReportDescription<<endl
    	<<"Report Date: "<<EReportDate<<endl;
}

int EmployeeReport::getReportid(){
	return EReport_id;
}

EmployeeReport::~EmployeeReport(){
	cout<<"Deleted Data"<<endl;
}