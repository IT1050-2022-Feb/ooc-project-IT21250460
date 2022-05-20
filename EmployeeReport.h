//De Silva Y. S. I IT21250460  MLB_11.01_HealthInsurance

#include<iostream>
#include<cstring>
#include<string>

class EmployeeReport: public Employee {
	private:
		int EReport_id;
		char EReportDescription[300];
		char EReportDate[30];
	public:
		EmployeeReport();
		EmployeeReport(int ER_id,char ER_description[], char ER_date[]);
		void dispalyEmpReportDetails();
		int getReportid();
		~EmployeeReport();
};