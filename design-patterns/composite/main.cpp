
#include "Product.h"
#include "Box.h"

#include <vector>
#include <iostream>

int main() {
    Product* p1 = new Product("Iphone", 800);
    Product* p2 = new Product("Airpods", 250);
    Product* p3 = new Product("Apple Watch", 400);
    Product* p4 = new Product("Mac Book", 2500);

    Box* b1 = new Box(std::vector<Totalable*>{p2, p3});
    Box* b2 = new Box(std::vector<Totalable*>{p1, b1});
    Box* b3 = new Box(std::vector<Totalable*>{p4, b2});

    std::cout << b3->getTotal() << std::endl;

    return 0;
}