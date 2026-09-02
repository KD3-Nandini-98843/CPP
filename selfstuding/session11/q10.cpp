#include <iostream>
using namespace std;
class Matrix
{
private:
    int a[2][2];
public:
    void accept()
    {
        cout << "Enter 4 elements:\n";
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator+(Matrix m)
    {
        Matrix result;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                result.a[i][j] =
                    a[i][j] + m.a[i][j];
            }
        }
        return result;
    }
    Matrix operator-(Matrix m)
    {
        Matrix result;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                result.a[i][j] =
                    a[i][j] - m.a[i][j];
            }
        }

        return result;
    }
    Matrix operator*(Matrix m)
    {
        Matrix result;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                result.a[i][j] = 0;
                for(int k = 0; k < 2; k++)
                {
                    result.a[i][j] +=
                        a[i][k] * m.a[k][j];
                }
            }
        }
        return result;
    }
};
int main()
{
    Matrix m1, m2, result;
    cout << "Matrix 1:\n";
    m1.accept();
    cout << "Matrix 2:\n";
    m2.accept();
    cout << "\nAddition:\n";
    result = m1 + m2;
    result.display();
    cout << "\nSubtraction:\n";
    result = m1 - m2;
    result.display();
    cout << "\nMultiplication:\n";
    result = m1 * m2;
    result.display();
    return 0;
}