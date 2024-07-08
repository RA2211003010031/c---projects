#include <iostream>

using namespace std;

int playquiz();

int main()
{

    char restart;

    cout << "_________________________________________________________________________" << endl;
    cout << "\n                 >------ Welcome to the QUIZ Game ------<" << endl;
    cout << "_________________________________________________________________________\n"
         << endl;

    int finalResult = playquiz();
    cout << "\n\n\n   >   YOUR SCORE = " << finalResult << "   <" << endl;

    if (finalResult >= 7)
    {

        cout << "\n   =>   YEEEE! YOU WON THE GAME   <=" << endl;
        cout << "\n\nPress 'y' to start the game again or 'n' to quit :" << endl;
        cin >> restart;
    }

    else
    {

        cout << "\n   =>  YOU LOSE !  <=" << endl;
        cout << "\n\nPress 'y' to start the game again or 'n' to quit :" << endl;
        cin >> restart;
    }

    if (restart == 'y' || restart == 'Y')
    {

        cout << endl;
        playquiz();
    }

    else
    {

        cout << "\n\n\n>---       SEE YOU AGAIN SOON!     ---<\nBYE BYE\n\n"
             << endl;
        return 0;
    }
}

int playquiz()
{

    char startGame;
    int score = 0, answer;

startAgain:
    cout << " >       RULES AND REGULATIONS       <";
    cout << "\n         _____________________\n\n"
         << endl;
    cout << "1. Only one option to choose from the listed options." << endl;
    cout << "2. No negative marking for wrong answers." << endl;
    cout << "3. For each correct answer, 1 marks will be awarded!" << endl;
    cout << "4. Passing score is GREATER OR EQUAL TO 7." << endl;

    cout << "\n>    Press 's' to Start the Game :   <" << endl;
    cin >> startGame;
    cout << "\n";

    if (startGame == 's' || startGame == 'S')
    {

        cout << "Q1.  Press 1 :" << endl;
        cout << "(1) 1    (2) 2   (3) 3   (4) 4 " << endl;
        cin >> answer;
        cout<<endl;

        if (answer == 1)
        {
            score += 1;
        }

        cout << "Q2.  Press 1 :" << endl;
        cout << "(1) 1    (2) 2   (3) 3   (4) 4 " << endl;
        cin >> answer;
        cout<<endl;

        if (answer == 1)
        {
            score += 1;
        }

        cout << "Q3.  Press 1 :" << endl;
        cout << "(1) 1    (2) 2   (3) 3   (4) 4 " << endl;
        cin >> answer;
        cout<<endl;

        if (answer == 1)
        {
            score += 1;
        }

        cout << "Q4.  Press 1 :" << endl;
        cout << "(1) 1    (2) 2   (3) 3   (4) 4 " << endl;
        cin >> answer;
        cout<<endl;

        if (answer == 1)
        {
            score += 1;
        }

        cout << "Q5.  Press 1 :" << endl;
        cout << "(1) 1    (2) 2   (3) 3   (4) 4 " << endl;
        cin >> answer;
        cout<<endl;

        if (answer == 1)
        {
            score += 1;
        }

        cout << "Q6.  Press 1 :" << endl;
        cout << "(1) 1    (2) 2   (3) 3   (4) 4 " << endl;
        cin >> answer;
        cout<<endl;

        if (answer == 1)
        {
            score += 1;
        }

        cout << "Q7.  Press 1 :" << endl;
        cout << "(1) 1    (2) 2   (3) 3   (4) 4 " << endl;
        cin >> answer;
        cout<<endl;

        if (answer == 1)
        {
            score += 1;
        }

        cout << "Q8.  Press 1 :" << endl;
        cout << "(1) 1    (2) 2   (3) 3   (4) 4 " << endl;
        cin >> answer;
        cout<<endl;

        if (answer == 1)
        {
            score += 1;
        }

        cout << "Q9.  Press 1 :" << endl;
        cout << "(1) 1    (2) 2   (3) 3   (4) 4 " << endl;
        cin >> answer;
        cout<<endl;

        if (answer == 1)
        {
            score += 1;
        }

        cout << "Q10.  Press 1 :" << endl;
        cout << "(1) 1    (2) 2   (3) 3   (4) 4 " << endl;
        cin >> answer;
        cout<<endl;

        if (answer == 1)
        {
            score += 1;
        }

        return score;
    }

    else
    {

        cout << "-----------------------------------\n";
        cout << "PLEASE PRESS 'S' TO START THE GAME !";
        cout << "\n-----------------------------------\n\n"
             << endl;

        goto startAgain;
    }
}