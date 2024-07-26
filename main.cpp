#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void drawing(int draw);

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Initialize random seed

    string theword;
    int randword;
    string words[22] = {"fat", "bat", "mat", "dad", "cat", "mom", "bun", "sun", "rat", "tom", "cop",
                        "mop", "man", "hat", "red", "app", "sap", "lad", "van", "sat", "fun", "run"};

    int draw = 1;
    string ans;
    randword = rand() % 22;
    theword = words[randword];

    // This loop incorrectly overwrites the words array with 'x'
    // Commenting it out as it's unnecessary
    // for(int i = 0; i < 22; i++) {
    //     words[i] = 'x';
    // }

    cout << "\n\t\t\t\t\t\t\t\t   Welcome To Hangman\n";
    cout << "\t\t\t\t\t\t\t\t  ********************\n";
    cout << "\tThe word list is:\n\tfat\tbat\tmat\tsat\tdad\tlad\tcat\tmom\tbun\tsun\tfun\trun\trat\ttom\tcop\tmop\n\tman\tvan\that\tred\tapp\tsap\n";
    cout << "\n\tGuess the right word\n";

    while (draw <= 8)
    {
        drawing(draw);
        cout << "\n\n\tGuess the word: \n";
        cin >> ans;

        if (ans == theword)
        {
            cout << "\n\n\tCongrats!!! You guessed my word.\n\n" << endl;
            break;
        }
        else
        {
            cout << "\n\n\tTry it out again\n\n";
        }

        draw++;
    }

    if (draw > 8) {
        cout << "\tThe correct word was: " << theword << endl;
    }

    return 0;
}

void drawing(int draw)
{
    if (draw == 1)
    {
        cout << "\t_______\n\t\t |\n\t\t 0\n\t|\t/|\\\t\t\n\t|\t |\n\t|\t/ \\ \n\t|__";
    }
    else if (draw == 2)
    {
        cout << "\t_______\n\t\t |\n\t\t 0\n\t|\t/|\\\t\t\n\t|\t |\n\t|\t/  \n\t|__";
    }
    else if (draw == 3)
    {
        cout << "\t_______\n\t\t |\n\t\t 0\n\t|\t/|\\\t\t\n\t|\t |\n\t|\t  \n\t|__";
    }
    else if (draw == 4)
    {
        cout << "\t_______\n\t\t |\n\t\t 0\n\t|\t/|\\\t\t\n\t|\t |\n\t|\t\n\t|__";
    }
    else if (draw == 5)
    {
        cout << "\t_______\n\t\t |\n\t\t 0\n\t|\t/|\n\t|\t |\n\t\n\t|__";
    }
    else if (draw == 6)
    {
        cout << "\t_______\n\t\t |\n\t\t 0\n\t|\t/\t\n|\t |\n\t|\n\t|__";
    }
    else if (draw == 7)
    {
        cout << "\t_______\n\t\t |\n\t\t 0\n\t|\t\t\t\n\t|\t |\n\t|\n\t|__";
    }
    else if (draw == 8)
    {
        cout << "\t_______\n\t\t |\n\t\t  \n\t|\t\n|\t |\n\t|\n\t|__";
        cout << "\n\n\tOh no!!! You're hanged.\n\n";
        cout << "\n\tOkay, you can try once more for the sake of his soul! XD\n";
    }
}
