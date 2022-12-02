#include <iostream>
#include "ex12.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    ex12 account("Demidov", "12345", 10.0, 5000);
    account.getOwner();
    cout << "" << endl;
    cout << "" << endl;
    account.changeOwnerSurname("Logvinov");
    account.getOwner();
    cout << "" << endl;
    cout << "" << endl;
    account.withdrawMoneyFromAccount(1000);
    account.getOwner();
    cout << "" << endl;
    cout << "" << endl;
    account.depositMoneyToAccount(2000);
    account.getOwner();
    cout << "" << endl;
    cout << "" << endl;
    account.convertAmountToDollars();
    cout << "" << endl;
    cout << "" << endl;
    account.convertAmountInEuros();
    cout << "" << endl;
    cout << "" << endl;
    account.amountInWords();
    return 0;