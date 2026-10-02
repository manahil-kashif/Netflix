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
        case 1: cout << "The Dark Knight - a dark and serious hero story"; break;
        case 2: cout << "Crazy Rich Asians - a fun and glamorous comedy"; break;
        case 3: cout << "Hereditary - a very scary and intense horror"; break;
        case 4: cout << "The Notebook - an emotional love story"; break;
        default: cout << "Invalid choice. Please type 1 to 4.";
    }
    char key;
    cout << "\n\nType any letter and press Enter to close: ";
    cin >> key;
    return 0;
}
