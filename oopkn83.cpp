#include <iostream>

using namespace std;

class Product
{
char * productName;
int expireDays;
int fatsPercentage;
bool isEdible;
double price;

public:
    Product()
    {
        productName = "";
        expireDays = 0;
        fatsPercentage = 0;
        isEdible = true;
        price = 0;
    }

    Product(char* pn, int ed, int fp, bool ie, double p)
    {
        productName = pn;
        expireDays = ed;
        fatsPercentage = fp;
        isEdible = ie;
        price = p;
    }

    void setProductName(char* prodName)
    {
        this -> productName = prodName;
    }
    void setExpireDate(int xprDays)
    {
        this -> expireDays = xprDays;
    }
    void setFatsPercentage(int fatsPerCntg)
    {
        this -> fatsPercentage = fatsPerCntg;
    }
    void setIsEdible(bool edible)
    {
        this -> isEdible = edible;
    }
    void setPrice(double newPrice)
    {
        this -> price = newPrice;
    }

    char* getProductName() const
    {
        return this -> productName;
    }
    int getExpireDate() const
    {
        return this -> expireDays;
    }
    int getFatsPercentage() const
    {
        return this -> fatsPercentage;
    }
    bool getIsEdible() const
    {
        return this -> isEdible;
    }
    double getPrice() const
    {
        return this -> price;
    }
};

class Store
{
    int productsAmount;
    Product* products;
    double revenue;
public:
    Store()
    {
        this -> productsAmount = 0;
        this -> products = NULL;
        this -> revenue = 0;
    }

    Store(int pa, Product* p, int r)
    {
        this -> productsAmount = pa;
        this -> products = p;
        this -> revenue = r;
    }

    void setProductsAmount(int prodAmnt)
    {
        this -> productsAmount = prodAmnt;
    }
    void setProducts(Product* p)
    {
        this -> products = p;
        this -> productsAmount = SizeOfArray(p)//write function
    }
    void setRevenue(double rvnew)
    {
        this -> revenue = rvnew;
    }

    int getProductsAmount() const
    {
        return this -> productsAmount;
    }
    Product* getProducts() const
    {
        return this -> products;
    }
    double getRevenue() const
    {
        return this -> revenue;
    }

    Product* FindByName(char* searchedProductName)
    {
        for(int index = 0; index < this->productsAmount; index++)//write method for comparing/use one if available
            //also finish the method
    }
};


int main()
{
    Product prod ("Chushka",15,11,true,2.5);
    cout << prod.getProductName();
    prod.setPrice(2.49);
    cout << prod.getPrice();

    return 0;
}
