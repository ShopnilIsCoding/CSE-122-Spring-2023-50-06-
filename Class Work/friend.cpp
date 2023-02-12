#include<iostream>
#include<string>
using namespace std;
class trafford
{
private:
    string player;
    int goal,manager;
public:
    void message()
    {
        cout<<"Enter Goal count, Manager ID and Player Name : ";
    }

    void calculation()
    {
    cin>>goal>>manager;
    cin>>player;
    }
    friend int value(trafford &obj);

};
int value(trafford &obj)
{
 int i;
        for (i=0;i<10;i++)
        {
            if(obj.goal<=50)
            {
                cout<<"manchester is red\n";
            }
            else
            {
                cout<<"Manchester is Blue\n";
            }
        }
        return 0;
}
int main()
{
    trafford shopnil;
    shopnil.message();
    shopnil.calculation();
    value(shopnil);
    return 0;
}
