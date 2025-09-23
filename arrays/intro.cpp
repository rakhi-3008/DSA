// array is linear collection of same type elements that  are stored together in contiguous memory space.
// 100-104-108-112----etc
//index-position starting from zero to n-1

#include<iostream>
using namespace std;

int main(){
    int marks[50];  //array of 50 integers index value 0 to 49 with garbage values 

    // int marks[50]={1, 2, 3};  baki k index m 0 aa jaenge;

    //int marks[]={1, 2, 3, 4} array is initialize with 4 size

    cout<<sizeof(marks)<<endl;  //200 bytes occupied

    cout<<sizeof(marks)/sizeof(int); //length of array


    return 0;
}