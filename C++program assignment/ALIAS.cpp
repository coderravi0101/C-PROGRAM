#include<iostream>

using namespace std;

namespace prateek_jain
   {
    int x;
}
namespace pj=prateek_jain;

int main()
{
    cout<<pj::x;
    return 0;
}
