#include<iostream>
#include<vector>
#include<string>
using namespace std;

class MaxHeap{
    vector<int> vec;
public:
    void push(int val){
        //insert value
        vec.push_back(val);

        //fix heap
        int x=vec.size()-1;     //childI
        int parI=(x-1)/2;

        while(parI>=0 && vec[x]>vec[parI]){
            swap(vec[x], vec[parI]);
            x=parI;
            parI=(x-1)/2;
        }
    }

    void heapify(int i){    //i=parI
        if(i>=vec.size()){
            return;
        }
        int l=2*i+1;
        int r=2*i+2;

        int maxIdx=i;

        if(l<vec.size() && vec[l]>vec[maxIdx]){
            maxIdx=l;
        }
        if(r<vec.size() && vec[r]>vec[maxIdx]){
            maxIdx=r;
        }

        swap(vec[i], vec[maxIdx]);
        if(maxIdx!= i){
            heapify(maxIdx);
        }
    }

    void pop(){     //O(logn)
        //step1
        swap(vec[0], vec[vec.size()-1]);
        //step2
        vec.pop_back();
        //step3
        heapify(0); //O(logn)
    }

    int top(){  //O(1)
        return vec[0];  //highest priority element
    }

    bool empty(){   //O(1)
        return vec.size()==0;
    }
};

class MinHeap{
    vector<int> vec;
public:
    void push(int val){
        //insert value
        vec.push_back(val);

        //fix heap
        int x=vec.size()-1;     //childI
        int parI=(x-1)/2;

        while(parI>=0 && vec[x]<vec[parI]){
            swap(vec[x], vec[parI]);
            x=parI;
            parI=(x-1)/2;
        }
    }

    void heapify(int i){    //i=parI
        if(i>=vec.size()){
            return;
        }
        int l=2*i+1;
        int r=2*i+2;

        int maxIdx=i;

        if(l<vec.size() && vec[l]<vec[maxIdx]){
            maxIdx=l;
        }
        if(r<vec.size() && vec[r]<vec[maxIdx]){
            maxIdx=r;
        }

        swap(vec[i], vec[maxIdx]);
        if(maxIdx!= i){
            heapify(maxIdx);
        }
    }

    void pop(){     //O(logn)
        //step1
        swap(vec[0], vec[vec.size()-1]);
        //step2
        vec.pop_back();
        //step3
        heapify(0); //O(logn)
    }

    int top(){  //O(1)
        return vec[0];  //highest priority element
    }

    bool empty(){   //O(1)
        return vec.size()==0;
    }
};

int main(){
    MaxHeap heap;
    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);

    cout<<"top: "<<heap.top()<<endl;
    heap.pop();
    cout<<"top: "<<heap.top()<<endl;

    return 0;
}