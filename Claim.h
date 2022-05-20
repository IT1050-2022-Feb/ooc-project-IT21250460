#include<iostream>
#include<cstring>
#include<string>

class Claims: public Employee {
	private:
		int claim_id;
		char claimDescription[300];
		char claimDate[30];
	public:
		Claims();
		Claims(int c_id,char c_description[], char c_date[]);
		void dispalyClaimDetails();
		int getClaimid();
		~Claims();
};