//#define CATCH_CONFIG_MAIN
//#include "test/catch.hpp"

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int counter =5;
    cout<<"receiver start"<<endl;
    while(counter--)
    {
        string str;
        getline(cin, str);
        cout<<str<<endl;
    }
    cout<<"receiver end"<<endl;
    return 0;
}
