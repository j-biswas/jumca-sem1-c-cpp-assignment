#include <iostream>

using namespace std;

class Fruit {
protected:
    int numFruits;

public:
    Fruit() {
        numFruits = 0;
    }

    void addFruit() {
        numFruits++;
    }

    int getNumFruits() {
        return numFruits;
    }
};

class Apples : public Fruit {
public:
    Apples() {
        numFruits = 0;
    }

    void addApple() {
        addFruit();
    }

    int getNumApples() {
        return numFruits;
    }
};

class Mangoes : public Fruit {
public:
    Mangoes() {
        numFruits = 0;
    }

    void addMango() {
        addFruit();
    }

    int getNumMangoes() {
        return numFruits;
    }
};

int main() {
    Apples apples;
    Mangoes mangoes;

    // Add some apples and mangoes to the basket
    apples.addApple();
    apples.addApple();
    apples.addApple();
    mangoes.addMango();
    mangoes.addMango();

    // Print the number of apples, mangoes, and total fruits in the basket
    cout << "Number of apples: " << apples.getNumApples() << endl;
    cout << "Number of mangoes: " << mangoes.getNumMangoes() << endl;
    cout << "Total number of fruits: " << (apples.getNumFruits() + mangoes.getNumFruits()) << endl;

    return 0;
}
