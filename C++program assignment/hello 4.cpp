
//YADI HUMKO GLOBAL KOUSE KERNA HAI TB HUM COUT<<::X; ES TYPE SE LEKHTE HAI
#include<iostream>
using namespace std;
namespace A
{
    int x;//namespace variable
}
int x=10;//global variable
//using namespace A;
int main()
{
    using namespace A;
int x=5;//local variable //yadi esko coment line bna de to x=10 print hoga.
cout<<A::x;
return 0;
}
// NOTE: Yadi local aur global dono variable aa rhe hai to hum sabse jyda priority local  ko denge fer global ko
//yadi local variable nhi melta ahi to global variable ko use kea jyega


