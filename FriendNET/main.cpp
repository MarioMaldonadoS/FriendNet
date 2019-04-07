#include <iostream>

using namespace std;

void displayMenu();
void checkUser();
void checkConnection();
bool userExistsQ(string name);
int getWeight(string name1, string name2);

int main()
{
    bool loop = true;
    int selection;
    while(loop){
        displayMenu();
        cin >> selection;
        switch(selection){
            case 1:
                checkUser();
                break;
            case 2:
                checkConnection();
                break;
            case 3:
                return 0;
                break;
            default:
                return 0;
                break;
        }
    }
}

void displayMenu(){
    cout << "What do you want to do?\n";
    cout << "1) Check if user exists\n";
    cout << "2) Check connection between users\n";
    cout << "3) Quit\n\n";
}

void checkUser(){
    string name;
    cout << "What user? ";
    cin >> name;
    if(userExistsQ(name))
        cout << name << " does exist\n\n";
    else
        cout << name << " does not exist\n\n";
}

void checkConnection(){
    string name1, name2;
    cout << "What users (separated by spaces)? ";
    cin >> name1 >> name2;
    cout << "The connection from " << name1 << " to " << name2 << " has weight " << getWeight(name1,name2) << "\n\n";
}

bool userExistsQ(string name){
    return true;
}

int getWeight(string name1, string name2){
    return 4;
}
