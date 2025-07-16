#include <iostream>
using namespace std;

class Products
{
protected:
    int id;
    string name;

public:
    virtual int getPrice() {};
    Products(int id, string name)
    {
        this->id = id;
        this->name = name;
    };
};

class Book : public Products
{
    int fixedPrice;

public:
    Book(int id, string name, int price) : Products(id, name), fixedPrice(price) {};
    int getPrice() override
    {
        return fixedPrice;
    }
};

class CD : public Products
{
    string cdType;

public:
    CD(int id, string name, string type) : Products(id, name), cdType(type) {};
    int getPrice() override
    {
        if (cdType == "Audio")
        {
            return 500;
        }
        else if (cdType == "Video")
        {
            return 700;
        }
        else
        {
            return 50;
        }
    };
};

class Furniture : public Products
{
    string FName;

public:
    Furniture(int id, string name, string fName) : Products(id, name), FName(fName) {};
    int getPrice() override
    {
        if (FName == "Tabel")
        {
            return 400;
        }
        else if (FName == "Chair")
        {
            return 350;
        }
        else
        {
            return 100;
        }
    };
};

int main()
{
    Book b1(1, "C++", 200);
    CD c1(2, "cd", "Audio");
    Furniture f1(2, "Fur", "Tabel");
    Book b2(4, "Java", 250);

    int sum = b1.getPrice() + c1.getPrice() + f1.getPrice() + b2.getPrice();
    cout << sum;
    return 0;
}