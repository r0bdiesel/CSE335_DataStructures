
#include <cstdlib>

using namespace std;
#include <iostream>
#include <vector>

template <class X> void swapargs(X& a, X& b){
    X temp;
    temp= a;
    a=b;
    b=temp;
}
class IntegerVector{
protected:
    vector <int> m_IntegerVector;
public:
    IntegerVector(vector <int>& integerVector){
        m_IntegerVector=integerVector;
    }
    virtual unsigned int getSize() const{
        return m_IntegerVector.size();
    }
    virtual void swap(int i, int j){
        int temp = m_IntegerVector[i];
        m_IntegerVector[i]=m_IntegerVector[j];
        m_IntegerVector[j]=temp;
    }
    virtual void print() const{
        for(int i=0; i<getSize();i++)
            cout<<m_IntegerVector[i]<<"; "<<endl;
    }
    int getInteger(int i) const{
        return m_IntegerVector[i];
    }
    virtual bool smaller(int i, int j) const{
        if(getInteger(i) < getInteger(j))
            return true;
        else
            return false;
    }
};
template <class X> void sortDecreasing(X* items){
    bool sorted = false;
    int n = items->getSize();
    while(!sorted){
        sorted = true;
        for(int i=1;i<n;i++){
            if(items->smaller(i-1,i)){
                items->swap(i-1,i);
                sorted=false;
            }
        }
        n--;
    }
}
template <class StackType,int StackSize>class stack{
protected:
    StackType items[StackSize];
    int top;
public:
    stack(){
        top=0;
    }
    bool push(StackType element){
        if (top==StackSize)
            return false;
        else{
            items[top]=element;
            top++;
        }
    }
    StackType pop(){
        if(top==0){
            return 0;
        }
        else{
            top--;
            return items[top];
        }
    }
    
};


int main(int argc, char** argv) {
    int i=10,j=20;
    std::cout<< "before swap i=" << i <<" j="<< j << endl;
    swapargs(i,j);
    std::cout<< "after swap i=" << i <<" j=" <<j << endl;
    /*************************************************/
    
    vector <int> intVec;
    intVec.push_back(5);
    intVec.push_back(4);
    intVec.push_back(6);
    intVec.push_back(10);
    IntegerVector integerDatabase(intVec);
    cout<<"******************* Before Sorting Integers Decreasing"<<endl;
    integerDatabase.print();
    sortDecreasing(&integerDatabase);
    cout<<"******************* after Sorting Integers Decreasing"<<endl;
    integerDatabase.print();
    /*******************************************************/
    stack<char,4> s1;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.push('d');
    for(i=0;i<4;i++)
        cout<<"Pop: "<<s1.pop()<<endl;
    return 0;
}

