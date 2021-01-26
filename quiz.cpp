#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <windows.h>
#include <ctime>
#include <cstring>

using namespace std;

int result(int right, int wrong, char name[], int total, long long int ID)
{
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << dt << endl;
    cout << "Name: " << name << "\nID: " << ID << endl << endl;
    cout << "Score is " << right << " out of " << total << endl << endl;
    cout << "Total answered \t 10" << endl;
    cout << "Write answer \t" << right << "\nWrong answer \t" << wrong << endl << endl << endl;
    cout << "Thanks for participating..." << endl;

    freopen("result.txt", "a+", stdout);
    cout << dt << endl;
    cout << "Name: " << name << "\nID: " << ID << endl << endl;
    cout << "Score is " << right << " out of " << total << endl << endl;
    cout << "Total answered \t 10" << endl;
    cout << "Write answer \t" << right << "\nWrong answer \t" << wrong << endl << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
    fclose(stdout);

    return 0;
}

int password(char x[])
{
    char a[3] = {'1' , '2', '3'};
    int j, k=0, l;

    for(j=0; j<3; j++)
    {
        if(a[j] == x[j])
        {
            k++;
        }
    }
    return k;
}

void right_ans_pop_up()
{
    cout << "\n\nRight answer";
    Sleep(1000);
}

void wrong_ans_pop_up()
{
    cout << "\n\nHit enter for next question.";
    getchar();
    getchar();
}

void invalid_ans()
{
    cout << "Invalid input." << endl;
    cout << "Press Enter for next question";
    getchar();
    getchar();
}

void invalid_ans_10()
{
    cout << "Invalid input." << endl;
    cout << "Press Enter to see the result";
    getchar();
    getchar();
}

