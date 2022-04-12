#include <iostream>         //std::cout
#include <new>              //std::bad_Alloc
using namespace std;

int main()
{
    try
    {
        int* myarray= new int[100000000000000000000000];
        cout<<"Hello KLETech\n";
    }
    catch(bad_alloc &ba)
    {
        cerr<<"bad_alloc caught: "<<ba.what()<<'\n';
    }
    return 0;
}
