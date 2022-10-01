#include <iostream>
#include <vector>

using namespace std;

int totalSubset = 0;

void subSet(vector<int> input,vector<int> output,int index){
    if(input.size() == index){
        for(auto i:output){
            cout << i<<" ";
        }
        cout << endl;
        totalSubset++;
        return;
    }

    // lena hai
    subSet(input,output,index+1);

    // nhi lene
    output.push_back(input[index]);
    subSet(input,output,index+1);
}

int main(){
    vector<int> input = {1,2,3};
    vector<int> output;
    subSet(input,output,0);
}




