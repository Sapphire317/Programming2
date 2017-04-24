#include <iostream>
 
int main(int argc, char** argv) {
    
    // Variable Size
    //long의 sizeof 값은 4???
    std::cout << "Problem 01" << std::endl;
    {
        short b; char ch; float f;
        std::cout << "int : "<< sizeof(int) << " short int : "<< sizeof(b) << std::endl;
        std::cout << "char : "<< sizeof(ch) << " float : "<< sizeof(f) << std::endl;
        std::cout << "double : "<< sizeof(double) << std::endl;
        std::cout << "long : "<< sizeof(long) << std::endl;
    }
    std::cout << std::endl;
    
    //Find and correct the semantic error
    //같은 이름의 변수가 존재할때 {}안에 있는 변수에 담긴 value값이 유효하다.
    //바깥쪽 scope 보다 안쪽 scope 가 더 local 함.
    std::cout << "Problem 02" << std::endl;
    int scope = 1;
    {
       int scope = 2;
        std::cout << scope << std::endl;
    }
    std::cout << std::endl;
    
    //Find and correct the syntax error
    
    //Answer : name of variable can't be start with number
    //1variable -> lvariable
    std::cout << "Problem 03" << std::endl;
    {
        int lvariable = 10;
        std::cout << "location = " << &lvariable << std::endl;
        std::cout << "size = " << sizeof(lvariable) << std::endl;
        std::cout << "value = "<< lvariable << std::endl;
    }
    std::cout << std::endl;
    
    return 0;

}
