#include <iostream>
#include <string>
#include <cstdlib>
//
using namespace std;

int main()
{

    string name;
    cout << "Write your name here: " << endl;
    cin >> name;
    cout << "Hello " << name << "! Let's get started!" << endl;


    char answer;//A, B, C, D;// answerTwo, answerThree, answerFour, answerFive;
    int mark;


    // I still use sample question from desyanwar8.blogspot.id
    cout << "What's your favorite among these colors?"<<endl;
    cout << "a. Red  b. Blue  c. Black  d. White"<<endl;
    cin >> answer;
        switch (answer)
        {
            case 'a': //answer == A;
                    mark += 3;
                    break;
            case 'b': //answer == B;
                    mark += 2;
                    break;
            case 'c': //answer == C;
                    mark += 1;
                    break;
            case 'd': //answer == D;
                    mark += 0;
                    break;
        }

    cout << "What's your least favorite song genres among of these?"<<endl;
    cout << "a. Rock  b. Jazz  c. Pop  d. Dangdut"<<endl;
    cin >> answer;
        switch (answer)
        {
            case 'a': //answer == A;
                    mark += 3;
                    break;
            case 'b': //answer == B;
                    mark += 2;
                    break;
            case 'c': //answer == C;
                    mark += 1;
                    break;
            case 'd': //answer == D;
                    mark += 0;
                    break;
        }

    cout << "What's your favorite among these Indonesian president?"<<endl;
    cout << "a. Soekarno  b. Habibie  c. Soeharto  d. SBY"<<endl;
    cin >> answer;
        switch (answer)
        {
            case 'a': //answer == A;
                    mark += 3;
                    break;
            case 'b': //answer == B;
                    mark += 2;
                    break;
            case 'c': //answer == C;
                    mark += 1;
                    break;
            case 'd': //answer == D;
                    mark += 0;
                    break;
        }

    cout << "Which fruit is the most delicious for you?"<<endl;
    cout << "a. Strawberry  b. Grape  c. Apel  d. Orange"<<endl;
    cin >> answer;
        switch (answer)
        {
            case 'a': //answer == A;
                    mark += 3;
                    break;
            case 'b': //answer == B;
                    mark += 2;
                    break;
            case 'c': //answer == C;
                    mark += 1;
                    break;
            case 'd': //answer == D;
                    mark += 0;
                    break;
        }

    cout << "What's your most favorite place?"<<endl;
    cout << "a. House  b. Cafe  c. Mall  d. Park"<<endl;
    cin >> answer;
        switch (answer)
        {
            case 'a': //answer == A;
                    mark += 3;
                    break;
            case 'b': //answer == B;
                    mark += 2;
                    break;
            case 'c': //answer == C;
                    mark += 1;
                    break;
            case 'd': //answer == D;
                    mark += 0;
                    break;
        }



    //totalAnswers = answerOne + answerTwo + answerThree + answerFour + answerFive;

    if (mark >= 0 & 5 >= mark)
    {
        cout << "naif";
    }

   if (mark >= 6 & 10 >= mark)
    {
        cout << "agak penghasut lol";
    }

   if (mark >= 11 & 15 >= mark)
    {
        cout << "sangat bersemangat";
    }
    return 0;
}
