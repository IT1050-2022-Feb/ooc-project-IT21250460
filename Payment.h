//Salgado M. B. D. I IT21289934  MLB_11.01_HealthInsurance

#include<iostream>

class Payment: public Employee {
	private:
		int payment_id;
		char paymentDescription[300];
		char paymentDate[30];
		float paymentAmount;
		float paymentOverDueAmount;
	public:
		Payment();
		Payment(int p_id,char p_description[], char p_date[],float p_Amount,float p_OverDueAmount);
		void dispalyPaymentDetails();
		int getPaymentid();
		~Payment();
};
