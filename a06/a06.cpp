//
//  a06.cpp
//  a06
//  Sources: none
//  Created by Nathan Rodman on 11/13/13.
//  Copyright (c) 2013 Nathan Rodman. All rights reserved.
//

#include "a06.header.h"

int main()
{
    
    char encdec;
    int shift;
    string fileNameIN;
    string fileNameOUT;
    ifstream plainTextFile;
    ofstream cipherFile;
    bool fileStatus = false;
    
    
    cout << "Welcome to the Caesar Cipher" << endl;
    cout << "----------------------------" << endl;
    cout << "Would you like to encrypt or decrypt a file (e/d): ";
    cin >> encdec;
    
    if(encdec == 'e' || encdec == 'E'){
        cout << "What is the shift value you would like to use?: ";
        cin >> shift;
        fileStatus = openFiles(plainTextFile, cipherFile);
        if(fileStatus == false){
            cout << "Incorrect file name!!";
            return 7;
        }
        else {
            encrypt(shift, plainTextFile, cipherFile);
        }
        

    }
    if (encdec == 'd' || encdec == 'D'){
        cout << "What is the shift value you would like to use?: ";
        cin >> shift;
        fileStatus = openFiles(plainTextFile, cipherFile);
        if(fileStatus == false){
            cout << "Incorrect file name!!";
            return 7;
        }
        else {
            decrypt(shift, plainTextFile, cipherFile);
        }
        
    }
    
    plainTextFile.close();
    cipherFile.close();
    
    return 0;
}

