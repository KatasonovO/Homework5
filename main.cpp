#include <iostream>

using namespace std;


int add(int a, int b)
{
    return a + b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a/b;
    }else
    {
        cout << "Division by zero." << endl;
        return 0;
    }
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

typedef int (&func_t)(int, int);

struct operation_t {
        char operation;
        func_t func;
};

operation_t operations[]
{
    {'a', add},
    {'d', divide},
    {'m', multiply},
    {'s', subtract},
};



int main()
{
    int a, b;

    cout << "Input a, b : " ;
    cin >> a >> b;

    for (operation_t var : operations)
    {
        string s;
        switch (var.operation)
        {
            case 'a':
                s = "a + b";
            break;
            case 'd':
                s = "a / b";
            break;
            case 'm':
                s = "a * b";
            break;
            case 's':
                s = "a - b";
            break;
        }
        cout << "Result of " << s << " equal " << var.func(a, b) << endl;
    }
    return 0;
}
