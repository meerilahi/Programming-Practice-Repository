#include<iostream>
using namespace std;

class Complex
{
	private:
		int Real;
		int Imaginary;
	
	public:
		Complex()
		{
			Real = 0;
			Imaginary = 0;
		}
		Complex(int real, int imaginary)
		{
			Real = real;
			Imaginary = imaginary;
		};
		void get()
		{
			cin >> Real >> Imaginary;
		};
		void show()
		{
			if(Imaginary >= 0)
			{
				cout << Real << " + " << Imaginary << "i" << endl;	
			}
			else
			{
				cout << Real << Imaginary << "i" << endl;
			}
		};
		Complex operator +(Complex Z)
		{
			Complex Ztemp;
			
				Ztemp.Real = Real + Z.Real;
				Ztemp.Imaginary = Imaginary + Z.Imaginary;
				return Ztemp; 
			
		};
		Complex operator -(Complex Z)
		{
			Complex Ztemp;
			
				Ztemp.Real = Real - Z.Real;
				Ztemp.Imaginary = Imaginary - Z.Imaginary;
				return Ztemp; 
			
		};
		Complex operator *(Complex Z)
		{
			Complex Ztemp;
			Ztemp.Real = (Real*Z.Real) + (Imaginary * Z.Imaginary*-1);
			Ztemp.Imaginary = (Real*Z.Imaginary) + (Imaginary * Z.Real);
			return Ztemp;
		};
};
main()
{
	Complex Z1,Z2,Z3;
	char opr;
	cout << "Enter First Complex Number\n";
	Z1.get();
	cout << "Enter Operator\n";
	cin >> opr;
	cout << "Enter Second Complex Number\n";
	Z2.get();
	
	switch(opr)
	{
		case '+':
			Z3 = Z1 + Z2;
			break;
		case '-':
			Z3 = Z1 - Z2;
			break;
		case '*':
			Z3 = Z1 * Z2;
			break;
		default:
			cout << "Invalid Operator\n";
			break;
	}
	cout << "Result\n";
	Z3.show();	
}
