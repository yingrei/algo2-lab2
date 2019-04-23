#include <stdio.h>


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

