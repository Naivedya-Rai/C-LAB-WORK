#include<iostream>
using namespace std;

const int m = 50;

class ITEMS{
    int itemCode[m];
    float itemPrice[m];
    int count;
    public:
        void resetCount(void){count = 0;}
        void getItem(void);
        void removeItem(void);
        void displayItems(void);
        void displayTotalValue(void);
};

void ITEMS :: getItem(void){
    cout << "Enter the Item Code: ";
    cin >> itemCode[count];
    cout << "Enter cost of the item: ";
    cin >> itemPrice[count];
    count++;
}

void ITEMS :: removeItem(void){
    int code;
    cout << "Enter the Item Code: ";
    cin >> code;
    for(int i = 0;i < count;i++)
        if(itemCode[i] == code)
            itemPrice[i] = 0;
}

void ITEMS :: displayItems(void){
    cout << "\nCode\tPrice\n";
    for(int i = 0;i < count;i++)
    {
        cout << itemCode[i] << "\t" << itemPrice[i] << "\n";
    }
    cout << "\n";
}

void ITEMS :: displayTotalValue(void){
    float sum = 0;
    for(int i = 0;i < count;i++)
        sum = sum + itemPrice[i];
    cout << "\nTotal Value is: " << sum << endl;
}

int main(){
    ITEMS cart;
    cart.resetCount();
    int choice;
    do
    {
        cout << "\nEnter the operation to be performed : ";
        cout << "\n1. Add an item ";
        cout << "\n2. Delete an item ";
        cout << "\n3. Display all the items in cart ";
        cout << "\n4. Display the total value ";
        cout << "\n5. Quit ";
        cout << "\n\nChoose an option: ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                cart.getItem();
                break;
            case 2:
                cart.removeItem();
                break;
            case 3:
                cart.displayItems();
                break;
            case 4:
                cart.displayTotalValue();
                break;
            case 5:
                break;
            default :
                cout << "Error in input!\n Try Again.\n";
                break;
        }
    }
    while(choice != 5);

    return 0;
}
