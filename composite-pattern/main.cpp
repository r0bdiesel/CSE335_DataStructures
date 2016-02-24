
#include <cstdlib>

using namespace std;
#include "File.h"
#include "Directory.h"

#include <iostream>
int main(int argc, char** argv) {
    File f1("f1.txt",100);
    File f2("f2.txt",80);
    Directory d1("d1");
    d1.addEntity(&f1);
    d1.addEntity(&f2);
    
    File f3("f3.txt",20);
    File f4("f4.txt",30);
    File f5("f5.txt",40);
    Directory d2("d2");
    d2.addEntity(&f3);
    d2.addEntity(&f4);
    d2.addEntity(&f5);
    
    Directory d3("d3");
    d3.addEntity(&d1);
    d3.addEntity(&d2);
    
    d3.print();
    cout<<d3.getSize();
    
    
    return 0;
}

