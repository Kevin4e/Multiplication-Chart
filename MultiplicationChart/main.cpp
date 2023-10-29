#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "------- Project by Kevin4e -------" << endl;
    cout << "" << endl;
    while (true)
    {
     int c, d;
     cout << "Welcome to the Multiplication Chart!" << endl;
     cout << "" << endl;
     cout << "Choose:" << endl;
     cout << "1. 10x10 Chart" << endl;
     cout << "2. 100x100 Chart" << endl;
     cout << "3. 1000x1000 Chart" << endl;
     cout << "0. Restart" << endl;
     cout << "" << endl;
     cout << "Enter your choice (1, 2, 3, or 0):" << endl;
     cout << "" << endl;

     srand(static_cast<unsigned int>(time(nullptr)));

     cin >> c;

     if (c == 0)
     {
      cout << "" << endl;
      continue;
     }

     else if (c == 1)
     {
      cout << "" << endl;
      cout << "Let's start!" << endl;
      cout << "" << endl;
      while (true)
      {
       int a = rand() % 10 + 1;
       int b = rand() % 10 + 1;

       string risultato = to_string(a) + "x" + to_string(b);

       cout << risultato << endl;

       cin >> d;

       if (d == 0)
       {
        cout << "" << endl;
        break;
       }
       else if (d == a*b)
       {
        cout << "Correct!" << endl;
        cout << "" << endl;
       }
       else
       {
        cout << "Wrong! The correct answer is: " << a*b << endl;
        cout << "" << endl;
       }
      }
     }
     else if (c == 2)
     {
      cout << "" << endl;
      cout << "Let's start!" << endl;
      cout << "" << endl;
      while (true)
      {
       int a = rand() % 100 + 1;
       int b = rand() % 100 + 1;

       string risultato = to_string(a) + "x" + to_string(b);

       cout << risultato << endl;

       cin >> d;

       if (d == 0)
       {
        break;
       }
       else if (d == a*b)
       {
        cout << "Correct!" << endl;
        cout << "" << endl;
       }
       else
       {
        cout << "Wrong! The correct answer is: " << a*b << endl;
        cout << "" << endl;
       }
      }
     }
     else if (c == 3)
     {
      cout << "" << endl;
      cout << "Let's start!" << endl;
      cout << "" << endl;
      while (true)
      {
       int a = rand() % 1000 + 1;
       int b = rand() % 1000 + 1;

       string risultato = to_string(a) + "x" + to_string(b);

       cout << risultato << endl;

       cin >> d;

       if (d == 0)
       {
        break;
       }
       else if (d == a*b)
       {
        cout << "Correct!" << endl;
        cout << "" << endl;
       }
       else
       {
        cout << "Wrong! The correct answer is: " << a*b << endl;
        cout << "" << endl;
       }
      }
     }
     else if (c != 0 && c != 1 && c != 2 && c != 3)
     {
      cout << "" << endl;
      cout << "Please, insert 1, 2, 3, or 0. Other numbers aren't allowed!" << endl;
      cout << "" << endl;
     }
    }
    return 0;
}
