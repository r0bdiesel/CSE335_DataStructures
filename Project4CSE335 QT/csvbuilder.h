#ifndef CSVBUILDER
#define CSVBUILDER
using namespace std;
#include <string>
#include <iostream>
#include "builder.h"
#include <sstream>
#include <fstream>

class CSVbuilder:public Builder{
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
   Data+=",";
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
  string CSVfilename = Filename+".csv";//makes sure the file is a .csv file
  ofstream CSVoutputFile;
  CSVoutputFile.open(CSVfilename.c_str());
  if (CSVoutputFile.is_open()){//makes sure the file is open before trying to write to it
    CSVoutputFile<<"FirstName,LastName,Salary,HireYear"<<"\n";
    CSVoutputFile<<Data;
  }
  CSVoutputFile.close();//closes file after writing to it   
}
};
#endif // CSVBUILDER

