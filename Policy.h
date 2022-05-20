//K Jayasinghe IT21249716 MLB_11.01_HealthInsurance

#include<iostream>
#include <cstring>
#include<string>
using namespace std;

//Policy class

class Policy: public Customer{
    protected: 
		int policyID;
        string policyCoverage;
        string policyDescription;

    public:
        void displayPolicyDetails();
        void setPolicy(int pPolicyID,int pCustomerID, string pPolicyCover, string pPolicyDes)
        {
            customerID=pCustomerID;
            policyID=pPolicyID;
            policyCoverage=pPolicyCover;
            policyDescription=pPolicyDes;
        }
};
