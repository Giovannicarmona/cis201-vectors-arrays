#include<iostream>
#include<cstdlib>
#include<ctime>



void fill_array(int array[],int size)
{
    for(int i=0;i < size;i++)
        array[i] = rand() % 10 + 1;
}

void print_array(int array[],int size)
{
    for(int i=0;i < size;i++)
        std::cout << array[i] << std::endl;
}

int main()
{
    srand(time(0));

    int array[50];

    fill_array(array,50);
    print_array(array,10000);

    return 0;
}












