#include <iostream> // input output stream > to run cin/cout
#include <cstdlib> // to run system function
#include "class.h"

using namespace std;

int main()
{
    /*Declare the string input*/
    string name;

    /*The front page display*/
    cout << "----------------------------------------" << endl;
    cout << "|                                      |" << endl;
    cout << "|          Personality Test            |" << endl;
    cout << "|           (@PsikologiID)             |" << endl;
    cout << "|                                      |" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Write your name: ";
    cin >> name;

    /*Clear the screen after the input to move to the next display*/
    system("CLS");

    /*Display greetings and instructions*/
    cout << "                 Hello " << name << "!\n\n";
    cout << "Welcome to Stella's Personality Test Program!\n\n";
    cout << "This test will decided what kind of person you're in three categories: "<<endl;
    cout << "- a not confident person\n";
    cout << "- a confident person\n";
    cout << "- a narcissist\n";

    cout << "Please choose the answer that suits you the most!\n";
    cout << "choose by typing a, b, or c~"<< endl<<endl;

    system("pause"); //To let the user to press any key to continue
    system("CLS");

    /*Declare the char input*/
    char answer;

    /*Declare the class*/
    Answer input;

    /*Display the question*/
    cout << "1) In your opinion, what kind of person are you?"<<endl;
    cout << "A. I am a special person\n"<<
            "B. I am like the others\n"<<
            "C. I am not better than the others\n";
    cin >> answer;
    input.setAnswer(answer); //Connect the input with the validation in the void setAnswer(char answer) function
    system("CLS");

    cout << "2) Can you influence the others?"<<endl;
    cout << "A. I have the natural ability to influence the others\n"<<
            "B. I can influence the others if I want\n"<<
            "C. I am easily influenced by the others\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "3) Critics can make me really embarrassed."<<endl;
    cout << "A. Never\n"<<
            "B. Not really\n"<<
            "C. Yes\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "4) In my opinion, I am a reliable leader."<<endl;
    cout << "A. Yes\n"<<
            "B. Maybe\n"<<
            "C. No\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "5) In a group, you usually positioned yourself as?"<<endl;
    cout << "A. I always want to be the leader\n"<<
            "B. My friends usually recommend me to be the leader\n"<<
            "C. I don't mind just being a follower\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "6) In my opinion, I am a reliable leader."<<endl;
    cout << "A. I can do many things well\n"<<
            "B. I accept and believe in myself\n"<<
            "C. I often think I am a foolish person\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "7) How do you interact and socialize with people?"<<endl;
    cout << "A. I always or often started a conversation\n"<<
            "B. I feel comfortable making acquaintances\n"<<
            "C. I tend to have a hard time to socialize or making new friends\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "8) In a meeting, what you usually do?"<<endl;
    cout << "A. I usually lead the meeting\n"<<
            "B. I am more to listening\n"<<
            "C. I am too shy to give my opinion or idea\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "9) You're in front of the audiences, what's the thing that usually happened?"<<endl;
    cout << "A. I am confident. Even sometimes excessive\n"<<
            "B. I am confident but still a bit nervous\n"<<
            "C. I am too shy to give my opinion or idea\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "10) In your opinion, what obstacles usually encountered in a friendship?"<<endl;
    cout << "A. My friend does not understand what I am sain\n"<<
            "B. Miscommunication\n"<<
            "C. I feel like my friends only pay attention to my weakness\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "11) What usually the reason behind a fight?"<<endl;
    cout << "A. Unappreciated opinion\n"<<
            "B. Miscommunication\n"<<
            "C. Rudeness\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "12) What kind of place that you like?"<<endl;
    cout << "A. A place of people\n"<<
            "B. A comfortable place\n"<<
            "C. A quiet place\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");

    cout << "13) What is your reason if you want to reject a task?"<<endl;
    cout << "A. The task is too easy\n"<<
            "B. You don't have the capabilities\n"<<
            "C. Feel like you will fail\n";
    cin >> answer;
    input.setAnswer(answer);
    system("CLS");


    /*Display the result based on the validation in void printAnswer() function*/
    input.printResult();
    return 0;
}

