// Don't forget to upgrade and test your code!
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


struct stuffsData {
    string name;
    string category;
    string* ptr = &name;
};

struct stuffs {
    stuffsData stuffsId;
    float price;
    int total;
};

vector<stuffs> soldStuffs;

string option[5] = {
    {"Create"},
    {"Read Stuffs Id"},
    {"Update"},
    {"Delete"},
    {"Exit"}
};

int choice;
string ynOption;
int stuffsCount = soldStuffs.size();
void createStuffs ();
void readStuffs ();
void updateStuffs ();
void deleteStuffs ();
void exitProgram ();

// Fuction to choose CRUD Option
void choiceOption () {
    // choice
    switch (choice) {
        case 1:
        createStuffs();
        break;
        case 2:
        readStuffs();
        break;
        case 3:
        updateStuffs();
        break;
        case 4:
        deleteStuffs();
        break;
        case 5:
        exitProgram();
        break;
        default:
        cout << "Invalid choice." << endl;
    }
};

// Function to display the option of CRUD
void storeDatabase () {
    cout << "===============" << endl;
    cout << "Welcome to our database, Admin." << endl;
    cout << "Feel free to choose one of these." << endl;
    int optionCount = sizeof(option) / sizeof(option[0]);
    for (int j = 1; j <= optionCount; j++) {
        cout << j << ". " << option[j-1] << endl;
    };
    cout << "What do you want to see first: ";
    cin >> choice;
    cout << "===============" << endl;
    choiceOption();
};

int main () {
    storeDatabase();
    cout << '\n' << "===============" << endl;
    cout << "Do you really want to continue managing the database (y/n): ";
    cin >> ynOption;
    if (cin.fail() || (ynOption != "y" && ynOption != "n" && ynOption != "yes" && ynOption != "no")) {
        cout << "Please, input the right command.";
    }
    else if (ynOption == "y" || ynOption == "yes") {
        storeDatabase();
        return main();
    }
    else if (ynOption == "n" || ynOption == "no") {
        cout << "Thank you for using our database." << endl;
    }
    cout << "Program Ended." << endl;
    cout << "===============" << endl;
    return 0;
}



// Function to create the element inside vector soldStuffs
void createStuffs () {
    cout << "There is/are " << stuffsCount << " stuffs in the database." << endl;
    cout << "Do you want to add stuffs (y/n): ";
    cin >> ynOption;
    if (cin.fail() || (ynOption != "y" && ynOption != "n" && ynOption != "yes" && ynOption != "no")) {
        cout << "Please, input the right command.";
    }
    else if (ynOption == "y" || ynOption == "yes") {
        stuffs temp;
        // Why do we need a temporary variable (temp)?
        // Because we cannot directly insert data into the vector
        // We have to insert the data into a temporary variable (temp)

        // Then we can insert the data from the temporary variable (temp) into the vector
        // Using the function push_back()

        for (int i = -1; i < stuffsCount; i++) {
            cout << "How many items do you want to add: ";
            cin >> temp.total;
            cout << "Input item name: ";
            getline(cin >> ws, temp.stuffsId.name);
            // ws is used to ignore leading whitespace characters
            cout << "Input item category: ";
            getline(cin >> ws, temp.stuffsId.category);
            cout << "Input item price: ";
            cin >> temp.price;
            soldStuffs.push_back(temp);
        }
    }
    else if (ynOption == "n" || ynOption == "no") {
        cout << "Thank you for using our database." << endl;
    }
};



// function to read memory address of soldStuffs vector
void readStuffs () {
    if (soldStuffs.empty()) {
        cout << "There's no item in our database.";
    }
    else {
        cout << "There are " << stuffsCount << " items in our database." << endl;
        cout << "Here are the items in our database: " << endl;
        for (int k = 0; k <= stuffsCount; k++) {
            cout << "Item name: " << soldStuffs[k].stuffsId.name << endl;
            cout << "Item category: " << soldStuffs[k].stuffsId.category << endl;
            cout << "Item price: " << soldStuffs[k].price << endl;
            cout << "Item stock: " << soldStuffs[k].total << endl;
            cout << "Memory address of item name: " << soldStuffs[k].stuffsId.ptr << endl;
        }
    }
};




// Function to update the element inside vector soldStuffs
void updateStuffs () {
    if (soldStuffs.empty()) {
        cout << "There's no item in our database.";
    }
    else {
        int itemIndex;
        cout << "There are " << stuffsCount << " items in our database." << endl;
        cout << "Here are the items in our database: " << endl;
        for (int m = 0; m <= stuffsCount; m++) {
            cout << '\t' << m+1 << ". " << soldStuffs[m].stuffsId.name << endl;
            cout << '\t' << m+1 << ". " << soldStuffs[m].stuffsId.category << endl;
            cout << '\t' << m+1 << ". " << soldStuffs[m].price << endl;
            cout << '\t' << m+1 << ". " << soldStuffs[m].total << endl;
        }

        cout << "===============" << endl;
        cout << "Enter the index of the item you want to update (1 to " << stuffsCount + 1<< "): ";
        cin >> itemIndex;

        if (itemIndex < 1 || itemIndex > stuffsCount + 1) {
            cout << "Invalid index." << endl;
            return;
        }

        cout << "Updating item at index " << itemIndex << endl;
        cout << "Input new item name: ";
        cin >> soldStuffs[itemIndex-1].stuffsId.name;
        cout << "Input new item category: ";
        cin >> soldStuffs[itemIndex-1].stuffsId.category;
        cout << "Input new item price: ";
        cin >> soldStuffs[itemIndex-1].price;
        cout << "Input new item stock: ";
        cin >> soldStuffs[itemIndex-1].total;

        cout << "Item updated successfully." << endl;
    }
};



// Function to delete the element inside vector soldStuffs
void deleteStuffs () {
    if (soldStuffs.empty()) {
        cout << "There's no item in our database.";
    }
    else {
        int itemIndex1;
        for (int n = 0; n <= stuffsCount; n++) {
            cout << '\t' << n+1 << ". " << soldStuffs[n].stuffsId.name << endl;
            cout << '\t' << n+1 << ". " << soldStuffs[n].stuffsId.category << endl;
            cout << '\t' << n+1 << ". " << soldStuffs[n].price << endl;
            cout << '\t' << n+1 << ". " << soldStuffs[n].total << endl;
        }
        cout << "Enter the index of the item you want to delete (1 to " << stuffsCount + 1 << "): ";
        cin >> itemIndex1;

        if (itemIndex1 < 1 || itemIndex1 > stuffsCount + 1) {
            cout << "Invalid index." << endl;
            return;
        }
        soldStuffs.erase(soldStuffs.begin() + (itemIndex1 - 1));
        // Function of begin() returns an iterator pointing to the first element of the vector
        cout << "Item deleted successfully." << endl;
    }
};


void exitProgram () {
    cout << "Thank you for using our database." << endl;
    cout << "Program Ended." << endl;
    exit(0);
    // exit(0) is used to terminate the program immediately
    // Why do we use 0?
    // Because 0 indicates successful termination
    // If we use a non-zero value, it indicates an error occurred
};