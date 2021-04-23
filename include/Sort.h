#ifndef SORT_H
#define SORT_H

template<typename item>
void sort(item *content, int l_index, int r_index);

template<typename item> 
void merge(item *content, item *aux, int l_index, int m_index, int r_index);

template<typename item> 
void mergeSort(item *content, item *aux, int l_index, int r_index);

template<typename item>
bool isSorted(item *content, int l_index, int r_index);

template<typename item>
void exchange(item *content, int it1, int it2);

template<typename item>
bool less(item it1, item it2);

#endif