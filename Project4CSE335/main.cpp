#include <cstdlib>
using namespace std;
#include <vector>
#include <iostream>
#include <fstream>
#include "FileInputOutput.h"

int main(int argc, char** argv) {
    vector<int> vec1;
    vec1.push_back(13424);
    vec1.push_back(23432);
    vec1.push_back(3342);
    vec1.push_back(4342);
    vec1.push_back(5423);
    vec1.push_back(23487348);
    
    vector<string> vecA;
    vecA.push_back("gjgm");
    vecA.push_back("togre");
    vecA.push_back("bob");
    vecA.push_back("toregegegm");
    vecA.push_back("tom");
    vecA.push_back("tom");
    vecA.push_back("phil");
    
    
    writetoCSVFile(vec1,"integers");
    writetoCSVFile(vecA,"strings");
    
    
    

    return 0;
}

