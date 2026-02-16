#include <iostream>
using namespace std;


void printN(int n){
    int count=1;
    if(n==0){ 
        return;
    }
    printN(n-1);
        cout<<n<<endl;

}

int main(){
    int n=10;
    printN(n);
    return 0;
}