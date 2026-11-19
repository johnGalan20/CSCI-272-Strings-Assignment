#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//Helper Function For Part 3: 
string toLowerCase(string word){
    for(int i = 0; i < word.length(); i++){
        //Convert the current character to lowercase
        word[i] = tolower(word[i]);
    }
    return word;
}

int main(){
    //Part 1
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Full name: " << fullName << endl;
    cout << "Total number of characters(including spaces): " << fullName.length() << endl;

    //Access the first and last characters of fullName
    if(!fullName.empty()){
        cout << "First character: " << fullName[0] << endl;
        cout << "Last Character: " << fullName[fullName.length()-1] << endl;
    }

    //Add Prefix and Suffix(Using concatenation)
    string modifiedName = "Mr./Ms. " + fullName + " Jr.";
    cout << "Modified name: " << modifiedName << endl;
    //Extracting Prefix using substr()
    cout << "Extracting Prefix using substr: " << modifiedName.substr(0, 7) << endl;

    //Part 2: Word Search
    string sentence;
    string searchWord;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "Enter a word to search: ";
    getline(cin, sentence);

    //Check whether the word exists
    if(sentence.find(searchWord) != string::npos){
        cout << "Starting Index: " << sentence.find(searchWord);
    }else{
        cout << "Word not found.";
    }

    //Part 3
    string firstWord;
    string secondWord;
    cout << "Enter a word: ";
    getline(cin, firstWord);
    cout << "Enter another word: ";
    getline(cin, secondWord);

    //Compare both words using the helper function
    if(toLowerCase(firstWord) == toLowerCase(secondWord)){
        cout << "Strings are equal, (case sensitive)" << endl;
    }else{
        cout << "Strings are not equal, (case sensitive)" << endl;
    }

    //Part 4
    string numStr;
    cout << "Enter a number as a string: ";
    cin >> numStr;

    //Convert String to Integer and Double
    int intValue = stoi(numStr);
    double doubleValue = stod(numStr);

    //Multiply Both By 2
    cout << "Interger Value * 2: " << (intValue * 2) << endl;
    cout << "Double Value * 2: " << (doubleValue * 2) << endl;

    //Extra Credit
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;

        //Loop through each character of the sentence
    for(int i = 0; i < sentence.length(); i++){
        char ch = tolower(sentence[i]); //Convert each character to lowercase
        //Count the spaces
        if(ch == ' '){
            spaces++;
        }
        //Count the vowels
        else if(ch == 'a' || ch == 'e' || ch=='i' || ch=='o' || ch=='u'){
            vowels++;
        }
        //Count the consonants
        else if(ch >= 'a' && ch <='z'){
            consonants++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    cout << "Number of Spaces: " << spaces << endl;
}