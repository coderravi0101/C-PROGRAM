//nested name space
#include<iostream>
using namespace std;

namespace A
{
    int x;//namespace variable
namespace B
{
    int y;
}
}
using namespace A;//esko lekho ya nhi
using namespace B;
int main()
{
cout<<x;
//cout<<B::y;
cout<<y;
return 0;
}






