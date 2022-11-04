#include<iostream>
using namespace std;
class Student
{
    private :
        int roll_no , mark , fees;

    public :
    void setdata()
    {
        cout << "enter the roll no || mark || fees := ";
        cin >> roll_no >> mark >> fees;
    }

    void getdata()
    {
        cout << "roll no is := " << roll_no << endl;
        cout << "mark is := " << mark << endl;
        cout << "fees is := " << fees << endl << endl;
    }
};


int main()
{
    Student s1[10000];
    int i,n;

    cout << "enter the size of student detal := ";
    cin >> n;

    for(i=0;i<n;i++)
    {
        s1[i].setdata();
    }
    for(i=0;i<n;i++)
    {
        s1[i].getdata();
    }
}