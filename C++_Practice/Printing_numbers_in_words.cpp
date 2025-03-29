#include <iostream>
using namespace std;
main()
{
    // Print Numbers in Words
    int num, dc = 1;
    cout << "Please enter a number: ";
    cin >> num;

    // Finding number of digits in a number
    for (int i = num; i > 9; i /= 10)
    {
        dc++;
    }

    // Storing individual digits of a number in digit[dc];
    int digits[dc];
    int numT = num;
    for (int i = dc - 1; i >= 0; i--)
    {
        digits[i] = numT % 10;
        numT /= 10;
    }
    // Storing words for numbers in list[10][9]
    string list[10][9] = {
        {"Zero", "", "", "", "", "", "", "", ""},
        {"One", "Ten", "One Hundred", "One Thousand", "Ten Thousand", "One Lac", "Ten Lac", "One Crore", "Ten Crore"},
        {"Two", "Twenty", "Two Hundred", "Two Thousand", "Twenty Thousand", "Two Lac", "Twenty Lac", "Two Crore", "Twenty Crore"},
        {"Three", "Thirty", "Three Hundred", "Three Thousand", "Thirty Thousand", "Three Lac", "Thirty Lac", "Three Crore", "Thirty Crore"},
        {"Four", "Fourty", "Four Hundred", "Four Thousand", "Fourty Thousand", "Four Lac", "Fourty Lac", "Four Crore", "Fourty Crore"},
        {"Five", "Fifty", "Five Hundred", "Five Thousand", "Fifty Thousand", "Five Lac", "Fifty Lac", "Five Crore", "Fifty Crore"},
        {"Six", "Sixty", "Six Hundred", "Six Thousand", "Sixty Thousand", "Six Lac", "Sixty Lac", "Six Crore", "Sixty Crore"},
        {"Seven", "Seventy", "Seven Hundred", "Seven Thousand", "Seventy Thousand", "Seven Lac", "Seventy Lac", "Seven Crore", "Seventy Crore"},
        {"Eight", "Eighty", "Eight Hundred", "Eight Thousand", "Eighty Thousand", "Eight Lac", "Eighty Lac", "Eight Crore", "Eighty Crore"},
        {"Nine", "Ninty", "Nine Hundred", "Nine Thousand", "Ninty Thousand", "Nine Lac", "Ninty Lac", "Nine Crore", "Ninty Crore"}};

    // storing words for digits in num in words[dc]

    int j = dc - 1;
    int i = 0;
    string words[dc];
    while (j >= 0)
    {
        switch (digits[j])
        {
        case 0:

            if (i == 3 || i == 5 || i == 7 && digits[j - 1] != 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (digits[j - 1] == k)
                    {
                        words[j] = list[k][1] + list[0][i];
                        words[j - 1] = "A";
                        cout << "Second ";
                    }
                }
            }
            if (words[j] != "A")
            {

                words[j] = list[0][i];
                cout << "First ";
            }
            cout << "0" << endl;
            break;
        case 1:

            if (i == 3 || i == 5 || i == 7 && digits[j - 1] != 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (digits[j - 1] == k)
                    {
                        words[j] = list[k][1] + list[1][i];
                        words[j - 1] = "A";
                        cout << "Second ";
                    }
                }
            }
            if (words[j] != "A")
            {

                words[j] = list[1][i];
                cout << "First ";
            }
            cout << "1" << endl;
            break;
        case 2:

            if (i == 3 || i == 5 || i == 7 && digits[j - 1] != 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (digits[j - 1] == k)
                    {
                        words[j] = list[k][1] + list[2][i];
                        words[j - 1] = "A";
                        cout << "Second ";
                    }
                }
            }
            if (words[j] != "A")
            {

                words[j] = list[2][i];
                cout << "First ";
            }
            cout << "2" << endl;
            break;
        case 3:

            if (i == 3 || i == 5 || i == 7 && digits[j - 1] != 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (digits[j - 1] == k)
                    {
                        words[j] = list[k][1] + list[3][i];
                        // words[j - 1] = "A";
                        cout << "Second ";
                    }
                }
            }
            if (words[j] != "A")
            {

                words[j] = list[3][i];
                cout << "First ";
            }
            cout << "3" << endl;
            break;
        case 4:

            if (i == 3 || i == 5 || i == 7 && digits[j - 1] != 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (digits[j - 1] == k)
                    {
                        words[j] = list[k][1] + list[4][i];
                        words[j - 1] = "A";
                        cout << "Second ";
                    }
                }
            }
            if (words[j] != "A")
            {

                words[j] = list[4][i];
                cout << "First ";
            }
            cout << "4" << endl;
            break;
        case 5:

            if (i == 3 || i == 5 || i == 7 && digits[j - 1] != 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (digits[j - 1] == k)
                    {
                        words[j] = list[k][1] + list[5][i];
                        words[j - 1] = "A";
                        cout << "Second ";
                    }
                }
            }
            if (words[j] != "A")
            {

                words[j] = list[5][i];
                cout << "First ";
            }
            cout << "5" << endl;
            break;
        case 6:

            if (i == 3 || i == 5 || i == 7 && digits[j - 1] != 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (digits[j - 1] == k)
                    {
                        words[j] = list[k][1] + list[6][i];
                        words[j - 1] = "A";
                        cout << "Second ";
                    }
                }
            }
            if (words[j] != "A")
            {

                words[j] = list[6][i];
                cout << "First ";
            }
            cout << "6" << endl;
            break;
        case 7:

            if (i == 3 || i == 5 || i == 7 && digits[j - 1] != 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (digits[j - 1] == k)
                    {
                        words[j] = list[k][1] + list[7][i];
                        words[j - 1] = "A";
                        cout << "Second ";
                    }
                }
            }
            if (words[j] != "A")
            {

                words[j] = list[7][i];
                cout << "First ";
            }
            cout << "7" << endl;
            break;
        case 8:

            if (i == 3 || i == 5 || i == 7 && digits[j - 1] != 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (digits[j - 1] == k)
                    {
                        words[j] = list[k][1] + list[8][i];
                        words[j - 1] = "A";
                        cout << "Second ";
                    }
                }
            }
            if (words[j] != "A")
            {

                words[j] = list[8][i];
                cout << "First ";
            }
            cout << "8" << endl;
            break;
        case 9:

            if (i == 3 || i == 5 || i == 7 && digits[j - 1] != 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (digits[j - 1] == k)
                    {
                        words[j] = list[k][1] + list[9][i];
                        words[j - 1] = "A";
                        cout << "Second ";
                    }
                }
            }
            if (words[j] != "A")
            {

                words[j] = list[9][i];
                cout << "First ";
            }
            cout << "9" << endl;
            break;

        default:
            break;
        }

        if (i <= 9)
        {
            i++;
        }
        j--;
    }
    for (int i = 0; i < dc; i++)
    {
        cout << words[i] << " ";
    }
}