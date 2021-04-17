#include "Sort.h"



#include <iostream>

template<typename item>
bool less(item it1, item it2){

    return it1 < it2;
}

template<typename item>
void exchange(item *it1, item *it2){

    item temp = *it1;
    *it1 = *it2;
    *it2 = temp;
}

template<typename item>
bool isSorted(item *content, int l, int r){

    for(int i=l; i<r; i++){
        if(less(content[i+1], content[i])){
            return false;
        }
    }
    return true;
}


template<typename item>
void sort(item *content, int l, int r){

    item *aux = new item[r-l+1];
    mergeSort(content, aux, l, r);
}

// merge two adjacent and sorted sub arrays
// from content array to auxiliary array
template<typename item> 
void merge(item *content, item *aux, int l, int m, int r){

    for(int i=l; i<=r; i++){
        aux[i] = content[i];
    }

    int i=l, j=m+1;

    for(int k=l; k<=r; k++){

        if(i>m){
            content[k] = aux[j];
            j++;
        } else if(j>r){
            content[k] = aux[i];
            i++;
        } else if( less(aux[i], aux[j]) ){
            content[k] = aux[i];
            i++;
        } else {
            content[k] = aux[j];
            j++;
        }
    }
}

template<typename item> 
void mergeSort(item *content, item *aux, int l, int r){

    if(r<=l){
        return;
    }

    int m = l + (r-l)/2;
    mergeSort(content, aux, l, m);
    mergeSort(content, aux , m+1, r);
    if( less(content[m], content[m+1]) ) return;
    merge(content, aux, l, m, r);
}




