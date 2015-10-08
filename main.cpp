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

int queuePop(queue<int> lista1, int a, int b ){


}

int priority_queuePop(priority_queue<int, vector<int>, greater<int>> lista2, int a, int b){

}

int stackPop(stack<int> lista3, int a, int b) {
    
}

int main () {
    int a, b;
    int res1;
    queue<int> lista1;
    priority_queue<int, vector<int>, greater<int> > lista2;
    stack<int> lista3;
    string d, data;

    getline(cin, data);

    while (data != "#") {
        stringstream ss;
        ss << data;
        while (ss >> d) {
            if (d == "+") {
                queuePop(lista1, a, b);
                a = lista1.front();
                lista1.pop();
                b = lista1.front();
                lista1.pop();
                res1 = a + b;
            }

            else if (d == "-") {
                a = lista1.front();
                lista1.pop();
                b = lista1.front();
                lista1.pop();
                res1 = a - b;
            }
            else if (d == "*") {
                a = lista1.front();
                lista1.pop();
                b = lista1.front();
                lista1.pop();
                res1 = a * b;
            }
            else if (d == "/") {
                a = lista1.front();
                lista1.pop();
                b = lista1.front();
                lista1.pop();
                res1 = a / b;
            }
            else {
                lista1.push(strtoi(d));
            }

        }
        getline(cin, data);
    }
    cout << res1 << endl;
    return 0;
}
