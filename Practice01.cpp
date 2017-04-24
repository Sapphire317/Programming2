#include <iostream>
#include<string.h>

void swap(int num1, int num2);
void swap(char str1, char str2);
void swap(double db11, double db12);

int main()
{
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;
    
    char str1 = 'A', str2 = 'Z';
    swap(&str1, &str2);
    std::cout<<str1<<' '<<str2<<std::endl;
    
    double db11 = 1.111, db12 = 5.555;
    swap(&db11, &db12);
    std::cout<<db11<<' '<<db12<<std::endl;
    return 0;
}
void swap(int* num1, int* num2)
{
    int *temp;   
    temp = num1;
    num1 = num2;
    num2 = temp;
}
void swap(const char* str1,const char* char str2)
{
    char temp = 0;
    strcpy(temp, str1);
    strcpy(str2, str1);
    strcpy(str1, temp);
}
void swap(double*db11, double* db12)
{
    double *temp;
    temp = db11;
    db11 = db12;
    db12 = temp;
}