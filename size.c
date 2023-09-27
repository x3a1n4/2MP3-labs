// created file
// added second comment

#include <stdio.h>

int main(){
    char charArray[] = {'A','B','C','D','E'};
    int intArray[] = {1,2,3,4,5};

    for(int i = 0; i < sizeof(charArray); i++){
        printf("Element %d: %p\n", i, charArray[i]);
    }

    for(int i = 0; i < sizeof(intArray); i++){
        printf("Element %d: %p\n", i, intArray[i]);
    }
}