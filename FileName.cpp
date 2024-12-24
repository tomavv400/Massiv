#include<iostream>
#include<cstdlib>




int main()
{
	setlocale(LC_ALL, "ru");

	std::cout << "			Задача 1";

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << "\n" << "Max: " << max << "\n" << "Min: " << min;
    system("pause");



    system("cls");


    std::cout << "            Задача 2";//её я чето не особо поняла,сделала как поняла


    srand(time(NULL));
    int ar[10];
    std::cout << "\n"<<"Ограничение(до 10) : ";
    int n, sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        ar[i] = rand() % 10+1;
    }
    for (int i = 0;i < n;i++)
    {
        std::cout << ar[i] << "\t";
    }
    std::cout << "\n";
    int one, two;
    std::cout << "one = ";
    std::cin >> one;
    std::cout << "two = ";
    std::cin >> two;
    for (int i = 0; i < n; i++) {
        if (ar[i] < one)
        {
            sum += ar[i];
        }
        if (ar[i] > two)
        {
            sum += ar[i];
        }
    }

    std::cout << sum;
    system("pause");
    system("cls");

    std::cout << "        Задача 3";



    const int month{ 12 }; 
    int income[month]{ 1,2,3,4,5,6,7,8,9,10,11,12 }; 
    int monthStart{ 0 }; 
    int monthEnd{ 0 }; 

    for (int i{ 0 }; i < month; ++i)
    {
        std::cout << "Доход за: ";

        if (i == 0) 
        { 
            std::cout <<"\n" << "January: "; 
        }
        else if (i == 1) 
        { 
            std::cout << "February: "; 
        }
        else if (i == 2) 
        { 
            std::cout << "March: "; 
        }
        else if (i == 3) 
        { 
            std::cout << "April: ";
        }
        else if (i == 4)
        { 
            std::cout << "May: ";
        }
        else if (i == 5) 
        { 
            std::cout << "June: "; 
        }
        else if (i == 6)
        { 
            std::cout << "July: ";
        }
        else if (i == 7)
        { 
            std::cout << "August: ";
        }
        else if (i == 8) 
        { 
            std::cout << "September: "; 
        }
        else if (i == 9) 
        { 
            std::cout << "October: ";
        }
        else if (i == 10) 
        { 
            std::cout << "November: ";
        }
        else 
        { 
            std::cout << "December: ";
        }

        std::cin >> income[i];
    }
    std::cout << "\nВведите диапазон за который вы бы хотели посмотреть доход:\n";
    std::cout << "Введите первый месяц: ";
    std::cin >> monthStart;
    std::cout << "Введите последний месяц: ";
    std::cin >> monthEnd;

    

    monthStart--; 

    int maxI{ monthStart }; 
    int minI{ monthStart };

    for (int i{ monthStart }; i < monthEnd; ++i)
    {

        if (income[i] > income[maxI])
        {
            maxI = i;
        }
        else if (income[i] < income[minI])
        {
            minI = i;
        }
    }

    std::cout << "\nМинимум: " << minI + 1 << '\n'; 
    std::cout << "Максимум: " << maxI + 1 << '\n';

    return 0;
}






