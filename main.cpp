#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

#include "class.h"

using namespace std;

int main()
{

    string name;
    cout << "----------------------------------------" << endl;
    cout << "           Personality Test"<<endl;
    cout << "----------------------------------------" << endl;
    cout << "Write your name here: " << endl;
    cin >> name;
    system("CLS");

    cout << "Hello " << name << "!\n";
    cout << "Please choose the answer that suits you the most!\n";
    cout << "choose bu typing a, b, c, or d~"<< endl;
    system("pause");
    system("CLS");

    char answer;

    Answer input;

    cout << "What's your favorite among these colors?"<<endl;
    cout << "a. Red  b. Blue  c. Black  d. White"<<endl;
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "What's your least favorite song genres among of these?"<<endl;
    cout << "a. Rock  b. Jazz  c. Pop  d. Dangdut"<<endl;
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "Who's your favorite among these Indonesian president?"<<endl;
    cout << "a. Soekarno  b. Habibie  c. Soeharto  d. SBY"<<endl;
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "Which fruit is the most delicious for you?"<<endl;
    cout << "a. Strawberry  b. Grape  c. Apple  d. Orange"<<endl;
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "What's your most favorite place?"<<endl;
    cout << "a. House  b. Cafe  c. Mall  d. Park"<<endl;
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout<<endl;

    input.print();
    return 0;
}

