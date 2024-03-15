#include <stdio.h>


struct Customer {
    int accountNumber;
    char name[50];
    double balance;
};


void printLowBalanceCustomers(struct Customer bank[], int size) {
    printf("Customers with balance below Rs. 1000:\n");
    for (int i = 0; i < size; i++) {
        if (bank[i].balance < 1000.0) {
            printf("Account Number: %d, Name: %s\n", bank[i].accountNumber, bank[i].name);
        }
    }
    printf("\n");
}


void handleTransaction(struct Customer *customer, double amount, int code) {
    if (code == 1) { 
        customer->balance += amount;
        printf("Deposit successful. New balance: Rs. %.2f\n", customer->balance);
    } else if (code == 0) { 
        if (amount > customer->balance) {
            printf("Insufficient balance for withdrawal. Current balance: Rs. %.2f\n", customer->balance);
        } else {
            customer->balance -= amount;
            printf("Withdrawal successful. New balance: Rs. %.2f\n", customer->balance);
        }
    } else {
        printf("Invalid transaction code\n");
    }
}

int main() {
   
    const int MAX_CUSTOMERS = 2;
    
    struct Customer bank[MAX_CUSTOMERS] = {
        {1, "Jaidip", 1500.0},
        {2, "Joydipta", 800.0},
        
    };


    printLowBalanceCustomers(bank, MAX_CUSTOMERS);

   
    int accountNumber;
    double amount;
    int transactionCode;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    struct Customer *customer = NULL;
    for (int i = 0; i < MAX_CUSTOMERS; i++) {
        if (bank[i].accountNumber == accountNumber) {
            customer = &bank[i];
            break;
        }
    }

    if (customer != NULL) {
        printf("Enter transaction amount: ");
        scanf("%lf", &amount);

        printf("Enter transaction code (1 for deposit, 0 for withdrawal): ");
        scanf("%d", &transactionCode);

 
        handleTransaction(customer, amount, transactionCode);
    } else {
        printf("Customer not found with the specified account number.\n");
    }

    return 0;
}
