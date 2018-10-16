#include <iostream>
using namespace std;
 int main(){
    
    int L; // Size of Image original image.
    int N; // Number of Images.
    int W; // Width of Image.
    int H; // Height of Image.
    
    cin >> L;
    cin >> N;
    
    for(int i = 0; i <= N; ++i){
        cin >> W >> H;
        
        if((W < L) || (H < L)){
        cout << "UPLOAD ANOTHER" << endl;
    }
        
        if(W == L && H == L){
        cout << "ACCEPTED" << endl;
    }
    
        else{ 
        cout << "CROP IT" << endl;
    }    
    
}
    
    return 0;
}