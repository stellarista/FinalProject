#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

class Answer
{
private:
    char answer;
    int mark = 0;
public:
    Answer()
    {
        this->answer=answer;
        this->mark=mark;
    }
    void setAnswer(char answer)
    {
        this->answer=answer;
        if (answer == 'a'){
            mark += 3;
        } else if (answer == 'b'){
            mark += 2;
        } else if (answer == 'c'){
            mark += 1;
        } else if (answer == 'd'){
            mark += 0;
        } while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd')
			{
				cout << "Invalid answer. Please enter a valid selection, either a, b, c, or d.\n";
				cin >> answer;
			}

    }

    char getAnswer()
    {
        return answer;
    }
    void setMark(int mark)
    {
        this->mark=mark;
    }
    int getMark()
    {
        return mark;
    }

    void print()
    {
        if (mark >= 0 & 5 >= mark)
        {   cout<< "Hasil:\n\n";
            cout << "Kamu orang yang naif, dan  gampang terbawa angin. Agak plin plan tapi memiliki penasaran yang tinggi dalam segala hal, dan naif yang kamu punyai membuatmu takut untuk berbohong. Cobalah lebih berani menentukan sikap, agar tidak gampang di manfaatkan orang.";
        }

        if (mark >= 6 & 10 >= mark)
        {   cout<< "Hasil:\n\n";
            cout << "Kamu agak bisa menentukan sikap walau terkadang kamu suka ikut-ikutan jadi penghasut. Kamu pintar yang membuat orang lain menyukaimu. Tapi agar kamu lebih sempurna cobalah lebih memendam keinginanmu untuk tidak ikut menjadi penghasut.";
        }

        if (mark >= 11 & mark >= 15)
        {   cout<< "Hasil:\n\n";
            cout << "Kamu orangnya sangat bersemangat, tidak gampang menyerah, tapi agak sedikit egois juga otoriter. Cobalah sesekali dengarkan apa kata orang lain, karena belum tentu orang lain bisa menerima keinginanmu.";
        }
    }
};


#endif // CLASS_H_INCLUDED
