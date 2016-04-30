
#include <cstdlib>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

class NormalizationTemplate{
public:
    virtual vector<float> getNumerator(vector<int>*)=0;
    virtual float getDenominator(vector<int>*)=0;
    vector<float> normalize(vector<int>* data){
        vector<float> NormalizedData;
        cout<<"check";
        vector<float> num=getNumerator(data);
        float den=getDenominator(data);
        for(int i=0;i<num.size();i++){
            NormalizedData.push_back(num[i]/den);
        }
        return NormalizedData;
    }
};
class NormalizationStandardize:public NormalizationTemplate{
public:
    virtual vector<float> getNumerator(vector<int>* data){
        vector<float> numerator;
        for(int i=0;i<data->size();i++){
           numerator.push_back(data->at(i) - datamean(data)); 
        }
        return numerator;
    }
    virtual float getDenominator(vector<int>* data){
        vector<float> shifted;
        shifted=getNumerator(data);
        float sumsq=0;
        for(int i=0;i<shifted.size();i++){
            sumsq = sumsq + shifted[i] * shifted[i];
        }
        return sqrtf(sumsq/shifted.size());
    }
    float datamean(vector<int>* data){
        float sum;
        sum=0;
        for(int i=0;i<data->size();i++){
            sum += data->at(i);
        }
        return sum/data->size();
    }
};
    class NormalizationScale :public NormalizationTemplate{
    public:
        virtual vector<float> getNumerator(vector<int>* data){
            vector<float> numerator;
            auto m = *min_element(data->begin(), data->end());
            for(int i=0;i<data->size();i++){
                numerator.push_back(data->at(i)- m );
            }
            return numerator;
        }
        virtual float getDenominator(vector<int>* data){
            float denominator;
            denominator= *max_element(data->begin(),data->end()) - *min_element(data->begin(),data->end());
            return denominator;
        }
        
    };
    
    
int main(int argc, char** argv) {
    NormalizationStandardize standardizeAlgorithm;
    NormalizationScale scaleAlgorithm;
    vector<int> data;
    vector<float> norm;
    data.push_back(9);
    data.push_back(10);
    data.push_back(11);
    data.push_back(13);
    data.push_back(15);
    data.push_back(5);
    
    norm = standardizeAlgorithm.normalize(&data);
    cout<<"check";
    
    for(int i=0;i<norm.size();i++){
        cout<<norm[i]<<" "<<endl;
    }
    norm=scaleAlgorithm.normalize(&data);
    for(int i=0;i<norm.size();i++){
        cout<<norm[i]<<" "<<endl;
    }
    return 0;
}

