/******************************************************************************
The program will receive from the user various alphabetic characters. 
If the user wants to know the number of alphabetic characters he has entered. he will
have to input the following two characters: ** 
The alphabetic characters between the ** will be counted. The program will be terminated
when the character(*) will be inputed for a second time 
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    char input;
    int i=0;
    while(input!='*')
    {
    cout<<"Δώσε μου έναν χαρακτήρα";
    cout<<endl;
    cin>>input;
    }
    cout<<endl;
    {
   do
   {
       i++;
       cout<<"Αν μου δώσεις για δευτέρη φορά ως input τον χαρακτήρα:*"<<endl<<"Το πρόγραμμα θα τερματήσει";
       cout<<endl;
       cin>>input;
       cout<<endl;
    }
   while(input!='*');
   cout<<"Το πλήθος των χαρακτήρων που εισήγαγες είναι:"<<i-1;
    } 
    return 0;
}