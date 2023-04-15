#include<stdio.h>
int count;
void largestConsecutive(int arr[int k]){
    if(arr[k+1]=arr[k]+1){
        count++;
        largestConsecutive(arr[k+1]);
    }
    else return count;
}



int main(){

    return 0;
}