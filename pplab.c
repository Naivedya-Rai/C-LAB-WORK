#include <iostream>
#include <cmath>
using namespace std;

void DtoB(int n);
void DtoO(int n);
void DtoH(int n);

void BtoD(string n);
void OtoD(string n);
void HtoD(string n);

int menu();

int main(void)
{
  
  int choice = 7;
  while((choice = menu())) {
  
    if(choice == 1) {
      int n;
      cout << "Enter number: ";
      cin >> n;
      DtoB(n);
    }
    else if(choice == 2) {
      string n;
      cout << "Enter number: ";
      cin >> n;
      BtoD(n);
    }
    else if(choice == 3) {
      int n;
      cout << "Enter number: ";
      cin >> n;
      DtoO(n);
    }
    else if(choice == 4)  {
      string n;
      cout << "Enter number: ";
      cin >> n;
      OtoD(n);
    }
    else if(choice == 5)  {
      int n;
      cout << "Enter number: ";
      cin >> n;
      DtoH(n);
    }
    else if(choice == 6)  {
      string n;
      cout << "Enter number: ";
      cin >> n;
      HtoD(n);
    }
    else if(choice == 7) {
      cout << "Goodbyee...\n";
      return 0;
    }
    else {
      cout << "Wrong option\n";
      choice = 7;
      continue;
    }

  }

  return 0;
}

int menu()
{
  int choice;
  cout << "Menu\n\
        1. Decimal to binary\n\
        2. Binary to decimal\n\
        3. Decimal to octal\n\
        4. Octal to decimal\n\
        5. Decimal to hexa\n\
        6. Hexa to decimal\n\
        7. Exit\n\n\
    Enter Your choice: ";
  cin >> choice;

  return choice;
}
void DtoB(int n) {

  int bin[32];
  int i = 0;


  for(i = 0; n != 0; i++) {
    bin[i] = n % 2;
    n /= 2;
  }

  for(int j = i-1; j >= 0; j--) {
    cout << bin[j];
  }

  cout << endl;

}

void DtoO(int n)
{

  int bin[32];
  int i = 0;


  for(i = 0; n != 0; i++) {
    bin[i] = n % 8;
    n /= 8;
  }

  for(int j = i-1; j >= 0; j--) {
    cout << bin[j];
  }

  cout << endl;
}

void DtoH(int n)
{

  char bin[32];
  int i = 0;


  for(i = 0; n != 0; i++) {
    int a = n % 16;

    if(a > 10) {
      bin[i] = a + 55;
    }
    else {
      bin[i] = a + 48;
    }

    n /= 16;
  }

  for(int j = i-1; j >= 0; j--) {
    cout << bin[j];
  }

  cout << endl;
}


void BtoD(string n)
{
  int num = 0;

  int len = n.length();
  for(int i = len -1; i >= 0; i--) {
    int a = n[i] - 48; //convert to int
    num += (a * pow(2, len - i - 1));
  }

  cout << num << endl;
}

void OtoD(string n) {
  int num = 0;

  int len = n.length();
  for(int i = len -1; i >= 0; i--) {
    int a = n[i] - 48; //convert to int
    num += (a * pow(8, len - i - 1));
  }

  cout << num << endl;
}

void HtoD(string n)  {
  int num = 0;

  int len = n.length();
  for(int i = len -1; i >= 0; i--) {

    int a = n[i];

    if(a >= 48 && a <= 57) {
      a -= 48; // This is an int
    }
    else {
      a -= 87;
    }

    num += (a * pow(16, len - i - 1));
  }

  cout << num << endl;
}