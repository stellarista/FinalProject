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
    cout << "Hello " << name << "! Let's get started!";

    system("PAUSE");

    string answerOne, answerTwo, answerThree, answerFour, answerFive;
    int mark = 0;
    bool valid = false;

do {
    system("CLS");
    // I still use sample question from desyanwar8.blogspot.id
    cout << "What's your favorite among these colors?"<<endl;
    cout << "a. Red  b. Blue  c. Black  d. White"<<endl;
    cin >> answerOne;
    valid = false;

    if (answerOne == 'a' || answerOne == 'A'){
        valid = true;
        mark += 3;
    } else if (answerOne == 'b'|| answerOne == 'B'){
        valid = true;
        mark += 2;
    } else if (answerOne == 'c' || answerOne == 'C'){
        valid = true;
        mark += 1;
    } else if (answerOne == 'd'|| answerOne == 'D'){
        valid = true;
        mark += 0;
    } else {
    cout << "Invalid answer! please type only A, B, C, or D." << endl;
}

    cout << "What's your least favorite song genres among of these?"<<endl;
    cout << "a. Rock  b. Jazz  c. Pop  d. Dangdut"<<endl;
    cin >> answerTwo;
    valid = false;

    if (answerTwo == 'A' || answerTwo == 'a'){
        valid = true;
        mark += 3;
    } else if (answerTwo == 'B' || answerTwo = 'b'){
        valid = true;
        mark += 2;
    } else if (answerTwo == 'C' || answerTwo = 'c'){
        valid = true;
        mark += 1;
    } else if (answerTwo == 'D' || answerTwo = 'd'){
        valid = true;
        mark += 0;
    } else {
    cout << "Invalid answer! please type only A, B, C, or D." << endl;
    }

    cout << "What's your favorite among these Indonesian president?"<<endl;
    cout << "a. Soekarno  b. Habibie  c. Soeharto  d. SBY"<<endl;
    cin >> answerThree;
    valid = false;

    if (answerOne == 'A' || answerThree == 'a'){
        valid = true;
        mark += 3;
    } else if (answerThree == 'B' || answerThree = 'b'){
        valid = true;
        mark += 2;
    } else if (answerThree == 'C' || answerThree = 'c'){
        valid = true;
        mark += 1;
    } else if (answerThree == 'D' || answerThree = 'd'){
        valid = true;
        mark += 0;
    } else {
    cout << "Invalid answer! please type only A, B, C, or D." << endl;
    }

    cout << "Which fruit is the most delicious for you?"<<endl;
    cout << "a. Strawberry  b. Grape  c. Apel  d. Orange"<<endl;
    cin >> answerFour;
    valid = false;

    if (answerFour == 'A' || answerFour == 'a'){
        valid = true;
        mark += 3;
    } else if (answerFour == 'B' || answerFour = 'b'){
        valid = true;
        mark += 2;
    } else if (answerFour == 'C' || answerFour = 'c'){
        valid = true;
        mark += 1;
    } else if (answerFour == 'D' || answerFour = 'd'){
        valid = true;
        mark += 0;
    } else {
    cout << "Invalid answer! please type only A, B, C, or D." << endl;
    }

    cout << "What's your most favorite place?"<<endl;
    cout << "a. House  b. Cafe  c. Mall  d. Park"<<endl;
    cin >> answerFive;
    valid = false;

    if (answerFive == 'A' || answerFive == 'a'){
        valid = true;
        mark += 3;
    } else if (answerFive == 'B' || answerFive = 'b'){
        valid = true;
        mark += 2;
    } else if (answerFive == 'C' || answerFive = 'c'){
        valid = true;
        mark += 1;
    } else if (answerFive == 'D' || answerFive = 'd'){
        valid = true;
        mark += 0;
    } else {
    cout << "Invalid answer! please type only A, B, C, or D." << endl;
    }
/////11111111111111

} while (!valid);

    //totalAnswers = answerOne + answerTwo + answerThree + answerFour + answerFive;

   // if (totalAnswers >= 0 & 5 >= totalAnswers){
   //     cout << "naif";
   // }
   // if (totalAnswers >= 6 & 10 >= totalAnswers){
  //      cout << "agak penghasut lol";
   // }
   // if (totalAnswers >= 11 & 15 >= totalAnswers){
        //cout << "sangat bersemangat";
   // }
    return 0;
}

