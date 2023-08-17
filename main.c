#include <stdio.h>
#include <stdlib.h>

int accountbalance = 200;
int wallet = 0;
int num;
int withdrawalAmount;
int depositAmount;

int loop = 0;

int main() {
  while (loop == 0) {
    printf("1. Check account balance\n");
    printf("2. Check wallet balance\n");
    printf("3. Withdraw from account\n");
    printf("4. Deposit to account\n");
    printf("5. To quit\n");
    printf("\n");

    printf("Enter number: ");
    scanf(" %d", &num);

    if (num == 5) {
      loop = 1;
      break;
    }

    switch (num) {
    case 1:
      printf("Account balance: %d\n", accountbalance);
      break;
    case 2:
      printf("Money in your wallet: %d\n", wallet);
      break;
    case 3:
      printf("Enter the amount you want to withdraw: ");
      scanf("%d", &withdrawalAmount);
      if (withdrawalAmount <= accountbalance && withdrawalAmount > 0) {
        accountbalance -= withdrawalAmount;
        wallet += withdrawalAmount;
        printf("Withdrawal successful.\n");
      } else {
        printf("Withdrawal failed");
      }
      break;
    case 4:
      printf("Enter the amount you want to deposit: ");
      scanf("%d", &depositAmount);
      if (depositAmount > 0) {
        accountbalance += depositAmount;
        wallet -= depositAmount;
        printf("Deposit successful\n");
      } else {
        printf("Deposit failed\n");
      }
      break;
    case 5:
      break;
    default:
      printf("Error!\n");
    }
  }
  return 0;
}