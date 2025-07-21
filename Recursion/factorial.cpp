#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==1)
    return 1;
    
    int result = n*factorial(n-1);
    return result;
}
int main() {
    int n= 10;
    cout<<factorial(n);
    
    return 0;
}