#include <iostream>
#include <string>

using namespace std;

int main(void){
    
    string S;
    string toggleString;
    cin >> S;
    
    for(int i = 0; i < S.length(); ++i){
        if(S[i] >= 'A' && S[i] <= 'Z'){
            S[i] = tolower(S[i]);
        }
        else{
            S[i] = toupper(S[i]);
        }
    }
    cout << S << endl;
    
    return 0;
}