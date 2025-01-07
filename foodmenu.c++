#include <iostream>
#include <string>

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "****************************" << endl;
    cout << "       Welcome to Our Restaurant" << endl;
    cout << "****************************" << endl;
    cout << "1. Burger - $5.99" << endl;
    cout << "2. Pizza - $8.99" << endl;
    cout << "3. Salad - $4.99" << endl;
    cout << "4. Sandwich - $6.49" << endl;
    cout << "5. Pasta - $7.99" << endl;
    cout << "6. Exit" << endl;
    cout << "****************************" << endl;
    cout << "Please choose an option (1-6): ";
}

int main() {
    int choice;
    bool running = true;
    double totalPrice = 0.0;

    // Display menu and take user input in a loop
    while (running) {
        displayMenu();
        cin >> choice;

        // Process the user's choice
        switch (choice) {
            case 1:
                cout << "You selected Burger - $5.99" << endl;
                totalPrice += 5.99;
                break;
            case 2:
                cout << "You selected Pizza - $8.99" << endl;
                totalPrice += 8.99;
                break;
            case 3:
                cout << "You selected Salad - $4.99" << endl;
                totalPrice += 4.99;
                break;
            case 4:
                cout << "You selected Sandwich - $6.49" << endl;
                totalPrice += 6.49;
                break;
            case 5:
                cout << "You selected Pasta - $7.99" << endl;
                totalPrice += 7.99;
                break;
            case 6:
                running = false;  // Exit the loop
                break;
            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
        }

        // Ask if the user wants to add another item
        if (choice != 6) {
            char more;
            cout << "Would you like to add another item? (y/n): ";
            cin >> more;
            if (more == 'n' || more == 'N') {
                running = false;
            }
        }
    }

    // Display the total price
    cout << "Your total bill is: $" << totalPrice << endl;
    cout << "Thank you for dining with us!" << endl;

    return 0;
}
2