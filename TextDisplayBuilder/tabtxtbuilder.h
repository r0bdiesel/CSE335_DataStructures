#ifndef TABTXTBUILDER
#define TABTXTBUILDER

using namespace std;
#include <string>
#include <iostream>
#include "builder.h"
#include <sstream>
#include <fstream>

class Tabbuilder:public Builder{
protected:
    string Filename;
    string Data;
public:

virtual void addString(string str){
     Data+=str;
}
virtual void addInteger(int int1){
stringstream ss;
ss << int1;
string str = ss.str();
Data+=str;
}
virtual void addSeparator(){
     Data+="\t";
}
virtual void addline(){
     Data+="\n";
}
virtual string getExpression(){
     string str = Data;
     Data="";
     return str;
}
virtual void setFileName(string str){
    Filename = str;
}
virtual void makeFile(){
     string tabfilename = Filename+".txt";//makes sure the file is a .txt file
     ofstream taboutputFile;
     taboutputFile.open(tabfilename.c_str());
     if (taboutputFile.is_open()){//makes sure the file is open before trying to write to it
        taboutputFile<<Data;
     }
      taboutputFile.close();//closes file after writing to it
}
};


#endif // TABTXTBUILDER

