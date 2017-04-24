#include <iostream>

#include <stdlib.h>
//using namespace std; 절대 하면 안됨 : - 100점

int main(int argc, const char** argv)
{
   char buff[1000];
   
   std::cout<<"Enter the expression."<<std::endl;
   
   std::cin.getline(buff,1000);
   
   //git test
        
        // char -> 숫자로 변형
        // "10" => '1' (0x31) * 10 + '0'(0x30) * 1
        // '2' => 0x32, '9' => 0x39
        std::cout << '1' - '0' << std::endl; 
        
        // string을 숫자로 변형
        std::cout << atoi(buff) + 20 << std::endl;
        
   return 0; 
}