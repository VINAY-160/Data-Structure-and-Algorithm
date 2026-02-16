#include <iostream>
using namespace std;


int factorial(int fact ,int n){

    if(n==1){
        return fact;
    }

    return factorial(fact*n,n-1);

}
int main(){

    cout<<factorial(1,5);

    return 0;
}
