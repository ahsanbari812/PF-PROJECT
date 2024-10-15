#include <iostream>
#include <string>
using namespace std;

class ValidateString {
    string text; 

public:
   
    ValidateString(string text) {
        this->text = text; 
    }

    // constant functions are only read only functions,making function constant means now you cannot modify the member if one do this then this will show error.
    // if we donot make it constant then we can change the string input
    bool checkString() const {
        for (int i = 0; i < text.length(); i++) {
            if (!((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))) {
                return false; 
            }   
        }
        return true; 
    }

    string gettext() const {
        return text;
    }
};
int main() {

    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
  
    ValidateString str1("MahnoorHussain");
    ValidateString str2("FastNuces");
    ValidateString str3("Semester3");
    
    cout << "String: " << str1.gettext() << " is " << (str1.checkString() ? "valid" : "invalid") << endl;
    cout << "String: " << str2.gettext() << " is " << (str2.checkString() ? "valid" : "invalid") << endl;
    cout << "String: " << str3.gettext() << " is " << (str3.checkString() ? "valid" : "invalid") << endl;
    
}


