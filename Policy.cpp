//K Jayasinghe IT21249716 MLB_11.01_HealthInsurance

#include<iostream>
#include <cstring>
#include<string>
#include "Policy.h"
using namespace std;

void Policy::displayPolicyDetails(){
    cout<<"Policy ID: "<<policyID<<endl;
    cout<<"CustomerID: "<<customerID<<endl;
    cout<<"Policy Description: "<<policyDescription<<endl;
    cout<<"Policy Coverage: "<<policyCoverage<<endl;
};
