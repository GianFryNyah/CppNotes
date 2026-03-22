#include <iostream>

// It provide a solution for preventing name conflicts
// on large projects.
// It allows for identically named objects/entities
// as long as the namespaces are different.

namespace global {
    int x = 9;
}

namespace specific {
    int x = 99;
}

int main(void) {
    using std::cout; using std::endl; // safer option than using " using namespace std "
    using std::string;

    using namespace global;

    cout << "Global value: " << x << endl; // we will use the local version of x
    cout <<  "Specifical value: " << specific::x << endl; // :: is called "scope resolution operator"

    return 0;
}