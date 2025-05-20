#include <iostream>
#include <random>
#include <ctime>

using namespace std;


int q_no = 1;
int correct = 0;
int wrong = 0;
bool ask[10] = { true, true, true ,true , true ,true ,true, true , true ,true};
void display_random_question();
void display();
void question(string question , string a, string b, string c, string d, char correct_answer);
void result();

int main()
{
    display();
    return 0;
}

    void display ()
    {
        system ("cls");
        cout << " Question NO:" << q_no << "\t\tCorrect Answers:" << correct << "\t\tWrong Answers:" << wrong << endl << endl;
        display_random_question();
    }


    void display_random_question()
    {
        srand(time (0));
        bool is_question_remaining = false;
        for (int i = 0; i <10; i++)
        {
            if (ask[i])
            {
                is_question_remaining = true;
                break;
            }
        }
        while (is_question_remaining)
        {
            int no = rand()%10;
            if ( ask[no])
            {
                ask [no] = false;
                switch (no)
                {
                    case 0 : 
                        question("Unsa ako favorite color" , " Orange ", 
                        "Blue" , " Green ", "Red" , 'b');
                            break;
                    case 1 : 
                        question( " Unsa ako favorite anime" , " Attack on Titan " , " Demon Slayer" , " One Piece" , " Naruto" , 'a' );
                            break;
                    case 2 : 
                        question (" Unsa ako childhood show " , " Winx Club" , " Uncle Grandpa", " Spongebob Squarepants" , "The Amazing World of Gumball" , 'd');
                            break;
                    case 3 : 
                        question ( " Kanusa ta ga uyab" , " Oct 8" , " Nov 8" , " Nov 11" , " Oct 11" , 'b' );
                            break;
                    case 4 : 
                        question (" Kanusa ko gipanganak " , " October 16, 2005" , " October 17, 2005", " October 18, 2005" , "October 19, 2005" , 'b');
                    break;
                    case 5 : 
                        question ( " Unsa ako favorite show " , " Game of Thrones " , " Breaking Bad" , " The Mandalorian" , " Stranger Things" , 'a' );
                            break;                 
                }
            }
        }
        result ();
    }
    void result ()
    {
        system ("cls");
        cout << " Total Question = " << q_no - 1 << endl;
        cout << " Correct Answers = " << correct << endl;
        cout << " Wrong Answers = " << wrong << endl;
        if ( correct > wrong )
        {
            cout << " result = pass " << endl;
        }
        else if  ( wrong > correct)
        {
            cout << " result = fail" << endl;
        }
        else
        cout << " result = tie " << endl;
    }
void question ( string question , string a , string b, string c, string d, char correct_answer)
{
    cout << question << endl;
    cout << " A. \t" << a << endl;
    cout << " B. \t" << b << endl;
    cout << " C. \t" << c << endl;
    cout << " D. \t" << d << endl;
    char answer;
    cin >> answer;
    if ( answer == correct_answer)
    {
        correct++;
    }
    else
    {
        wrong++;
    }
    q_no++;
    display ();
}