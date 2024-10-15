#include <iostream>
using namespace std;

class LoanHelper {
    const float rateofinterest=0.4;
    int months;
    int loantaken;

public:
    LoanHelper(int monthsofloan,int loan){
        months=monthsofloan;
        loantaken=loan;
    }

    float calcloan() {
        return (loantaken/months) *1.4;
    }

    int getmonths() {
        return months;
    }

    int getloan(){
        return loantaken;
    }

};


int main() {
   
   cout << "NAME: MAHNOOR HUSSAIN" << endl;
   cout << "ROLL NO.: 23K-0535" << endl << endl;
   
   LoanHelper l1(12,56000);
   cout<<"You have taken loan of " << l1.getloan() <<" so you need to pay "<< l1.calcloan() <<" every month in the duration of " <<l1.getmonths() <<" months to repay your loan amount. "<<endl;
}
