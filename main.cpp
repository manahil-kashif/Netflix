#include <iostream>
using namespace std;

int main() {
    int genre;
    cout << "Pick a genre: 1 Action, 2 Comedy, 3 Horror: ";
    cin >> genre;
    switch (genre) {
        case 1: cout << "The Dark Knight"; break;
        case 2: cout << "Crazy Rich Asians"; break;
        case 3: cout << "Hereditary"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
