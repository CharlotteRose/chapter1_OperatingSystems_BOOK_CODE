#include <iostream>
#include <string>

using namespace std;

int main(){

string password = "";
int attempts = 3;
bool x = true;

    while (x){
        cout << "Please enter your password."; cin >> password; cout << endl << endl;
        if (password == "AThiker"){
            x = false;
        }
        else if ( attempts == 0){
            x = false;
        }
        else{
            cout<< "you have " << attempts << " attempts left" << endl;
            --attempts;
        }
    }

return 0;
}
