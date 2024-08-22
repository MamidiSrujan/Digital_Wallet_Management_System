This C++ program simulates simple bank transactions between users. The program initializes user balances, processes transactions, and outputs the final balances sorted in descending order.

## Features

- **User Balance Initialization**: Initializes the balance of each user based on input.
- **Transaction Handling**: Handles transactions between users, ensuring that transfers only occur if the sender has sufficient funds.
- **Balance Sorting**: Outputs the final balances of all users in descending order of their balance. If two users have the same balance, they are sorted by user ID.

## Usage

### Input Format

1. **Initial Balances:**
   - The first line contains an integer `N`, the number of users.
   - The next `N` lines contain two integers each: `user` (the user ID) and `bal` (the initial balance for that user).
   
2. **Transactions:**
   - The next line contains an integer `T`, the number of transactions.
   - The following `T` lines contain three integers each: `from` (the sender's user ID), `to` (the receiver's user ID), and `amount` (the amount to be transferred).

### Output

- For each transaction, the program outputs `"Success"` if the transaction was completed or `"Failure"` if the sender had insufficient funds.
- After processing all transactions, the program outputs the user IDs and their final balances, sorted by balance in descending order, and by user ID in ascending order for ties.
