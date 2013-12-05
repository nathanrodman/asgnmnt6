#include "a06.header.h"




bool openFiles(ifstream & plainTextFile, ofstream & cipherFile){
    
    string infileName;
    string outfileName;
    
    cout << "Enter the file to input: ";
    cin >> infileName;
    plainTextFile.open(infileName.c_str());
    
    cout << "Enter the file to output: ";
    cin >> outfileName;
    cipherFile.open(outfileName.c_str());
    
    if(plainTextFile.is_open() & cipherFile.is_open()){
        return true;
    }
    else
    return false;
}

void encrypt (int shift, ifstream & plainTextFile, ofstream & cipherFile){
    
    char ch;
    int intCh;
    int outCh;
    
    cout << "\nThe Encrypted Text: " << endl;
    cout << "*********************" << endl;
    
    while (!plainTextFile.eof()){
        
       
        plainTextFile.get(ch);
        if(!isalpha(ch)){
            cipherFile.put(ch);
            cout << ch;
        }
        else
        {
            intCh = static_cast<int>(ch);
            outCh = intCh + shift;
            if (isupper(ch))
            {
                if (outCh > 'Z')
                    outCh -= ALPHA_NUM;
                
                ch = static_cast<char>(outCh);
                cout << ch;
                cipherFile.put(ch);
            }
            else {
                if (outCh > 'z')
                    outCh -= ALPHA_NUM;
                ch = static_cast<char>(outCh);
                cout << ch;
                cipherFile.put(ch);
            }
        }
    }
}