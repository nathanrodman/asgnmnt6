#include "a06.header.h"

void decrypt(int shift, ifstream & plainTextFile, ofstream & cipherFile){
    
    char ch;
    int intCh;
    int outCh;
    
    cout << "\nThe decrypted text: " << endl;
    cout <<   "*******************" << endl;
    
    while (!plainTextFile.eof()){
        
        
        plainTextFile.get(ch);
        if(!isalpha(ch)){
            cipherFile.put(ch);
            cout << ch;
        }
        else
        {
            intCh = static_cast<int>(ch);
            outCh = intCh - shift;
            if (isupper(ch))
            {
                if (outCh < 'A')
                    outCh += ALPHA_NUM;
                
                ch = static_cast<char>(outCh);
                cout << ch;
               cipherFile.put(ch);
            }
            else {
                if (outCh < 'a')
                    outCh += ALPHA_NUM;
                ch = static_cast<char>(outCh);
                cout << ch;
               cipherFile.put(ch);
            }
        }
    }

}
