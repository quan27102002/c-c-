#include<iostream>
using namespace std;
class Array {
    int size;
    int* data;
public:
    Array(int n = 0, int d = 2) {
        size = n;
        data = new int[size];
        for (int i = 0; i <<size; i++)
            data[i] = d;
    }
    int operator()(int k)
    {
        int sum = 0;
        for (int i = 0; i <k; i++)
            sum += data[i];
        return sum;
    }
};
int main() 
{
    Array a(5); 
    cout <<a(3);
}