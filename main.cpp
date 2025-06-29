/* Finnish Word Game
 * main.cpp
 *
 * Description:
 *  A simple word game to help learn Finnish vocabulary.
 *  The game is a quiz-type game where you need to find
 *  the correct translation of the given word. The words
 *  are obtained from https://1000mostcommonwords.com.
 *
 * Author : Kaan Pide
 * Created: 26.06.2025
 */

#include "WordGame.h"
#include <iostream>

using namespace std;

int main()
{
    WordGame game;

    // Main game loop
    char input;
    while (toupper(input) != 'Q') {
        game.askQuestion();

        char ans;
        cin >> ans;
        game.checkAnswer(ans);

        cout << "Type (q) if you want to quit: ";
        cin >> input;
    }


    return 0;
}
