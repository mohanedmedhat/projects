Automated Teller Machine (ATM) Project
This project is an implementation of an Automated Teller Machine (ATM) system using C++. It allows users to perform various banking transactions such as checking balance, withdrawing money, and depositing money. The project includes a simple user interface and password-based authentication for different users.

Features
Password-based authentication for different users
User-specific account balance
Inquire balance
Withdraw money
Deposit money
Error handling for insufficient balance
Capturing the card after three failed attempts
Clean and organized code structure
Getting Started
To run the ATM project, follow these steps:

Make sure you have a C++ compiler installed on your machine.

Download the source code files and save them with the ".cpp" extension.

Compile the source code using the C++ compiler. For example, you can use the following command in the terminal:

Copy code
g++ atm.cpp -o atm
This will compile the code and generate an executable file named "atm" (or any other name you specified).

Run the executable file by executing the following command:

bash
Copy code
./atm
This will start the ATM program and display the user interface in the console.

Usage
Upon running the program, you will be greeted with a welcome message and a password prompt.

Enter the PIN code for the user you want to access. The available PIN codes and corresponding users are displayed in the console.

If you enter the correct PIN code, you will be prompted to enter the user's password.

Enter the correct password for the user. If the password is correct, you will gain access to the user's account.

Once logged in, you will see the main screen of the ATM with a list of available options.

Enter the option number corresponding to the action you want to perform:

Option 1: Inquire Balance - Check the account balance.
Option 2: Withdraw - Withdraw money from the account.
Option 3: Deposit - Deposit money into the account.
Option 4: Quit - Exit the program.
Follow the prompts for each option and enter the required information (e.g., withdrawal amount, deposit amount).

After completing a transaction, you will be taken back to the main screen. You can choose another option or select "Quit" to exit the program.

If you enter an invalid option or make a mistake, the program will display an error message and allow you to try again.

After three consecutive failed attempts to enter the correct password, the program will display a message indicating that the card is captured.

You can log in again with a different user by following the same steps.

Contributing
This project is for educational purposes and is not actively maintained. Therefore, contributions are not expected. However, feel free to fork the project and modify it according to your needs.

License
This project is provided under the MIT License. You can freely use, modify, and distribute the code. See the LICENSE file for more details.

Acknowledgments
The project code provided in this README is based on an existing implementation and has been modified for clarity and conciseness. Original credits for the code go to the original author.
