#include <iostream>
#include <sstream>
#include <queue>
#include <stack>

using namespace std;

int strtoi (string str) {
    int output = 0;
    for (int i = 0; i < str.length(); i++) {
        output = (output*10) + str[i] - '0';
    }
    return output;
}

int main () {

    queue<int> lista1;
    priority_queue<int, vector<int>, greater<int> > lista2;
    stack<int> lista3;
    string d, data;

    // getline(cin, data);

    // while (data != '#') {
    //     stringstream ss;
    //     ss << data;
    //     while (ss >> d){

    //     }
    //     getline(cin, data);
    // }
    return 0;
}