#include<stdio.h>

// temp conversion celsius to faherenhit.
float converttemp(float celsius);

int main(){

 float far = converttemp(0);
 printf("%f\n",far  );
  printf("%f\n",far );
 printf("%f\n",far );


 return 0;
}

float converttemp(float celsius){
    float far = celsius *0.18+32;
    return far;
    

    

}
