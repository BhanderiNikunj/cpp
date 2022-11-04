#include<iostream>
using namespace std;
class Railway
{
    private :
        int Train_Number;
        char Train_Name[1000] , Destination[1000] , Train_Time[1000];

    public :
    void Input()
    {
        cout << "enter the train number := ";
        cin >> Train_Number;

        cout << "enter the train name := ";
        cin >> Train_Name;

        cout << "enter the Destination := ";
        cin >> Destination;

        cout << "enter the train time := ";
        cin >> Train_Time;
    }

    void Output(int n)
    {
        if(n == Train_Number)
        {
            cout << endl << endl;
            cout << "train number is := " << Train_Number << endl;
            cout << "train name is := " << Train_Name << endl;
            cout << "Destination is := " << Destination << endl;
            cout << "train time is := " << Train_Time << endl;
        }
    }
};

int main()
{
    Railway r1[100];
    int i,n;

    for(i=0;i<3;i++)
    {
        r1[i].Input();
    }

    cout << "enter the 123 train number := ";
    cin >> n;
    r1->Output(n);
}