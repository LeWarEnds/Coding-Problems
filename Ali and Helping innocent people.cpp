#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string something;
    cin >> something;
    
    int something1 = something[0] + something[1];
    int something3 = something[3] + something[4];
    int something4 = something[4] + something[5];
    int something5 = something[7] + something[8];
     
    if((something[2] != 'A' && something[2] != 'E' && something[2] != 'I' && something[2] != 'O' && something[2] != 'U' && something[2] != 'Y') && (something1%2 == 0 && something3%2 == 0 && something4%2 == 0 && something5%2 == 0)){
        cout << "valid" << endl;     
    }
    else{
        cout << "invalid" << endl;
    }
    
    
    
    return 0;
}