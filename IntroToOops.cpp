#include <iostream>
using namespace std;
// Using class we can create an user defined variable
class Intro{ 
    public:// Access modifier
    int num;
};

int main() {
    Intro n;// Declaring object
    n.num = 100; // Instantiation of class
    cout << n.num << endl;

    return 0;
}



// Concept of empty class
#include <iostream>
using namespace std;

class Intro{
    public:
    int num;
};

int main() {
    Intro n;
    n.num = 100;
    cout << n.num << endl;

    return 0;
}