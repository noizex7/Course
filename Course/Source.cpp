#include "Course.h"

int main()
{
    Course* classList;
    int size;

    cout << "How many classes are you taking this trimester?:\n";
    cin >> size;

    classList = new Course[size];

    cout << "\n\n";
    cin.ignore();

    for (int i = 0; i < size; i++)
    {
        cout << "Class " << i + 1 << endl;

        cin >> classList[i];

        cout << "\n\n";
    }

    cout << setw(15) << left << "Course Name" << setw(15) << left
        << "Course Code" << setw(35) << left << "Instructor" << setw(10)
        << left << "Office Number" << setw(35) << left << "Email";

    for (int i = 0; i < size; i++)
    {
        cout << classList[i] << "\n";
    }

    getchar();

    return 0;
}