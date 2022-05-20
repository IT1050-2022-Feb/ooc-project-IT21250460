//Salgado M. B. D. IT21289934  MLB_11.01_HealthInsurance

#include<iostream>
#include <cstring>
#include"Feedback.h"
using namespace std;

Feedback::Feedback(){
	feedback_id=0000;
	strcpy(feedbackDescription," ");
	strcpy(feedbackDate," ");
	feedbackRate=0;
}

Feedback::Feedback(int f_id,char f_description[], char f_date[],int f_rate){
	feedback_id=f_id;
	strcpy(feedbackDescription,f_description);
	strcpy(feedbackDate,f_date);
	feedbackRate=f_rate;
}

void Feedback::dispalyFeedbackDetails(){
	cout<<"Customer ID: "<<customerID<<endl
    	<<"Policy id: "<<policyID<<endl
    	<<"Feedback ID: "<<feedback_id<<endl
    	<<"Feedback Description: "<<feedbackDescription<<endl
    	<<"Feedback Date: "<<feedbackDate<<endl
    	<<"Feedback Rate:"<<feedbackRate<<endl;
}

int Feedback::getFeedbackid(){
	return feedback_id;
}

Feedback::~Feedback(){
	cout<<"Deleted Data"<<endl;
}