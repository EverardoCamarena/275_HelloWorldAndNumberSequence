/*
 * This C++ program displays the output with change of last haft input 
 * CECS 275 - Spring 2022 e
 * @author Calvin Veith 
 * @author Everardo Camarena
 * @version 1.0.1
 *
 */
  #include <iostream>
  #include <string>
   using namespace std;

 int main(){
// delcare place holders for user input
 string getword;
 
 // ask the user for a words
 cout << "give a words that you like see letter change order: "<< endl;
 cin >> getword;

// count the char of the word that giving by the user
 int wordlenght = getword.length();

// save new word and degrest length
 string NewWord = "";
 string SaveWord = getword;
 int NewWordLenght = wordlenght;
 int numberOfRounds = 1;
 int charnum = 0 ;
 int SaveSpot;

 // this will be use to delay the change to a later pistions 
 if (wordlenght % 2 == 0)
 {
     SaveSpot = 0;
 }
 if (wordlenght % 2 == 1)
 {
     SaveSpot = 1;
 }
 
 // output what is input
 cout << "s = \"" << SaveWord << "\"" << endl;

 // change the secnod haft of the word unit the last 2
 while (NewWordLenght > 2)
    {
       NewWordLenght = NewWordLenght / 2;
       
       SaveSpot = SaveSpot + NewWordLenght; // number of save spot
       // Not change spot
       for (charnum = 0; charnum < SaveSpot; charnum++)
       {
           NewWord = NewWord + getword[charnum];
       }
       
       // change spot
       for (charnum = wordlenght-1 ; charnum >= SaveSpot; charnum--)
       {
           NewWord = NewWord + getword[charnum];
       }
       
       // save the new word
       getword = NewWord;

       // reset NewWord to -> ""
       NewWord = "";

       // output each Step to the consel
       cout << "Step " << numberOfRounds << ": " << getword << endl;
        numberOfRounds++; // add the step to display
    }
 }