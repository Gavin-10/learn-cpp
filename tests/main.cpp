#include <iostream>

struct Node {
    Node() {
        std::cout << "creating node" << std::endl;
    }
    
    Node(Node& node) {
        std::cout << "creating copy" << std::endl;
    }
    
    ~Node() {
        std::cout << "deleting node" << std::endl;
    }
    
    int a = 0;
    int b = 0;
    Node* n = nullptr;
};

void genNode(Node* n) {
    Node sn{};
    sn.a = 10;
    sn.b = 20;
    n->n = &sn;
}

int main()
{
    Node n{};
    n.a = 3;
    n.b = 4;
    genNode(&n);
    double pi = 3.1415926535;
    std::cout << n.n->a << std::endl;
    return 0;
}