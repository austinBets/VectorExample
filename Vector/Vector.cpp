#include "Vector.h"

Vector::Vector(){
   
    for(int i = 0; i < 10; i++){
       arr[i] = 0;//Looping through the arr and setting each value equal to 0.
    }
}

Vector::~Vector(){
    // You don't need to add anything here
}

// Implement this function first, since all tests use it.
int Vector::ValueAt(int index){
    return arr[index];
}

// Implement this function second, since most tests use it.
bool Vector::PushBack(int value) {
    
    if(arr[9] !=0) {
        return false;
    }
    else {
        for(int i = 0; i < 10; i++) {
            
            if(arr[i]==0 && previousValue != 0) {
                arr[i] = value;
                break;
            }
            else if(arr[i]==0 && previousValue == 0){
                arr[i+1] = value;
                break;
            }
            
        }
        previousValue = value;
        return true;
    } 
}


int Vector::CountEmpty(){
    int count = 0;
    for(int i = 0; i < 10; i++){
        if (arr[i] == 0){
            count +=1;
        }
    }
    return count;
}

bool Vector::Search(int value){
    for(int i = 0; i < 10; i++) {
        if(arr[i] == value){
            return true;
        }
    }
    return false;
}

bool Vector::Remove(int index){
    if (index > 9){
        return false;
    }
    else if(index == 9){
        arr[9] = 0;
    }
    else{
         for (int i = index; i < 9; i++){
            if(i == 8) {
                arr[8] = arr[9];
                arr[9] = 0;
            }
            else{ 
                arr[i] = arr[i+1];
            }
         } 
    }
    return true;
}