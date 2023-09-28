#include <stdio.h> 

  

#define INT_MIN -2147483648 

  

void print_set(int set[], int size); 

  

int main() { 

  

    int size; 

  

    printf("Enter size of sets: "); 

    scanf("%d",&size); 

  

    int set1[size], set2[size]; 

  

    printf("Enter the elements of set1: \n"); 

    for (int i = 0; i<size; i++) { 

        printf("Index %i: ",i+1); 

        scanf("%d",&set1[i]); 

    } 

  

    printf("\nEnter the elements of set2: \n"); 

    for (int i = 0; i<size; i++) { 

        printf("Index %i: ",i+1); 

        scanf("%d",&set2[i]); 

  

    } 

     

    // initialize sets 

    int set_inter[size]; 

    int set_union[2*size]; 

  

    // intersection 

    for(int i = 0; i<size; i++) { 

       int in = 0; 

       for(int j = 0; j<size ;j++) { 

            if (set1[i] == set2[j]) { 

                in = 1; 

            } 

     

       }  

       if (in==1) { 

            set_inter[i] = set1[i]; 

            in = 0; 

       } 

       else { 

            set_inter[i] = INT_MIN; 

            in = 0; 

       } 

  

    } 

  

    // Union 

    int size_inter = sizeof(set_inter)/sizeof(int); 

  

    for(int i = 0; i<size; i++) { 

        int in = 0; 

        for (int j = 0; j<size_inter; j++) { 

             

            if(set1[i] == set_inter[j]) { 

                in = 1; 

                break; 

            } 

  

        } 

        if (in == 0) { 

            set_union[i] = set1[i]; 

            in = 0; 

        } 

        else { 

            set_union[i] = INT_MIN; 

            in = 0; 

        } 

    } 

  

    for(int i = 0; i<size; i++) { 

        int in = 0; 

        for (int j = 0; j<size_inter; j++) { 

            if(set2[i] == set_inter[j]) { 

                in = 1; 

            } 

  

        } 

        if (in == 0) { 

            set_union[i+size] = set2[i]; 

        } 

        else { 

            set_union[i+size] = INT_MIN; 

        } 

    } 

  

    // print sets 

  

    printf("Intersection: "); 

    print_set(set_inter,size); 

  

    printf("Union: "); 

    print_set(set_union,2*size); 

  

  

    return 0; 

  

} 

  

void print_set(int set[],int size) { 

  

    for (int i = 0; i<size; i++) { 

     

        if (set[i] != INT_MIN) printf("%d ",set[i]); 

     

    } 

    printf("\n"); 

  

} 