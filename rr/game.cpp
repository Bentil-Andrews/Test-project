#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    string words[] = {"computer", "engineer", "electric", "program", "science"};
    int size = 5;

    // Random seed
    srand(time(0));

    // Pick random word
    string original = words[rand() % size];
    string scrambled = original;

    // Scramble the word
    random_shuffle(scrambled.begin(), scrambled.end());

    cout << "?? WORD SCRAMBLE PUZZLE ??\n";
    cout << "Unscramble the word below:\n\n";
    cout << "Scrambled word: " << scrambled << endl;

    string guess;
    cout << "\nYour answer: ";
    cin >> guess;

    if (guess == original) {
        cout << "?? Correct! Well done.\n";
    } else {
        cout << "? Wrong! The correct word was: " << original << endl;
    }

    return 0;
}

