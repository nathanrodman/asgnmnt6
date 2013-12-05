//
//  a06.header.h
//  a06
//  sources: none
//  Created by Nathan Rodman on 11/13/13.
//  Copyright (c) 2013 Nathan Rodman. All rights reserved.
//

#ifndef a06_a06_header_h
#define a06_a06_header_h

#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

// Globals
const int ALPHA_NUM = 26;

// Prototypes
void encrypt (int shift, ifstream & plainTextFile, ofstream & cipherFile);
void decrypt(int shift, ifstream & plainTextFile, ofstream & cipherFile);
bool openFiles(ifstream & plainTextFile, ofstream & cipherFile);


#endif
