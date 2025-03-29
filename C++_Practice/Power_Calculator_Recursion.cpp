#include <iostream>
#include <math.h>
using namespace std;

int reverse_num(int num)
{
    // Find total digits in num
    int digit = (int) log10(num);
 
    // Base condition
    if(num == 0)
        return 0;
 
    return ((num%10 * pow(10, digit)) + reverse_num(num/10));  
}
main()
{
    cout << reverse_num(4523);
    
}