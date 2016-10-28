#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{

    string name;
    cout << "----------------------------------------" << endl;
    cout << "          Personality Test"<<endl;
    cout << "----------------------------------------" << endl;
    cout << "Write your name here: " << endl;
    cin >> name;
    cout << "Hello " << name << "!\n";
    cout << "Please choose the answer that suits you the most!\n";
    cout << "choose a, b, c, or d~"<< endl;
    cin.ignore();
    cout<<endl;
    char answer;//lol
    int mark = 0;
// I still use sample question from desyanwar8.blogspot.id
//do  {
    cout << "What's your favorite among these colors?"<<endl;
    cout << "a. Red  b. Blue  c. Black  d. White"<<endl;
    cin >> answer;

        if (answer == 'a'){
            mark += 3;
        } else if (answer == 'b'){
            mark += 2;
        } else if (answer == 'c'){
            mark += 1;
        } else if (answer == 'd'){
            mark += 0;
        }   while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd')
			{
				cout << "Invalid. Please enter a valid selection, either a, b, c, or d.\n";
				//cout << "Press enter to continue and try again.\n";
				cin >> answer;
			}

    cout << "What's your least favorite song genres among of these?"<<endl;
    cout << "a. Rock  b. Jazz  c. Pop  d. Dangdut"<<endl;
    cin >> answer;
        if (answer == 'a'){
            mark += 3;
        } else if (answer == 'b'){
            mark += 2;
        } else if (answer == 'c'){
            mark += 1;
        } else if (answer == 'd'){
            mark += 0;
        }  while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd')
			{
				cout << "Invalid. Please enter a valid selection, either a, b, c, or d.\n";
				//cout << "Press enter to continue and try again.\n";
				cin >> answer;
			}


    cout << "What's your favorite among these Indonesian president?"<<endl;
    cout << "a. Soekarno  b. Habibie  c. Soeharto  d. SBY"<<endl;
    cin >> answer;


        if (answer == 'a'){
            mark += 3;
        } else if (answer == 'b'){
            mark += 2;
        } else if (answer == 'c'){
            mark += 1;
        } else if (answer == 'd'){
            mark += 0;
        }   while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd')
			{
				cout << "Invalid. Please enter a valid selection, either a, b, c, or d.\n";
				//cout << "Press enter to continue and try again.\n";
				cin >> answer;
			}

    cout << "Which fruit is the most delicious for you?"<<endl;
    cout << "a. Strawberry  b. Grape  c. Apel  d. Orange"<<endl;
    cin >> answer;
        if (answer == 'a'){
            mark += 3;
        } else if (answer == 'b'){
            mark += 2;
        } else if (answer == 'c'){
            mark += 1;
        } else if (answer == 'd'){
            mark += 0;
        }   while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd')
			{
				cout << "Invalid. Please enter a valid selection, either a, b, c, or d.\n";
				//cout << "Press enter to continue and try again.\n";
				cin >> answer;
			}

    cout << "What's your most favorite place?"<<endl;
    cout << "a. House  b. Cafe  c. Mall  d. Park"<<endl;
    cin >> answer;

        if (answer == 'a'){
            mark += 3;
        } else if (answer == 'b'){
            mark += 2;
        } else if (answer == 'c'){
            mark += 1;
        } else if (answer == 'd'){
            mark += 0;
        }   while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd')
			{
				cout << "Invalid. Please enter a valid selection, either a, b, c, or d.\n";
				//cout << "Press enter to continue and try again.\n";
				cin >> answer;
			}
//} while  (answer != 'a'||answer != 'b'||answer != 'c'||answer != 'd');

    cout  <<endl;
    if (mark >= 0 & 5 >= mark )
    {   cout<< "Hasil:\n";
        cout << "Kamu orang yang naif, dan  gampang terbawa angin. Agak plin plan tapi memiliki penasaran yang tinggi dalam segala hal, dan naif yang kamu punyai membuatmu takut untuk berbohong. Cobalah lebih berani menentukan sikap, agar tidak gampang di manfaatkan orang.";
    }

   if (mark >= 6 & 10 >= mark)
    {   cout<< "Hasil:\n";
        cout << "Kamu agak bisa menentukan sikap walau terkadang kamu suka ikut-ikutan jadi penghasut. Kamu pintar yang membuat orang lain menyukaimu. Tapi agar kamu lebih sempurna cobalah lebih memendam keinginanmu untuk tidak ikut menjadi penghasut.";
    }

   if (mark >= 11 & mark >= 15)
    {   cout<< "Hasil:\n";
        cout << "Kamu orangnya sangat bersemangat, tidak gampang menyerah, tapi agak sedikit egois juga otoriter. Cobalah sesekali dengarkan apa kata orang lain, karena belum tentu orang lain bisa menerima keinginanmu.";
    }

    return 0;
}
