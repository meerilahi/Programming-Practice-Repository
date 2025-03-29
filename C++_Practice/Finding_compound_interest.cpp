#include <iostream>
using namespace std;
main()
{
    // Finding compound interest 
    float saved_amount, final_amount, interest, interest_rate, years, earned_money = 0;
    cout << "Please enter how much money you want to keep in bank: ";
    cin >> saved_amount;
    cout << "Please enter annual interest rate of the bank: ";
    cin >> interest_rate;
    cout << "For how many years you want to keep money in bank: ";
    cin >> years;

    for (int i = 1; i <= years; i++)
    {
        interest = (interest_rate * saved_amount)/100;
        final_amount = saved_amount + interest;
        saved_amount = final_amount;
        earned_money += interest;
    }
    cout << "Total Amount, you will get after 40 years: " << final_amount << endl;
    cout << "Total Interests you earnd in 40 years: " << earned_money << endl; 
    
    
    
}