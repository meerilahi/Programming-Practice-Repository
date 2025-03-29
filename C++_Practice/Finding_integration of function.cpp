#include <iostream>
using namespace std;
main()
{
    // Finding integration of a specific hard coded function within limits
    double upper_limit, lower_limit, step_size;
    int step_nums;
    cout << "Enter lower and upper limits of integration respectively: ";
    cin >> lower_limit >> upper_limit;
    cout << "Now enter number of steps between upper limit and lower limit: ";
    cin >> step_nums;

    // Finding step size
    step_size = (upper_limit-lower_limit)/step_nums;

    // declaring arrays for domains and ranges 
    double domain[step_nums+1], range[step_nums+1];

    // storing all inputs in domain[]
    for (int i = 0; i <= step_nums; i++)
    {
        domain[i] = lower_limit + step_size * i;
    }
    for (int i = 0; i <= step_nums; i++)
    {
        cout << domain[i] << "\t";
    }
    cout << endl;

    // storing all outputs in range[]
    for (int i = 0; i <= step_nums; i++)
    {
        range[i] = 1 / (1 + domain[i] * domain[i]);
    }
    for (int i = 0; i <= step_nums; i++)
    {
        cout << range[i] << "\t";
    }
    cout << endl;

    // Finally finding integration of all ranges stored in range[]
    double integration, tempA;
    tempA = (range[0] + range[step_nums+1]) / 2;
    for (int i = 0; i < step_nums - 1; i++)
    {
        tempA += range[i+1]; 
    }
    integration = step_size * tempA;
    cout << integration;
    
    
}