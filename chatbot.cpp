#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hello!! I am your admission and scholarship assistant \n In which section do you want help? \n 1. Admission \n 2. Scholarship" << endl;
    int n;
    cin >> n;

    if(n == 1){
        
        int adm;

        cout << "In which year are you taking admission? \n 1.First Year Engineering \n 2. Direct Second Year Engineering" << endl;
        cin >> adm;

        cout << "Select choice: \n 0. Exit \n 1. Ask doubt" << endl;
        int ch;
        cin >> ch;

        while(ch == 1){
            string quest;

            cout << "Ask Your Doubt" << endl;
            cin >> quest;

            if(quest == "Which documents do I need for taking admission?")
            {
                if(adm == 1) cout << "You need CET or JEE score card, 10th and 12th mark sheets, school leaving certificate and birth certificate" << endl;
                else cout << "You need diploma third year marksheet, school leaving certificate and birth certificate" << endl;
            }
            else if(quest == "When will the admission process start?")
            {
                if(adm == 1) cout << "15th July" << endl;
                else cout << "15th August" << endl;
            }
            else if(quest == "What is the deadline to fill the admission forms")
            {
                if(adm == 1) cout << "30th July" << endl;
                else cout << "30th August" << endl;
            }
            else if(quest == "Where can I get the admission related information?")
            {
                cout << "You can visit www.pict.edu website or visit the student counter" << endl;
            }
            else if(quest == "Who is the incharge of admission process?")
            {
                cout << "Mr. Milind Phadke" << endl;
            }
            else{
                cout << "Ask another doubt or press 0 to exit";
                cin >> quest;
                if(quest=="0"){
                    break;
                }
            }
        }
    }
    if(n == 2){
        int cat;
        cout << "To which category do you belong? \n 1. OBC/VJNT \n 2. SC/ST \n 3. EWS " << endl;

        cout << "Select choice: \n 0. Exit \n 1. Ask doubt" << endl;
        int ch;
        cin >> ch;

        while(ch == 1){
            string quest;

            cout << "Ask Your Doubt" << endl;
            cin >> quest;

            if(quest == "Which documents do I need?")
            {
                cout << "You need your previous year mark sheet, caste certificate, caste validity certificate, income certificate and birth certificate" << endl;
            }
            else if(quest == "When will the scholarship process start?")
            {
                cout << "1 December" << endl;
            }
            else if(quest == "What is the deadline to fill the scholarship forms")
            {
                cout << "30th March" << endl;
            }
            else if(quest == "Where can I get the scholarship related information ?")
            {
                cout << "You can visit www.mahadbt.com website or visit the student counter in PICT campus" << endl;
            }
            else if(quest == "Which faculty is the incharge of the scholarship process ?")
            {
                cout << "Mr. Pravin Sawant. contact : pgsawant@pict.edu" << endl;
            }
            else{
                cout << "Ask another doubt or press 0 to exit";
                cin >> quest;
                if(quest=="0"){
                    break;
                }
            }
        }
    }
}
