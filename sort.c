#include <stdio.h>
#include "sort.h"
#include "array_helpers.h"

bool array_is_sorted(int array[], unsigned int length){
unsigned int i=0u;
bool r=true;

	while (i<length-1 && r){
	  if (array[i]<array[i+1]) {
		r=r;
	}
	  else {
		r=!r;
	}		
	i++;
}
	return r;
}
//insertion_sort anda, no lo toques más, gila!!!
void insertion_sort(int array[], unsigned int length){
    for (unsigned int i=0u; i < length; i++){
        insert(array,i);
    }
}
//selection_sort anda, no lo toques más!
void selection_sort(int a[], unsigned int length){
    unsigned int minp;
    
    
    for(unsigned int i=0; i<length; i++){
    	  minp=min_pos_from(a,length, i);
    	swap(a,i,minp);
    	
    }
	
}

void quick_sort(int array[], unsigned int length){

    	quick_sort_rec(array,0u, length - 1);
    }


/*void merge_sort(int array[], unsigned int length){
	unsigned int lft;
	unsigned int rgt=length;
	unsigned int tmp= ((lft + rgt) / 2)
	while 
}
*/
