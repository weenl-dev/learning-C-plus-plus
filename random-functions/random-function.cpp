#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string i;
    cout<<"Press the dice: ";
    cin>>i; cout<<endl;
    
    srand(time(0));
    cout<<(rand()%6)+1;

    return 0;
}