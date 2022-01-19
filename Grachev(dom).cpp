

#include <iostream>
using namespace std;
int main()
{
        
    int choice,  persons;
    int chicken = 3, pig = 5;
    int salmon = 6, Sturgeon = 8;
    int rice = 2, pasta = 3;
    int water = 0, appleJuice = 1;
    unsigned int count;
    int choice1;
    cin >> count;
    while (count)
        
        {
            for (int i = 0; count >= i; count++)
            {



                cout << " __________________________" << endl;
                cout << "|___________menu___________|" << endl;
                cout << "|1.    meat                |" << endl;
                cout << "|2.    fish                |" << endl;
                cout << "|3.    garnish             |" << endl;
                cout << "|4.    beverages           |" << endl;
                cout << "|5.    exit menu           |" << endl;
                cout << "|__________________________|" << endl;

                cout << "Select item : ";  cin >> choice; cout << endl;

                switch (choice)
            case 1:
                {
                    cout << " __________________________" << endl;
                    cout << "|___________menu___________|" << endl;
                    cout << "|1.    chicken - 3$        |" << endl;
                    cout << "|2.    pig - 5$            |" << endl;
                    cout << "|3.    exit menu           |" << endl;
                    cout << "|__________________________|" << endl;
                    cout << "Select item : ";  cin >> choice1; cout << endl;
                    switch (choice1)
                    {
                    case 1:
                        cout << "you choosed - chicken. For how many persons?" << endl;
                        cin >> persons;
                        break;
                    case 2:
                        cout << "you choosed - pig. For how many persons?" << endl;
                        cin >> persons;
                        break;
                    case 3:
                        cout << "Goodbye!" << endl;
                        break;
                        return 0;
                    }
                }
                switch (choice)
            case 2:
                {
                    cout << " __________________________" << endl;
                    cout << "|___________menu___________|" << endl;
                    cout << "|1.    salmon - 6$         |" << endl;
                    cout << "|2.    Sturgeon - 8$       |" << endl;
                    cout << "|3.    exit menu           |" << endl;
                    cout << "|__________________________|" << endl;
                    cout << "Select item : ";  cin >> choice1; cout << endl;
                    switch (choice1)
                    {
                    case 1:
                        cout << "you choosed - salmon. For how many persons?" << endl;
                        cin >> persons;
                        break;
                    case 2:
                        cout << "you choosed - Sturgeon. For how many persons?" << endl;
                        cin >> persons;
                        break;
                    case 3:
                        cout << "Goodbye!" << endl;
                        break;
                        return 0;
                    }
                }
                switch (choice)
            case 3:
                {
                    cout << " __________________________" << endl;
                    cout << "|___________menu___________|" << endl;
                    cout << "|1.    rice - 2$           |" << endl;
                    cout << "|2.    pasta - 3$          |" << endl;
                    cout << "|3.    exit menu           |" << endl;
                    cout << "|__________________________|" << endl;
                    cout << "Select item : ";  cin >> choice1; cout << endl;
                    switch (choice1)
                    {
                    case 1:
                        cout << "you choosed - rice. For how many persons?" << endl;
                        cin >> persons;
                        break;
                    case 2:
                        cout << "you choosed - pasta. For how many persons?" << endl;
                        cin >> persons;
                        break;
                    case 3:
                        cout << "Goodbye!" << endl;
                        break;
                        return 0;
                    }
                }
                switch (choice)
            case 4:
                {
                    cout << " __________________________" << endl;
                    cout << "|___________menu___________|" << endl;
                    cout << "|1.    water - 0$          |" << endl;
                    cout << "|2.    apple juice - 1$    |" << endl;
                    cout << "|3.    exit menu           |" << endl;
                    cout << "|__________________________|" << endl;
                    cout << "Select item : ";  cin >> choice1; cout << endl;
                    switch (choice1)
                    {
                    case 1:
                        cout << "you choosed - water. For how many persons?" << endl;
                        cin >> persons;
                        break;
                    case 2:
                        cout << "you choosed - apple juice. For how many persons?" << endl;
                        cin >> persons;
                        break;
                    case 3:
                        cout << "Goodbye!" << endl;
                        break;
                        return 0;
                    }
                }
                switch (choice)
            case 5:
                {
                    cout << "Goodbye!" << endl;
                    break;
                    return 0;
                }
            }
    }
}

