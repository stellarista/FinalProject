#include <iostream>
#include <string>
//
using namespace std;

int main()
{

    int a = 3;
    int b = 2;
    int c = 1;
    int d = 0;
    string answerOne, answerTwo, answerThree, answerFour, answerFive;


    // I still use sample question from desyanwar8.blogspot.id
    string name;
    cout << "Write your name here: " << endl;
    cin >> name;
    cout << "Hello " << name << "! Let's get started!";

    cout << "What's your favorite among these colors?"<<endl;
    cout << "a. Red  b. Blue  c. Black  d. White"<<endl;
    cin >> answerOne;

    cout << "What's your least favorite song genres among of these?"<<endl;
    cout << "a. Rock  b. Jazz  c. Pop  d. Dangdut"<<endl;
    cin >> answerTwo;

    cout << "What's your favorite among these Indonesian president?"<<endl;
    cout << "a. Soekarno  b. Habibie  c. Soeharto  d. SBY"<<endl;
    cin >> answerThree;

    cout << "Which fruit is the most delicious for you?"<<endl;
    cout << "a. Strawberry  b. Grape  c. Apel  d. Orange"<<endl;
    cin >> answerFour;

    cout << "What's your most favorite place?"<<endl;
    cout << "a. House  b. Cafe  c. Mall  d. Park"<<endl;
    cin >> answerFive;

    return 0;
}
