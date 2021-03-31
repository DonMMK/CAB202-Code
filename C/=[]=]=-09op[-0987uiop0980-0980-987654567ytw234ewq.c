#include <stdio.h>
#include <stdlib.h>

//Positions
int Closed_Guard_Top(){

  return 0;
}

int Closed_Guard_Bottom(){

  return 0;
}

int Open_Guard_Top() {
  printf("Which position are you starting the sequence\n1. Top Open Guard\n2. Bottom Open Guard\n");
  int open;
  scanf("%d",&open);
  if (open == 1) printf("-Your goal is to pass\n-Select passing sequence");
  else printf("-Your goal is to sweep retain or submit\n");

  return 0;
}

int Open_Guard_Top() {
  printf("Which position are you starting the sequence\n1. Top Open Guard\n2. Bottom Open Guard\n");
  int open;
  scanf("%d",&open);
  if (open == 1) printf("-Your goal is to pass\n-Select passing sequence");
  else printf("-Your goal is to sweep retain or submit\n");

  return 0;
}

int Half_Guard(){
printf("Which position are you starting the sequence\n1. Top Half Guard\n2. Bottom Half Guard\n");
  return 0;
}

int Half_Guard(){
printf("Which position are you starting the sequence\n1. Top Half Guard\n2. Bottom Half Guard\n");
  return 0;
}

int Back(){

  return 0;
}

int Back(){

  return 0;
}


int Leg_Locks(){

  return 0;
}

//Main function
int main() {
  printf("Which position do you want to explore?\nPress C for Closed Guard\nPress O for Open Guard\nPress H for Half Guard\nPress B for Back\nPress L for Leg locks\n");
  char user;
  scanf("%c",&user );
  if ( (user != 'C') && (user != 'O') && (user != 'H') && (user != 'B') && (user != 'L') ) {
    printf("Can't you spell you shouldnt be doing jiu jitsu! restart the program\n");
  }
  else if (user == 'C'){
    Closed_Guard();
  }
  else if (user == 'O') {
    Open_Guard();
  }
  else if (user == 'H') {
    Half_Guard();
  }
  else if (user == 'B') {
    Back();
  }
  else if (user == 'L') {
    Leg_Locks();
  }
  return 0;
}
