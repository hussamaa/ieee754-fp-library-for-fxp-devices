#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#include "pointflue_engl.h"


int main(){
     int result;
     int vetor[9] = {0, 1, 0, 0, 
                      0, 0, 1, 0, 
                      0};
nn
     result = convert_binary(vetor);   
     assert(result == 5);

}
