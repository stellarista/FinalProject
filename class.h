#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include <iostream>

using namespace std;

class Answer
{
    private:
    char answer;
    int mark = 0;

    public:
    /*To call the class*/
    Answer()
    {
        this->answer=answer;
        this->mark=mark;
    }
    /*Initialized answer:char*/
    void setAnswer(char answer)
    {
        /*Pointing that the answer in the private class is also the answer in this function*/
        this->answer=answer;

        /*Answer validation for the input*/
        /*Each answer has a score or mark and will be calculated*/
        if (answer == 'a' || answer == 'A'){
            mark += 3;
        } else if (answer == 'b' || answer == 'B'){
            mark += 2;
        } else if (answer == 'c' || answer == 'C'){
            mark += 1;

            /*Use while loop so the program will keep asking the user to put the right input if the user always put the wrong input*/
        } while (answer != 'a' && answer != 'A' && answer != 'b' && answer != 'B' && answer != 'c' && answer != 'C')
			{
			    /*Display the warning and ask the user to enter a valid input*/
				cout << "Invalid answer.\n"<<"Please enter a valid selection, either a, b, or c.\n";
				cin >> answer;
			}

    }

    char getAnswer()
    {
        return answer; //return answer
    }
    void setMark(int mark)
    {
        this->mark=mark;
    }
    int getMark()
    {
        return mark; //return mark
    }

    /*Display the result with validations*/
    void printResult()
    {
        /*The sum of the mark will decided which result the user get*/
        if (mark >= 13 & 17 >= mark)
        {   cout<< "Result:\n\n";
            cout<< "You think yourself as an inferior.\n\n";
            cout<< "No one is born inferior. Everyone is superior and a winner.\n"
                << "You're too shy to express yourself.\n"
                << "You're afraid people might avoid you if you're wrong\n"
                << "You should try to express yourself more because\n"
                << "although not everyone has the same thoughts as you,\n"
                << "you will find some people who will be with you.\n"
                << "You just need to be a little more confident~\n";
        }

        if (mark >= 18 & 22 >= mark)
        {   cout<< "Result:\n\n";
            cout<< "You're tend to be a shy person\n\n";
            cout<< "You're a person who don't want to take risk\n"
                << "because you're afraid to be blamed if you make mistake.\n"
                << "Everyone has a potential including you.\n"
                << "Try to overcome it so your potential can be unleashed.\n";
        }

        if (mark >= 23 & 28 >= mark)
        {   cout<< "Result:\n\n";
            cout<< "You're a confident person~\n\n";
            cout<< "You have enough confidence and placed yourself well.\n"
                << "You know well how to interact with others.\n"
                << "Positioning yourself if important to you.\n";
        }

        if (mark >= 29 & 34 >= mark)
        {   cout<< "Result:\n\n";
            cout<< "You're a really confident person~\n\n";
            cout<< "You have a huge confident.\n"
                << "You're a person people can rely on and can express yourself well.\n"
                << "Being able to learn new things is you most powerful strength.\n";
        }

        if (mark >= 35 & 39 >= mark)
        {   cout<< "Result:\n\n";
            cout<< "You're a narcissist\n\n";
            cout<< "Be careful!\n"
                << "It's good to have confidence but don't be too much!\n"
                << "Your overflowing confidence can sometimes make people uncomfortable.\n"
                << "Try to control it.\n";
        }
    }
};


#endif // CLASS_H_INCLUDED

