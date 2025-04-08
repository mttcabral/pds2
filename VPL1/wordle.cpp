#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string fileLine, chosenWord, guessWord, wrongGuessedLetters;
    int chosenWordNumber = 0, lineCounter = 0;
    fstream file("palavras.txt", ios::in);

    cin >> chosenWordNumber;

    // Jump first line containing the number of words in the list
    getline(file, fileLine);

    while (getline(file, fileLine))
    {
        lineCounter++;
        if (lineCounter == chosenWordNumber)
        {
            chosenWord = fileLine;
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        string guessWordFeedback = "*****";
        cin >> guessWord;

        
        for (int j = 0; j <= 4; j++)
        {
            if (chosenWord.find(guessWord[j]) == j)
            {
                guessWordFeedback[j] = guessWord[j];
            }
            else if (chosenWord.find(guessWord[j]) != string::npos)
            {
                guessWordFeedback[j] = tolower(guessWord[j]);
            }
            else if (wrongGuessedLetters.find(guessWord[j]) == string::npos)
            {
                wrongGuessedLetters += guessWord[j];
            }
        }
        
        cout << (guessWordFeedback + " (" + wrongGuessedLetters + ")") << endl;
        
        if (guessWord == chosenWord)
        {
            cout << "GANHOU!" << endl;
            break;
        }

        if (i == 4)
        {
            cout << ("PERDEU! " + chosenWord) << endl;
        }
    }

    return 0;
}