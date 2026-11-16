class BankAccount:

    # class attribute
    bank_name = "ABC Bank"
    total_accounts = 0
    account_types = ("Savings", "Current")

    # Constructor
    def __init__(self, name , account_number, balance, account_type):

        if account_type not in BankAccount.account_types:
            raise ValueError("Invalid account type!")

        if balance < 0:
            raise ValueError("Balance Cannot be negative!")

        self.name = name
        self.account_type = account_type
        self.account_number = account_number
        self.balance = balance

        self.transactions = []
        BankAccount.total_accounts +=1

    def deposit(self, amount):
        
        if amount <= 0:
            return "Invalid deposit amount!" 
        self.balance += amount

        transaction = {
            "type" : "Deposit",
            "amount" : amount,
            "balance": self.balance
        }
        self.transactions.append(transaction)
        return f"Successfully deposit Tk {amount}"
      

    def withdraw(self, amount):

        if amount <=0:
            return "Invalid withdrawal amount!"

        if amount > self.balance:
            return "Insufficient balance!"

        self.balance -= amount

        transaction = {
            "type": "Withdraw",
            "amount" : amount,
            "balance": self.balance
        }

        self.transactions.append(transaction)

        return f"Successfully withdrawn Tk{amount}"

    def check_balance(self):
        return self.balance

    def show_transactions(self):
        print(f"\nTransaction History: {self.name}")

        if not self.transactions:
            print("No transaction found.")
            return 
        for transaction in self.transactions:
            print(
                f"{transaction['type']}:"
                f"Tk {transaction['amount']}:"
                f"Balance: Tk {transaction['balance']} :"
            )

    def __repr__(self):
        return (
            f"BankAccount(name = {self.name!r},"
            f"account_number = {self.account_number!r},"
            f"balance = {self.balance!r},"
            f"account_type = {self.account_type!r},"
        )


account1 = BankAccount("Sajib", "ACC101", 50000, "Savings")
account2 = BankAccount("Songket", "ACC101", 50000, "Current")
account3 = BankAccount("Sowrov", "ACC101", 50000, "Savings")

print(account1.deposit(2000))
print(account1.withdraw(1000))

print(account2.deposit(5000))
print(account2.withdraw(3000))

print(account3.deposit(5000))
print(account3.withdraw(3000))


# Check Balance

print("\n Account Balance: ")

print(account1.name, account1.check_balance())
print(account2.name, account1.check_balance())
print(account3.name, account1.check_balance())

# Display Transaction

account1.show_transactions()
account2.show_transactions()
account3.show_transactions()

accounts = [account1, account2, account3]

print("\nAll Bank Accounts:")

for account in accounts:
    print(account)


# --------------------------------
# Class Attributes
# --------------------------------

print("\nBank:", BankAccount.bank_name)

print(
    "Total Accounts:",
    BankAccount.total_accounts
)
