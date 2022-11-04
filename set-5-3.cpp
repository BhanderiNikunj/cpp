#include<iostream>
#include<string.h>
using namespace std;
class Supermarket
{
    public :

    char id1[1000];
    int pass,pass1;

    void read()
    {
        int check=0,i;
        char id[100]="admin";
        pass=12345;
        cout << "enter the id and pass := ";
        cin >> id1 >> pass1;

        for(i=0;i<'\0';i++)
        {
            if(id1[i] != id[i])
            {
                check=1;
                break;
            }
        }

        if(check ==0)
        {
            if(pass1==pass)
            {
                cout<<"--------------= SuccessFull Login =------------"<<endl;
            }
            else{
                cout<<"--------------= Invalid Password =------------"<<endl;
            }
        }
        else{
            cout<<"--------------= Invalid Id =------------"<<endl; 
        }
    }
};
int main()
{
    Supermarket s1;

    s1.read();
}