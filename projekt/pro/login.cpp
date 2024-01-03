#include <iostream>
#include <vector>

using namespace std;

class User {
public:
    string username;
    string password;

    User(string u, string p){
        username = u;
        password = p;
    }

    User(){
        username = "";
        password = "";
    }
};

User users[10] = {
    User("kasia", "1234"),
    User("szymon", "1234"),
    User("julka", "1234")
};

bool validLogs(string username, string password){
    for (int i = 0; i < 3; i++){
        if (users[i].username == username && users[i].password == password) return true;
    }
    return false;
}

string login(string currentLogin, string currentPassword){

    if (currentLogin == "") {
        return "Enter your login";
    }

    if (currentPassword == "") {
        return "Enter your password";
    }

    if (!validLogs(currentLogin, currentPassword)){
        return "Invalid data, please enter again";
    }


    return "Success";
}

int main()
{
    string currentLogin = "";
    string currentPassword = "";

    cout << "enter login: ";
    cin >> currentLogin;
    cout << "enter password: ";
    cin >> currentPassword;

    string result = login(currentLogin, currentPassword);
    while (result != "Success") {
        cout << result << endl;
        cout << "enter login: ";
        cin >> currentLogin;
        cout << "enter password: ";
        cin >> currentPassword;
        result = login(currentLogin, currentPassword);
    };
    cout << "Success, user has been logged in" << endl;

    
    return 0;
}