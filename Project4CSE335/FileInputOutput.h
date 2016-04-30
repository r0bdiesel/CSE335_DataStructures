
#ifndef FILEINPUTOUTPUT_H
#define FILEINPUTOUTPUT_H

using namespace std;
#include <vector>
#include <iostream>
#include <fstream>

//function for reading from a text file and returning a string each line separated by '|'
 string readfromfile(string filename){
    string line;
    string output="";
    ifstream myfile(filename.c_str());//file name to read from
    if (myfile.is_open()){
        while(myfile>>line){
            output= output + line.c_str()+"|";
        }
        myfile.close();
    }
    else{ cout<< "unable to open input file"<<endl;} //output if file is not present
    return output;
 }
 
 //function for reading from a text file and returning a vector of integers in the file separated by spaces
 vector<int> readfromFile(string filename){
    string line; int i; vector <int> vec;
   ifstream myfile(filename.c_str());//file name to read from
    //file parsing
    if (myfile.is_open()){
        while( std::getline(myfile, line,' ') ){//elements are separated by spaces
            i = std::atoi(line.c_str());//convert the elements in the text file to integers
            vec.push_back(i); //push elements into a vector
        }
        myfile.close();
    }
    else{ cout<< "unable to open input file"<<endl;} //output if file is not present
    return vec;
 }
template <typename T> ///outputs elements in the vector into a .csv format
 void writetoCSVFile(vector<T> vec,string filename){
    filename = filename+".csv";//makes sure the file is a .csv file
    ofstream outputFile;
     outputFile.open(filename.c_str());
     if (outputFile.is_open()){//makes sure the file is open before trying to write to it 
         for (int i=0;i<vec.size();i++){
             outputFile<<vec[i]<<",";//separates elements by ,
         }
     }
     outputFile.close();//closes file after writing to it
 }
template <typename T> ///outputs elements in the vector into a .csv format
 void appendtoCSVFile(vector<T> vec,string filename){
    filename = filename+".csv";//makes sure the file is a .csv file
    ofstream outputFile;
     outputFile.open(filename.c_str(),std::ios_base::app);
     if (outputFile.is_open()){//makes sure the file is open before trying to write to it 
         for (int i=0;i<vec.size();i++){
             outputFile<<vec[i]<<",";//separates elements by ,
         }
     }
     outputFile.close();//closes file after writing to it
 }
template <typename T> ///outputs elements in the vector into a .txt format
 void writetotextFile(vector<T> vec,string filename){
    filename = filename+".txt";//makes sure the file is a .txt file
    ofstream outputFile;
     outputFile.open(filename.c_str());
     if (outputFile.is_open()){//makes sure the file is open before trying to write to it 
         for (int i=0;i<vec.size();i++){
             outputFile<<vec[i]<<",";//separates elements by ,
         }
     }
     outputFile.close();//closes file after writing to it
 }
template <typename T> ///outputs elements in the vector into a .txt format
 void appendtotextFile(vector<T> vec,string filename){
    filename = filename+".txt";//makes sure the file is a .txt file
    ofstream outputFile;
     outputFile.open(filename.c_str(),std::ios_base::app);
     if (outputFile.is_open()){//makes sure the file is open before trying to write to it 
         for (int i=0;i<vec.size();i++){
             outputFile<<vec[i]<<",";//separates elements by ,
         }
     }
     outputFile.close();//closes file after writing to it
 }


 


#endif /* FILEINPUTOUTPUT_H */

