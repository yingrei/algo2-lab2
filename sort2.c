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


void insertion_sort(int *array, unsigned int length) {
unsigned int i = length;
while (i > 0 && array[i] < array[i-1]) {
swap(array,i,i-1);
i= i-1;
}


int main() {
for (unsigned int i = 1; i < n; i++) {
insert(array,i);
}
}

  //  	printf("Falta completar! array=%p length=%u\n", (void*)array, length);//

}


void selection_sort(int array[], unsigned int length) {
unsigned int minp;
 for (unsigned int i=0; i<length; i++) {
 	minp=min_pos_from(array, i);
 	swap(array,i,minp);
 		}
}
	//printf("Falta completar! array=%p length=%u\n", (void*)array, length);//



void quick_sort(int array[], unsigned int length)
{
	printf("Falta completar! array=%p length=%u\n", (void*)array, length);
}
