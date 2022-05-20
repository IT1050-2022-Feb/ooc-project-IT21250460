//S.A.U.K. Suraweera IT21370182 MLB_11.01_HealthInsurance

#include<iostream>
#include <cstring>
#include<string>
using namespace std;

//Person class

class Person{
    protected:
        char personName[50];
        int personAge;
        char personDOB[10];
        char personContact[10];
        char personAddress[20];
        char personEmail[20];
        string personGender;
        string maritalStatus;
    public:
        Person();
        Person(char pPersonName[], int pPersonAge, char pPersonDOB[],char pPersonContact[],char pPersonAddress[],char pPersonEmail[],string pPersonGender,string pPersonMarital);
        
		void displayPersonDetails();

};