int main()
{
    char confirmation, answer, user_name[50], pass[3];
    int right_answer = 0, wrong_answer = 0, catergory, total_question=0, i, p;
    long long int id;

    cout << "Hello, this is a quiz software.\n\nYou will be asked some questions.\n\nIf you want to answer them, press 'y' or press 'n' to exit." << endl;

    cin >> confirmation;

    system("cls");

    if(confirmation == 'Y' || confirmation == 'y')
    {
        cout << "Please enter your name: ";
        cin >> user_name;
        cout << "\nEnter your ID: ";
        cin >> id;
        pw: cout << "\nEnter password: ";

        for(i=0; i<3; i++)
        {
            cin >> pass[i];
        }
        p = password(pass);
        if(p == 3)
        {
            getchar();
        }
        else
        {
            system("cls");
            cout << "Wrong password. try again,\n\n";
            goto pw;
        }

        system("cls");
        cout << "Hi, " << user_name << "\n\n";
        cout << "There are four categories of question. Choose one...\n";
        cout << "1. IQ\t2. General Knowledge\n";
        cout << "3. IT \t4. Capital & Currency\n\n";
        cout << "Enter corresponding number: ";
        cin >> catergory;

        if(catergory == 1)
        {
            total_question = 10;
            system("cls");
            cout << "ARE YOU READY?\n\npress enter to start the quiz.\n\nAll the best...";
            getchar();
            getchar();

            system("cls");

            //---------------------------------------------------------------------------
            cout << "Question 01: \n\n";
            cout << "Which number should come next in the pattern (37, 34, 31, 28, ..)?\n";
            cout << "a) 25 \t b) 30\nc) 27 \t d) 28\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();

            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) 25";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }
            //---------------------------------------------------------------------------
            system("cls");
            cout << "Question 02: \n\n";
            cout << "Book is to reading, fork is to ..... ?\n";
            cout << "a) drawing \t b) writing\nc) stirring \t d) eating\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'd' || answer == 'D')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'a' || answer == 'A' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: d) eating";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }

            //---------------------------------------------------------------------------

            system("cls");
            cout << "Question 03: \n\n";
            cout << "Which vowel comes midway between J and T?\n";
            cout << "a) A \t b) E\nc) O \t d) I\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'c' || answer == 'C')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'a' || answer == 'A' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: c) O";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }

            //---------------------------------------------------------------------------

            system("cls");
            cout << "Question 04: \n\n";
            cout << "What is the number that is one half of one quarter of one tenth of 400?\n";
            cout << "a) 2 \t b) 10\nc) 5 \t d) 40\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'B' || answer == 'a' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) 10";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }

            //--------------------------------------------------------------------------

            system("cls");
            cout << "Question 05: \n\n";
            cout << "If you count from 1 to 100, how many 7's will you pass on the way?\n";
            cout << "a) 19 \t b) 10\nc) 11 \t d) 21\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) 19";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }

            //--------------------------------------------------------------------------

            system("cls");
            cout << "Question 06: \n\n";
            cout << "What is the last letter of the following word (H C P R A A T E U) when it is unscrambled?\n";
            cout << "a) A \t b) E\nc) P \t d) R\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) E";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }

            //--------------------------------------------------------------------------

            system("cls");
            cout << "Question 07: \n\n";
            cout << "P is the father of Q but Q is not the son of P. What is the relationship between Q and P?\n";
            cout << "a)Father & Mother \nb)Daughter & Father \nc)Brother & Sister \nd)None \n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) Daughter & Father";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }

            //--------------------------------------------------------------------------

            system("cls");
            cout << "Question 08: \n\n";
            cout << "The greatest number of five digits beginning with 5 and ending with 7 is __ \n";
            cout << "a) 53397 \t b) 57897\nc) 58987 \t d) 59997\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'd' || answer == 'D')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'a' || answer == 'A' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: d) 59997";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }

            //--------------------------------------------------------------------------

            system("cls");
            cout << "Question 09: \n\n";
            cout << "What fraction is 50 Paisa of TK 100?\n";
            cout << "a) TK 1/100 \t b) TK 1/200\nc) TK 100 \t d) TK 200\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) TK 1/200";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }

            //--------------------------------------------------------------------------

            system("cls");
            cout << "Question 10: \n\n";
            cout << "ABC=ZXY as GHI=?\n";
            cout << "a) TSR \t b) TSP\nc) LSP \t d) LSR\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();
                cout << "\n\nTest is over.\nPress enter to see the result.";
                getchar();
                getchar();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) TSR";
                cout << "\n\nTest is over.\nPress enter to see the result.";
                getchar();
                getchar();
            }
            else
            {
                invalid_ans_10();
            }

            //--------------------------------------------------------------------------
            //--------------------------------------------------------------------------

            system("cls");
            result(right_answer, wrong_answer, user_name, total_question, id);

        }

        else if(catergory == 2)
        {
            //General Knowledge block;
            total_question = 10;
            system("cls");

            cout << "ARE YOU READY?\n\npress enter to start the quiz.\n\nAll the best...";
            getchar();
            getchar();

            system("cls");

            cout << "Question 01: \n\n";
            cout << "When Independence Day Award started?\n";
            cout << "a) 1977 \t b) 1976\nc) 1975 \t d) 1974\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) 1977";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }
            //--------------------------------------------------------------
            system("cls");
            cout << "Question 02: \n\n";
            cout << "International calling code of Bangladesh is--?\n";
            cout << "a) +440 \t b) +880\nc) +660 \t d) +550\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) +880";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }
//--------------------------------------------------------------
            system("cls");
            cout << "Question 03: \n\n";
            cout << "Main Religion in Bangladesh?\n";
            cout << "a) Islam \t b) Christianity\nc) None of these \t d) Hindu\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) Islam";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }
//--------------------------------------------------------------
            system("cls");
            cout << "Question 04: \n\n";
            cout << "In world Bangladesh is on rank of water resources?\n";
            cout << "a) 18 \t b) 12\nc) 15 \t d) 19\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) 12";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }
//--------------------------------------------------------------
            system("cls");
            cout << "Question 05: \n\n";
            cout << "What is the top level domain in Bangladesh?\n";
            cout << "a) .pk \t b) .in\nc) .bd \t d) .uk\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'c' || answer == 'C')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'a' || answer == 'A' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: c) .bd";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }
//--------------------------------------------------------------
            system("cls");
            cout << "Question 06: \n\n";
            cout << "Official currency of Bangladesh is called--\n";
            cout << "a) Pound Sterling \t b) Taka\nc) Dolor \t\t d) Euro\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) Taka";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }
//--------------------------------------------------------------
            system("cls");
            cout << "Question 07: \n\n";
            cout << "Who is the current president of Bangladesh?\n";
            cout << "a) Abdul Hamid \t\t\t b) None of them\nc) Shirin Sharmin Chaudhury \t d) Md. Muzammed Hossain\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) Abdul Hamid ";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }
