//
//  main.cpp
//  Mastermind1
//
//  Created by Cassie Christenson on 12/16/14.
//  Copyright (c) 2014 Cassie and Paul. All rights reserved.
//

/*
    Color Scheme:
    R -> red
    O -> orange
    Y -> yellow
    G -> green
    B -> blue
    V -> violet
*/

#include <iostream>
#include <string>

using namespace std;

string evalGuess(string code, string guess);
bool isValidGuess(string code, string guess);

#define guessLength 4

int main(int argc, const char * argv[]) {
    
    cout << "**** Welcome to Mastermind! ****" << endl << endl;
    cout << "Paul edited, does it still work in xcode?" << endl;
    string s = "";
    
    while(s != "1" && s != "0"){
        cout << "Enter '1' to begin game" << endl;
        cout << "Enter '0' to guit" << endl;
        cout << ">>  ";
        cin >> s;
        cout << endl << endl;
    }
    
    cout << evalGuess("123","456") << endl;
    return 0;
}

bool isValidGuess(string guess){
    if(guess.length() != guessLength){
        cerr << "Error: invalid guess length" << endl;
        return false;
    }
    
    for(int i = 0; i < guessLength; i++){
        if(guess[i] != 'R' && guess[i] != 'O' &&
           guess[i] != 'Y' && guess[i] != 'G' &&
           guess[i] != 'B' && guess[i] != 'V'){
            cerr << "Error: invalid character in guess" << endl;
            return false;
        }
    }
    return true;
}

string evalGuess(string code, string guess){
    return "hello";
}
