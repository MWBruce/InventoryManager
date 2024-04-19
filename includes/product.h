#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    static int currentId; 
    int id;
    std::string name;
    double price;
    std::string description;
    int supplierId;

    Product(const std::string& name, double price, const std::string& description, int supplierId);
    std::string getName() const;
    void setName(const std::string& newName);
    double getPrice() const;
    void setPrice(double newPrice);
    std::string getDescription() const;
    void setDescription(const std::string& newDescription);
    int getSupplierId() const;
    void setSupplierId(int newSupplierId);
};

#endif 
