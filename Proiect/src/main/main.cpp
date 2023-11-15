#include "User.hpp"
#include "Device.hpp"
#include <iostream> 
//#include <string>

void verify_state(Device d){
  std::cout<<" device " <<d.getSN() <<" has available status [" <<d.isFree()<< "] \n"; 
}
int main(){
    char a[]  = { 'A' };
    char b[]  = { 'B' };
    char c[]  = { 'C' };
    

    Device d1(1111,0,1), d2(2222,0,2), d3(3333,0,3);
    User user1(1,a), user2(2,b), user3(3,c);

    // in case we have two users with the same name(profession) we can copy the object and modify the id;
    User user4 = user3; //User user4 = new User(user3);
    user4.setID(4);

    // a user can have multiple devices with the same type/caracteristics booked 
    Device d4 = d1;
    d4.setSN(4444);

    // copy constructor used when an obj is a parameter in a function
    verify_state(d4);
    
    Device test(1111,0,0);
    if( d1 == d2 ) std::cout<<"####### d1==d2 ########\n";
    if( d1 == test ) std::cout<<"####### d1==test #######\n";
    std::cout<<"##############\n";
    user1.printID();
    std::cout<<"##############\n";
    return 0;
}