//Salgado M. B. D. IT21289934  MLB_11.01_HealthInsurance

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Feedback: public Employee {
	private:
		int feedback_id;
		char feedbackDescription[300];
		char feedbackDate[30];
		int feedbackRate;
	public:
		Feedback();
		Feedback(int f_id,char f_description[], char f_date[],int f_rate);
		void dispalyFeedbackDetails();
		int getFeedbackid();
		~Feedback();
};