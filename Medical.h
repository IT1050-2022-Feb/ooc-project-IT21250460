//K Jayasinghe IT21249716 MLB_11.01_HealthInsurance

#include<iostream>
#include <cstring>
#include<string>
using namespace std;

//Medical class

class Medical:public Employee{
    protected:
        int diseaseID;
        string diseaseDescription;
        string startDate;
        string endDate;

    public:
        Medical();
        Medical(int pdiseaseID, string pdiseaseDes, string pstartDate, string pendDate);
        void setCustomerID(int pcustomerID);
        void displayMedical();
};

