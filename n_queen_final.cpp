#include <iostream>
#include <conio.h>
#include <chrono>

using namespace std::chrono;
using namespace std;

int n = 0;
int array[40];
int temp = 0;
int count = 0;

void permute(int index = 0)
{

    for (int i = index; i < n; i++)
    {

        for (int k = 0; k < index; k++)
        {
            if (array[i] == array[k] + (index - k) or array[i] == array[k] - (index - k))
            {
                goto label2;
            }
        }

        temp = array[index];
        array[index] = array[i];
        array[i] = temp;

        if (index == n - 2)
        {
            for (int k = 0; k < index + 1; k++)
            {
                if (array[index + 1] == array[k] + (index + 1 - k) or array[index + 1] == array[k] - (index + 1 - k))
                {

                    goto label;
                    // continue;
                }
            }

            for (int i = 0; i < n; i++)
                cout << array[i] << ",";
            cout << endl;
            count++;
            goto label;
        }

        permute(index + 1);

    label:

        // swap(index,i)
        temp = array[index];
        array[index] = array[i];
        array[i] = temp;
    label2:
        temp = 0;
    }
}

int main()
{
    n = 5;
    cout << "enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        array[i] = (i );
    }

    auto start = high_resolution_clock::now();
    permute();
    cout << count << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime taken by function : " << duration.count() << " microseconds";
}