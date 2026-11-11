// Lab 9.4 Option 1
// Reads scores into a dynamic array, finds the average,
// then bubble sorts them in ascending order and prints them

// Aayush Yadav

#include <iostream>
using namespace std;

void sort(float* score, int numScores);
float findAverage(float* score, int numScores);

int main()
{
    float *score = nullptr;
    int numScores;

    cout << "Please input the number of scores" << endl;
    cin >> numScores;

    score = new float[numScores];

    for (int i = 0; i < numScores; i++)
    {
        cout << "Please enter a score" << endl;
        cin >> score[i];
    }

    cout << "The average of the scores is " << findAverage(score, numScores) << endl;

    sort(score, numScores);

    cout << endl << "Here are the scores in ascending order" << endl;
    for (int i = 0; i < numScores; i++)
        cout << score[i] << endl;

    delete [] score;

    return 0;
}

float findAverage(float* score, int numScores)
{
    float sum = 0;

    for (int i = 0; i < numScores; i++)
        sum = sum + score[i];

    return sum / numScores;
}

// bubble sort, smallest to largest
void sort(float* score, int numScores)
{
    float temp;
    bool swapped;

    do
    {
        swapped = false;
        for (int i = 0; i < numScores - 1; i++)
        {
            if (score[i] > score[i + 1])
            {
                temp = score[i];
                score[i] = score[i + 1];
                score[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}
