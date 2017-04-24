#include <iostream>

#include <stdlib.h>
//using namespace std; 절대 하면 안됨 : - 100점

int main(int argc, const char** argv)
{
   char buff[1000];
   
   std::cout<<"Enter the expression."<<std::endl;
   
   std::cin.getline(buff,1000);
   
   int oprnd_1= ((buff[0]-'0')*100)+((buff[1]-'0')*10)+((buff[2]-'0')*1);
   int oprnd_2= ((buff[4]-'0')*100)+((buff[5]-'0')*10)+((buff[6]-'0')*1);
   
   char opr = buff[3];
   int result = 0;
   
   switch(opr)
   {
       case '+':
       result = oprnd_1+oprnd_2;
       std::cout<<result<<std::endl;
       break;
       
       case '-':
       result = oprnd_1-oprnd_2;
       std::cout<<result<<std::endl;
       break;
       
       case '*':
       result = oprnd_1*oprnd_2;
       std::cout<<result<<std::endl;
       break;
       
       case '/':
       result = oprnd_1/oprnd_2;
       std::cout<<result<<std::endl;
       break;
   }
        
   return 0; 
}