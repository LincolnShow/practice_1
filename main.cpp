#include <iostream>
#include <list>
#include <cassert>
#include <stack.h>
#include <string>

using namespace std;
#define DEBUG

int main(/*int argc, char *argv[]*/)
{
    Stack<string> s;
#ifdef DEBUG
    assert(s.size() == 0);
#endif
    try{
        s.pop();
    } catch(string e){
        cout << e << endl;
    }

    s.push("Hello11");
    s.push("Hello22");
    s.push("Hello33");
#ifdef DEBUG
    assert(s.size() == 3);
#endif
    string str = s.getElement();
    s.pop();
#ifdef DEBUG
    assert(s.size() == 2);
#endif
    cout << "String: " << str << endl;
    s.clear();
#ifdef DEBUG
    assert(s.size() == 0);
#endif
    return 0;
}
