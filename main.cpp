#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int display(int tab[], int tabSize)
{
    for (int i = 0; i < tabSize; i++)
    {
        cout << tab[i] << ",";
    }
    cout << endl;
}

int compare(const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int tab[] = {3, 1, 3, 3, 1, 3, 5, 4, 1, 1, 4, 1};
    int tabSize = sizeof(tab) / sizeof(tab[0]);

    cout << "Przed sortowaniem: ";
    display(tab, tabSize);

    sort(tab, tab + tabSize);

    cout << "Posortowane: ";
    display(tab, tabSize);

    cout << endl;
    cout << "Druga tablica" << endl;

    int tab2[] = {5, 4, 3, 3, 2, 5, 4, 1, 1, 2};
    int tab2Size = sizeof(tab2) / sizeof(tab2[0]);

    cout << "Przed sortowaniem: ";
    display(tab2, tab2Size);

    qsort(tab2, 10, sizeof(int), compare);

    cout << "Po srotwoaniu: ";
    display(tab2, tab2Size);

    return 0;
}
