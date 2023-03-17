#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    int result;

    int num = 0;


    cin >> n;


    result = n * n;

    string nToString = std::to_string(n);
    string resultToString = std::to_string(result);

    while (nToString.length() != num)
    {
        int i = 0;
        while (i < nToString.length())
        {
            for (int j = 0; j < resultToString.length(); j++)
            {
                if (nToString[i] == resultToString[j])
                {
                    num++;
                    i++;
                    break;
                }
            }
        }

        n--;
    }

    cout << "num : " << num << endl;
    cout << "result : " << result << endl;
    cout << "n : " << n << endl;

    return 0;
}