#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int ch, floor, room;
    string name[10][20];
    int FloorRoom[10][20] = {};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            name[i][j] = "Not Booked";
        }
    }
    for (;;)
    {
        cout << "Enter Your Choice= " << endl
             << "1-To Book The Room " << endl
             << "2-To display the Booked Room of the Hotel " << endl
             << "3-To display the Empty Rooms of the Hotel " << endl
             << "4-ReEnter the values to Book New Room" << endl
             << "5-Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            string name1;
            cout << "Enter Your Name ";
            cin.ignore();
           getline(cin,name1);
          // cin>>name1;
            cout << "Enter Floor Number= ";
            cin >> floor;
            cout << "Enter Room Number= ";
            cin >> room;
            if (name[floor][room] == "Not Booked")
            {
                FloorRoom[floor][room];
                name[floor][room] = name1;
                cout << "Room No. " << room << " of the Floor No. " << floor << " is booked for " << name1 << endl;
            }
            else
            {
                cout << "Try Again! " << endl;
            }
            break;
        }
        case 2:
        {
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 20; j++)
                {
                    if (name[i][j] != "Not Booked")
                    {
                        cout << "Room No. " << j << " of the Floor No. " << i << " is booked for " << name[i][j] << endl;
                    }
                }
            }
            break;
        }
        case 3:
        {
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 20; j++)
                {
                    if (name[i][j] == "Not Booked")
                    {
                        cout << "Room No. " << j << " of the Floor No. " << i << endl;
                    }
                }
            }
            break;
        }
        case 4:
        {
            break;
        }
        default:
        {
            exit(0);
        }
        }
        if (ch > 4)
            break;
    }
}
