#include <stdio.h>


float number,frac_number,rest,result;
int int_number,signal,quoc,flag;
int array_binary[100],array_frac[32],i;
int size_array_frac, size_array_binary;
int exp_int, k,size_array_IEEE,j;
int array_IEEE[32];

void convert(float number){

    signal = 0;
    if(number < 0.0) signal = 1;
    if(number < 0.0) number *=(-1);

    int_number = number/1;
    frac_number = number - int_number;
    //printf("\n%d %f",int_number,frac_number);
    i = 0;

while (int_number >= 2) {


    rest = int_number %  2;
    quoc = int_number / 2;
    int_number = quoc;
    array_binary[i] = rest;
    i++;

    }

    array_binary[i] = int_number;
    size_array_binary = i;

    result = frac_number;
    i = 0;


while (result != 1.0 && i != 32 ){
    result = result * 2.0;
    if (result >= 1){
        result = result - 1.0;
        array_frac[i] = 1;
    }
    else array_frac[i] = 0;
        i++;

    }
    size_array_frac = i;

    j = 0;
    exp_int = 0;
    flag = 0;

for( k = 0;k <= size_array_binary; k++){
    if (k == size_array_binary && array_binary[k] == 1){
        exp_int = j;
        flag = 1;
        break;
    }
    j++;
    }

if (flag == 0){
    j = 0;
   for(k = 0;k <= size_array_frac;k ++){
        j--;
        if (array_frac[k] == 1){
            exp_int = j;
            break;
            }
        }
    }

    size_array_IEEE = exp_int;
    exp_int = exp_int + 127;
    i = 0;
//printf("\n%d\n",exp_int);
    rest = 0;
while (exp_int >= 2) {
    rest = exp_int  %  2;
    quoc = exp_int  / 2;
    exp_int  = quoc;
    array_IEEE[8-i] = rest;
    i++;
    }

    array_IEEE[8-i] = exp_int;
    array_IEEE[8-i-1] = 0;

   if (i == 2) array_IEEE[i-1] = 0;

   j = 9;

   if( size_array_IEEE < 0) i = (size_array_IEEE*-1) - 1;
   if (size_array_IEEE >= 0) i = size_array_IEEE - 1;

   if(int_number != 0){
        for( k = i; k >=0; k--){
            array_IEEE[j] = array_binary[k];
            j++;
        }
    i = 0;
        for( k = j; k <= 31; k++){
            array_IEEE[k] = array_frac[i];
            i++;
            }
   }

   else{

       i = (size_array_IEEE*-1);
        for( k = j; k <= 31; k++){
            array_IEEE[k] = array_frac[i];
            i++;
        }
    }

  if( signal == 0) array_IEEE[0] = 0;
  if(signal == 1) array_IEEE[0] = 1;


}











