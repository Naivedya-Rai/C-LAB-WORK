#include <stdio.h>
 
void enter_details();
void display_book();
 
int main(void) {
 
  int choice;
  while(1) {
 
    printf("\n\nMENU\n1. Enter details\n2. Display Details\n3. Exit\nInput: ");
    scanf("%d",&choice);
 
    if(choice == 1) {
      enter_details(); 
    }
    else if(choice == 2) {
      display_book();
    }
    else if(choice == 3) {
      printf("Goodbyeee!!!\n");
      return 0;
    }
    else{
      printf("Unknown Command\n");
      continue;
    }
  }
 
}
 
 
void enter_details() {
 
  FILE* f = fopen("Telephone.txt", "a+");
 
  char name[60], number[20];
 
  printf("Enter name: ");
  scanf("%s", name);
 
  printf("Enter Number: ");
  scanf("%s", number);
 
  char entry[80];
  sprintf(entry, "%s: %s\n",name, number);
 
  fputs(entry, f);
 
  fclose(f);
}
 
void display_book() {
 
  printf("\n");
  FILE* f = fopen("Telephone.txt", "a+");
 
  int c;
 
  while((c = fgetc(f)) != EOF) {
    printf("%c", c);
  }
 
 
}
