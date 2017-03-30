//This program was written by Joshua Ashley
//It follows the guidelines in HW 7 Problem#3

#include <iostream>

using namespace std;

class money
{
public:
    int getDollar();
    int getCent();
    double getAmmount();

    void setDollar(int);
    void setCent(int);

private:
    int Dollar;
    int Cent;
};

int main()
{
    money m1,m2;
    m1.setDollar(20);
    m1.setCent(35);
    m2.setDollar(0);
    m2.setCent(98);

    /*cout<<m1.getDollar()<<endl;
    cout<<m1.getCent()<<endl;
    cout<<m2.getDollar()<<endl;
    cout<<m2.getCent()<<endl; */

    cout<<m1.getAmmount()<<endl;
    cout<<m2.getAmmount()<<endl;

    return 0;
}


int money::getDollar()
{
    return Dollar;
}

int money::getCent()
{
    return Cent;
}

double money::getAmmount()
{
   double total;
   total = double(Dollar)+(double(Cent)/100);
   return total;
}

void money::setDollar(int dollar)
{
    Dollar=dollar;
}

void money::setCent(int cent)
{
    Cent=cent;
}
