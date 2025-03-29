#include <iostream>
#include <string.h>
using namespace std;

class Distance
{
    private:
    int Feet;
    int Inches;

    public:
    Distance()
    {
        Feet = 0;
        Inches = 0;
    }
    Distance(int feet, int inches)
    {
        Feet = feet;
        Inches = inches;
    }
    void set()
    {
        cout << "Enter Feet:\t";
        cin >> Feet;
        cout << "Enter Inches\t";
        cin >> Inches;
    }
    void show()
    {
        cout <<  Feet << "." << Inches << " feet" << endl;
    }
    Distance operator +(Distance A)
    {
        Distance temp;
        temp.Feet = Feet + A.Feet;
        temp.Inches = Inches + A.Inches;
        if(temp.Inches >= 12)
        {
            temp.Feet += temp.Inches / 12;
            temp.Inches %= 12;
        };
        return temp;
    }
    Distance operator -(Distance A)
    {
        Distance temp;
        temp.Feet = Feet - A.Feet;
        temp.Inches = Inches - A.Inches;
        if(temp.Inches >= 12)
        {
            temp.Feet += temp.Inches / 12;
            temp.Inches %= 12;
        };
        return temp;
    }
    Distance operator *(Distance A)
    {
        Distance temp;
        temp.Feet = Feet * A.Feet;
        temp.Inches = Inches * A.Inches;
        if(temp.Inches >= 12)
        {
            temp.Feet += temp.Inches / 12;
            temp.Inches %= 12;
        };
        return temp;
    } 
    Distance operator /(Distance A)
    {
        Distance temp;
        temp.Feet = Feet / A.Feet;
        temp.Inches = Inches / A.Inches;
        if(temp.Inches >= 12)
        {
            temp.Feet += temp.Inches / 12;
            temp.Inches %= 12;
        };
        return temp;
    }
};
main()
{
    Distance A,B,R;
    char opr;
    cout << "Enter values for first measurement\n";
    A.set();
    cout << "Enter values for second measurement\n";
    B.set();
    cout << "Enter operator:\t";
    cin >> opr;
    switch (opr)
    {
    case '+':
        R = A + B;
        break;
    case '-':
        R = A - B;
        break;
    case '*':
        R = A * B;
        break;
    case '/':
        R = A / B;
        break;
    
    default:
        cout << "Invalid operator\n";
        break;
    }
    R.show();

}