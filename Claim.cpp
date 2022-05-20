#include <iostream>
#include<cstring>
#include<string>
#include "Claim.h"

using namespace std;

Claims::Claims(){
	claim_id=0000;
	strcpy(claimDescription," ");
	strcpy(claimDate," ");
}

Claims::Claims(int c_id,char c_description[], char c_date[]){
	claim_id=c_id;
	strcpy(claimDescription,c_description);
	strcpy(claimDate,c_date);
}

void Claims::dispalyClaimDetails(){
	cout<<"Customer ID: "<<customerID<<endl
    	<<"Policy id: "<<policyID<<endl
    	<<"Claim ID: "<<claim_id<<endl
    	<<"Claim Description: "<<claimDescription<<endl
    	<<"Claim Date: "<<claimDate<<endl;
}

int Claims::getClaimid(){
	return getClaimid();
}

Claims::~Claims(){
	cout<<"Deleted Data"<<endl;
}