//--------------------------------------------------------------
            system("cls");
            cout << "Question 08: \n\n";
            cout << "Capital and largest city of Bangladesh is--\n";
            cout << "a) Barisal \t b) Khulna\nc) Chittagong \t d) Dhaka\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'd' || answer == 'D')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'a' || answer == 'A' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: d) Dhaka";
                wrong_ans_pop_up();
            }
            else
            {
                invalid_ans();
            }
//--------------------------------------------------------------
            system("cls");
            cout << "Question 09: \n\n";
            cout << "Who is the current prime minister of Bangladesh?\n";
            cout << "a) Sanaullah Khan \t b) Sheikh Hasina\nc) Abdul Hamid \t\t d) None of them\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'a' || answer == 'A' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) Sheikh Hasina";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
//--------------------------------------------------------------
            system("cls");
            cout << "Question 10: \n\n";
            cout << "What is the official and national language of Bangladesh?\n";
            cout << "a) English \t b) Arabic\nc) Bangla \t d) Urdu\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'c' || answer == 'C')
            {
                right_answer++;
                right_ans_pop_up();
                cout << "\n\nTest is over.\nPress enter to see the result.";
                getchar();
                getchar();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'a' || answer == 'A' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: c) Bangla";
                cout << "\n\nTest is over.\nPress enter to see the result.";
                getchar();
                getchar();
            }
        else
        {
            invalid_ans_10();
        }


            //--------------------------------------------------------------------------

            system("cls");
            result(right_answer, wrong_answer, user_name, total_question, id);

        }
        else if(catergory == 3)
        {
            //IT block
            total_question = 10;
            system("cls");

            cout << "ARE YOU READY?\n\npress enter to start the quiz.\n\nAll the best...";
            getchar();
            getchar();

            system("cls");

            cout << "Question 01: \n\n";
            cout << "JPG extension refers usually to what kind of file?\n";
            cout << "a) System file \t\t b) Animation/movie file\nc) MS Encarta document \t d) Image file\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'd' || answer == 'D')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'a' || answer == 'A' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: d) Image file ";
                wrong_ans_pop_up();
            }

        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 02: \n\n";
            cout << "A CD-ROM drive is labeled with 52X, here 52X is a measurement of-\n";
            cout << "a) Data transfer rate \t b) Revolution per minute\nc) Capacity of the CD \t d) Time required to read\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                cout << "\n\nRight answer";
                Sleep(1000);
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) Data transfer rate";
                wrong_ans_pop_up();
            }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 03: \n\n";
            cout << "One Megabyte is equal to: \n";
            cout << "a) 10^6 bytes \t b) 10^2 bytes\nc) 10^10 bytes \t d) 10^5 bytes\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) 10^6 bytes";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 04: \n\n";
            cout << "Magnetic disks are most popular medium for--\n";
            cout << "a) Direct access \t b) Sequentional access\nc) Both of the above \t d) None of above\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'c' || answer == 'C')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'a' || answer == 'A' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: c) Both of the above";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 05: \n\n";
            cout << "Which is an essential component of a LAN?\n";
            cout << "a) Router\t b) Gateway\nc) NIC \t\t d) Modem\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'c' || answer == 'C')
            {
                right_answer++;
                cout << "\n\nRight answer";
                Sleep(1000);
            }
            else if(answer == 'b' || answer == 'B' || answer == 'a' || answer == 'A' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: c) NIC";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 06: \n\n";
            cout << "To add two cell (A1 and A2) together you use the following formula--\n";
            cout << "a) = A1 + A2 \t\t b) =Add(A1+A2)\nc) =together(A1:A2) \t d) A1 plus A2\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) = A1 + A2";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 07: \n\n";
            cout << "One milisecond is--\n";
            cout << "a) 10 seconds \t\t b) 100 seconds\nc) 1000 seconds \t d) 10000 seconds\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'c' || answer == 'C')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'a' || answer == 'A' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: c) 1000 seconds ";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 08: \n\n";
            cout << "UPS stand for-- \n";
            cout << "a) United Power Supply \t b) Uninterruptible Power Supply\nc) Ultra Power Supply \t d) Universal Power Supply\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) Uninterruptible Power Supply";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 09: \n\n";
            cout << "Which one works as an output and input device?\n";
            cout << "a) Modem \t b) Scanner\nc) Mouse \t d) Monitor\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) Modem";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 10: \n\n";
            cout << "The brain of a computer is--\n";
            cout << "a) Memory \t b) Hardware\nc) Software \t d) Microprocessor\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'd' || answer == 'D')
            {
                right_answer++;
                right_ans_pop_up();
                cout << "\n\nTest is over.\nPress enter to see the result.";
                getchar();
                getchar();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'a' || answer == 'A' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: d) Microprocessor";
                cout << "\n\nTest is over.\nPress enter to see the result.";
                getchar();
                getchar();
            }
        else
        {
            invalid_ans_10();
        }
            //--------------------------------------------------------------------------

            //--------------------------------------------------------------------------

            system("cls");
            result(right_answer, wrong_answer, user_name, total_question, id);

        }
        else if(catergory == 4)
        {
            //Capital & Currency block
            total_question = 10;
            system("cls");

            cout << "ARE YOU READY?\n\npress enter to start the quiz.\n\nAll the best...";
            getchar();
            getchar();

            system("cls");

            cout << "Question 01: \n\n";
            cout << "What is the capital of Bhutan?\n";
            cout << "a) Kuala Lumpur \t b) New Delhi\nc) Thimphu \t\t d) Lefkosia\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'c' || answer == 'C')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'a' || answer == 'A' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: c) Thimphu";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 02: \n\n";
            cout << "The currency of Bahrain is : \n";
            cout << "a) Dinar \t b) Taka\nc) Dollar \t d) Franc\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) Dinar ";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 03: \n\n";
            cout << "The currency of Brazil is :\n";
            cout << "a) Pula \t b) Real\nc) Franc \t d) Dollar\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) Real ";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 04: \n\n";
            cout << "What is the capital of China?\n";
            cout << "a) Lefkosia \t b) Beijing\nc) Amman \t d) Jerusalem\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) Beijing";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 05: \n\n";
            cout << "What is the capital of North Korea?\n";
            cout << "a) Bangkok \t b) Yangon\nc) Pyongyang \t d) Seoul\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'c' || answer == 'C')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'a' || answer == 'A' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: c) Pyongyang";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 06: \n\n";
            cout << "The currency of China is :\n";
            cout << "a) Franc \t b) Yuan\nc) Kuna \t d) Krone\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) Yuan";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 07: \n\n";
            cout << "What is the capital of Japan?\n";
            cout << "a) Jakarta \t b) Tokyo\nc) Beijing \t d) Bangkok\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) Tokyo";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 08: \n\n";
            cout << "What is the capital of India?\n";
            cout << "a) Kabul \t b) Katmandu\nc) New Delhi \t d) Dhaka\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'c' || answer == 'C')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'a' || answer == 'A' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: c) New Delhi";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 09: \n\n";
            cout << "The currency of Bangladesh is: \n";
            cout << "a) Taka \t b) Real\nc) Franc \t d) Dollar\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'a' || answer == 'A')
            {
                right_answer++;
                right_ans_pop_up();
            }
            else if(answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: a) Taka";
                wrong_ans_pop_up();
            }
        else
        {
            invalid_ans();
        }
            //--------------------------------------------------------------------------
            system("cls");
            cout << "Question 10: \n\n";
            cout << "The currency of Malaysia is :\n";
            cout << "a) Kwacha \t b) Ringit\nc) Rupee \t d) Peso\n\nAnswer(a/b/c/d): ";
            cin >> answer;
            if(answer == 'b' || answer == 'B')
            {
                right_answer++;
                right_ans_pop_up();
                cout << "\n\nTest is over.\nPress enter to see the result.";
                getchar();
                getchar();
            }
            else if(answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D' )
            {
                wrong_answer++;
                cout << "\nWrong!!!\n\nWrite answer: b) Ringit";
                cout << "\n\nTest is over.\nPress enter to see the result.";
                getchar();
                getchar();
            }
        else
        {
            invalid_ans_10();
        }
            //--------------------------------------------------------------------------


            //--------------------------------------------------------------------------

            system("cls");
            result(right_answer, wrong_answer, user_name, total_question, id);

        }
        else
        {
            cout << "Wrong Input. Try again from the beginning...";
            return 0;
        }

    }




    else if(confirmation == 'N' || confirmation == 'n')
    {
        cout << "Hope that you will try again later. Thanks. \n";
        return 0;
    }

    else
    {
        cout << "Wrong input! please try again. \n";
    }

    getchar();
    getchar();
    return 0;

}
