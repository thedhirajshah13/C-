#include <iostream>
using namespace std;

class Products
{
protected:
    int ProdId;
    int Price;
    string name;

public:
    Products(int id, int p, string name)
    {
        this->ProdId = id;
        this->Price = p;
        this->name = name;
    }

    int amount()
    {
        return this->Price;
    }
};

class Electronics : public Products
{
public:
    Electronics(int id, int price, string name) : Products(id, price, name) {};
};
class Mobile : public Electronics
{
public:
    Mobile(int id, int price, string name) : Electronics(id, price, name) {};
};
class Laptop : public Electronics{
    public:
    Laptop(int id, int price, string name):Electronics(id,price,name){};
};

class HomeAppliances : public Products{
  public:
  HomeAppliances(int id, int price, string name):Products(id,price,name){};
};
class Refregirator : public HomeAppliances{
    public:
    Refregirator(int id, int price, string name):HomeAppliances(id,price, name){};
};
class MicroWave : public HomeAppliances{
    public:
    MicroWave(int id, int price, string name):HomeAppliances(id, price, name){};

};


int main()
{  
    Laptop l1(1,100,"hp");
    Mobile m1(2,50,"oppo");
    Refregirator r1(3,150,"lg");
    MicroWave w1(4,200,"samsung");

    int sum=l1.amount()+m1.amount() + r1.amount() + w1.amount();
    cout<<sum;
    return 0;
}