#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> A={4, 1, 8, 7};
    vector<int> B={2, 3, 6, 5};

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int absDiff=0;
    for(int i=0; i<A.size(); i++){
        int diff=A[i]-B[i];
        if(diff<0){
            absDiff+=(-diff);
        }else{
            absDiff+=diff;
        }
    }

    cout<<"minimum absolute difference of pairs: "<<absDiff<<endl;

    return 0;
}