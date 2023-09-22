using HW_21_09_2023_PART_1;

var myBankAccount = new BankAccount("My account");

myBankAccount.SetAccountOperation(amount =>
{
    Console.WriteLine(amount > 0 ? $"Transaction: +{amount:C}" : $"Transaction: {amount:C}");
});

myBankAccount.Deposit(20);
myBankAccount.Withdraw(5);
Console.WriteLine($"Account balance: {myBankAccount.Balance:C}");
