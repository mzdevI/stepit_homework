namespace HW_21_09_2023_PART_1;

public class BankAccount
{
    public double Balance { get; private set; }
    public string AccountName { get; private set; }

    public delegate void AccountOperationDelegate(double amount);

    private AccountOperationDelegate? _accountOperation;

    public BankAccount(string accountName)
    {
        AccountName = accountName;
    }

    public void Deposit(double amount)
    {
        if (amount < 1) throw new ArgumentException("Deposit amount must be greater than 0", nameof(amount));
        Balance += amount;
        _accountOperation?.Invoke(amount);
    }

    public void Withdraw(double amount)
    {
        if (Balance < amount) throw new ArgumentException("Insufficient Balance", nameof(amount));
        if (amount < 1) throw new ArgumentException("Withdraw amount must be greater than 0", nameof(amount));
        Balance -= amount;
        _accountOperation?.Invoke(-amount);
    }
    
    public void SetAccountOperation(AccountOperationDelegate operationDelegate)
    {
        _accountOperation = operationDelegate;
    }
}