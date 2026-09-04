#include <iostream>
#include <string>
using namespace std;

#define MAX_SIZE 5

template <class t>
class Stack
{
    t a[MAX_SIZE];
    int top;
public:
    Stack()
    {
        top=-1;
    }
    void clear()
    {
        top=-1;
    }
    void push(t v)
    {
        if(top==MAX_SIZE-1)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            a[top]=v;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            cout<<"Popped element: "<<a[top]<<endl;
            top--;
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout<<"Stack: ";
            for(int i=top;i>=0;i--)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
};

template <class t>
void menu(Stack<t> &x)
{
    int ch;
    t v;
    while(true)
    {
        cout<<"\n1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display Stack"<<endl;
        cout<<"4. Main Menu"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        if(ch<1||ch>4)
        {
            cout<<"Invalid choice. Enter a valid option."<<endl;
            continue;
        }
        if(ch==1)
        {
            cout<<"Enter element: ";
            cin>>v;
            x.push(v);
        }
        else if(ch==2)
        {
            x.pop();
        }
        else if(ch==3)
        {
            x.display();
        }
        else
        {
            break;
        }
    }
}

int main()
{
    Stack<int> is;
    Stack<char> cs;
    Stack<float> fs;
    Stack<double> ds;
    Stack<string> ss;

    bool i=0;
    bool c=0;
    bool f=0;
    bool d=0;
    bool s=0;

    int ch;
    int in=0;
    int temp;

    while(true)
    {
        cout<<"\n========================="<<endl;
        cout<<"        MAIN MENU"<<endl;
        cout<<"========================="<<endl;
        cout<<"1. Integer Stack"<<endl;
        cout<<"2. Character Stack"<<endl;
        cout<<"3. Float Stack"<<endl;
        cout<<"4. Double Stack"<<endl;
        cout<<"5. String Stack"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;

        if(ch<1||ch>6)
        {
            in++;
            cout<<"Invalid choice."<<endl;
            if(in==3)
            {
                cout<<"Maximum invalid choices reached."<<endl;
                cout<<"Program terminated."<<endl;
                break;
            }
            continue;
        }

        in=0;

        if(ch==6)
        {
            cout<<"Program terminated."<<endl;
            break;
        }

        if(ch==1)
        {
            if(i)
            {
                cout<<"\nInteger stack already exists."<<endl;
                cout<<"1. Continue with old stack"<<endl;
                cout<<"2. Create new stack"<<endl;
                cout<<"Enter your choice: ";
                cin>>temp;
                if(temp==2)
                    is.clear();
            }
            i=1;
            menu(is);
        }
        else if(ch==2)
        {
            if(c)
            {
                cout<<"\nCharacter stack already exists."<<endl;
                cout<<"1. Continue with old stack"<<endl;
                cout<<"2. Create new stack"<<endl;
                cout<<"Enter your choice: ";
                cin>>temp;
                if(temp==2)
                    cs.clear();
            }
            c=1;
            menu(cs);
        }
        else if(ch==3)
        {
            if(f)
            {
                cout<<"\nFloat stack already exists."<<endl;
                cout<<"1. Continue with old stack"<<endl;
                cout<<"2. Create new stack"<<endl;
                cout<<"Enter your choice: ";
                cin>>temp;
                if(temp==2)
                    fs.clear();
            }
            f=1;
            menu(fs);
        }
        else if(ch==4)
        {
            if(d)
            {
                cout<<"\nDouble stack already exists."<<endl;
                cout<<"1. Continue with old stack"<<endl;
                cout<<"2. Create new stack"<<endl;
                cout<<"Enter your choice: ";
                cin>>temp;
                if(temp==2)
                    ds.clear();
            }
            d=1;
            menu(ds);
        }
        else if(ch==5)
        {
            if(s)
            {
                cout<<"\nString stack already exists."<<endl;
                cout<<"1. Continue with old stack"<<endl;
                cout<<"2. Create new stack"<<endl;
                cout<<"Enter your choice: ";
                cin>>temp;
                if(temp==2)
                    ss.clear();
            }
            s=1;
            menu(ss);
        }
    }
    return 0;
}
