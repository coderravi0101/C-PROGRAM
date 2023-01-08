//more than two name space

//YADI HUMKO GLOBAL KOUSE KERNA HAI TB HUM COUT<<::X; ES TYPE SE LEKHTE HAI
#include<iostream>
using namespace std;
namespace A
{
    int x;//namespace variable
}
namespace A
{
    int y;
}
using namespace A;
int main()
{
cout<<x;
return 0;
}





