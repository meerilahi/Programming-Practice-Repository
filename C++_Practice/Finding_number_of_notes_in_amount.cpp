#include <iostream>
using namespace std;
main()
{
    // count number of notes in given amount
    long long int amount;
    int N5000, N1000, N500, N100, N50, N20, N10, C5, C2, C1;
    cout << "Enter total amount to find maximum number of possible notes in it: ";
    cin >> amount;
    N5000 = amount / 5000;
    amount = amount % 5000;
    N1000 = amount / 1000;
    amount = amount % 1000;
    N500 = amount / 500;
    amount = amount % 500;
    N100 = amount / 100;
    amount = amount % 100;
    N50 = amount / 50;
    amount = amount % 50;
    N20 = amount / 20;
    amount = amount % 20;
    N10 = amount / 10;
    amount = amount % 10;
    C5 = amount / 5;
    amount = amount % 5;
    C2 = amount / 2;
    amount = amount % 2;
    C1 = amount;

    cout << "Five Thousand Notes:\t" << N5000 << endl;
    cout << "One Thousand Notes:\t" << N1000 << endl;
    cout << "Five Hundered Notes:\t" << N500 << endl;
    cout << "One Hundered Notes:\t" << N100 << endl;
    cout << "Fifty Notes:\t\t" << N50 << endl;
    cout << "Twenty Notes:\t\t" << N20 << endl;
    cout << "Ten Notes:\t\t" << N10 << endl;
    cout << "Five Rs Coins:\t\t" << C5 << endl;
    cout << "Two Rs Coins:\t\t" << C2 << endl;
    cout << "One Rs Coins:\t\t" << C1 << endl;
}