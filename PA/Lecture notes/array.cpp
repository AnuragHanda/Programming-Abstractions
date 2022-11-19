#include <iostream>
using namespace std;

int main()
{
    int input = 0;
    cout << "How many elements do you want to add?";
    cin >> input;
    const int val = input;
    double foo[val];
    // operations to be handled by this code
    enum arrayoperations
    {
        traverse = 1,
        insert,
        search,
        deleteElement
    };

    do
    {
        int options = 0;
        cout << "Choose any of the following operations:";
        cout << "1. Traverse Array";
        cout << "2. Insert at a location";
        cout << "3. Search element in array";
        cout << "4. Delete Element from array";
        cin >> options;
        int valueInput = 0;
        char con = 'y';
        switch (options)
        {
        case traverse:
            int size;
            cout << size;
            cin >> size;
            for (int i = 0; i < size; i++)
            {
                if(foo[i]==-34.222224444){
                cout << 0 << " ";
                }
                else {
                cout<<foo[i]<<" "<<endl;
                }
            }

            break;
        case insert:
            int loc = -1;
            cout << "enter no to find " << val - 1;
            cin >> loc;
            cout << "input at loc index";
            cin >> foo[loc];
            break;
        case search:
            cout << "which element to search";
            cin >> valueInput;
            for (int counter = 0; counter < val; counter++)
            {
                if (foo[counter] == valueInput)
                {
                    cout << counter << endl;
                }
            }
            break;
        case deleteElement:
            cout << "which element to delete";
            cin >> valueInput;
            for (int counter = 0; counter < val; counter++)
            {
                if (foo[counter] == valueInput)
                {
                    foo[counter]=-1;
                }
            }
            break;
        default:
            cout << "Invalid operation";
        }
        // cout << "wanna continue";
        // cin >> y;

        /// add logic to exit or continue the loop
    } while (1);

    // logic for input
    for (int counter = 0; counter < val; counter++)
    {
        cout << "Enter the value for index " << counter << " : ";
        cin >> foo[counter];
    }
    // logic for print/traverse and array
    for (int counter = 0; counter < val; counter++)
    {
        cout << "value for index " << foo[counter] << endl;
    }
    cout << "Enter the value to be deleted:";

    return 0;
}
