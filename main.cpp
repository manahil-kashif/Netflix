// Movie Finder - inspired by Netflix
// Input: a genre number (1 to 4)
// Output: a movie suggestion
// Logic: switch statement

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Movie Finder!" << endl;
    int genre;
    cout << "Pick a genre: 1 Action, 2 Comedy, 3 Horror, 4 Romance: ";
    cin >> genre;
    switch (genre) {
        case 1: cout << "The Dark Knight"; break;
        case 2: cout << "Crazy Rich Asians"; break;
        case 3: cout << "Hereditary"; break;
        case 4: cout << "The Notebook"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
