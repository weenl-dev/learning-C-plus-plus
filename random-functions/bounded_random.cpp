#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string i;
    int r;
    cout<<"Press the dice: ";
    cin>>i; cout<<endl;
    
    for(r=1; r<=10; r+=1)
{
    cout<<67+rand()%(67-6700+1)<<endl;
}
    return 0;
}