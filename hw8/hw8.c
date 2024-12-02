#include <stdio.h>
// Bubble Sort Fonksiyonu
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Değerleri takas et
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Dizileri Karşılaştırma Fonksiyonu
int arraysAreEqual(int A[], int B[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (A[i] != B[i])
            return 0; // Herhangi bir eleman farklıysa eşit değildir
    }
    return 1; // Tüm elemanlar eşitse
}

int main()
{
    char buffer[256];
    int A[5], B[5];
    int i = 0, a = 0, b = 0, num = 0;

    // A Dizisini Okuma

    printf(" Enter 5 elements for array A: \n");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        printf("Hata: Girdi okunamadi.\n");
        return 1;
    }

    // A Dizisini İşleme
    while (buffer[a] != '\n' && buffer[a] != '\0')
    {
        if (buffer[a] >= '0' && buffer[a] <= '9')
        {
            num = num * 10 + (buffer[a] - '0');
        }
        else if (buffer[a] == ' ')
        {
            A[i++] = num;
            num = 0;
        }
        else
        {
            printf("Invalid input: Only integers are allowed.");
            return 1;
        }
        a++;
    }
    if (num > 0)
    {
        A[i++] = num;
    }

    if (i != 5)
    {
        printf("You did not enter 5 elements");
        return 0;
    }

    // B Dizisini Okuma
    printf(" Enter 5 elements for array B: \n");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        printf("Hata: Girdi okunamadı.\n");
        return 1;
    }

    // B Dizisini İşleme
    b = 0;
    num = 0;
    int j = 0; // B dizisi için sayaç
    while (buffer[b] != '\n' && buffer[b] != '\0')
    {
        if (buffer[b] >= '0' && buffer[b] <= '9')
        {
            num = num * 10 + (buffer[b] - '0');
        }
        else if (buffer[b] == ' ')
        {
            B[j++] = num;
            num = 0;
        }
        else
        {
            printf("You did not enter 5 elements");
            return 1;
        }
        b++;
    }
    if (num > 0)
    {
        B[j++] = num;
    }

    if (j != 5)
    {
        printf("Enter 5 elements!");
        return 0;
    }

    // Dizileri Sıralama
    bubbleSort(A, i);
    bubbleSort(B, j);

    // Eşitlik Kontrolü
    if (arraysAreEqual(A, B, i))
    {
        printf("Yes, array B can be made equal to array A.\n");
    }
    else
    {
        printf("No, array B cannot be made equal to array A.\n");
    }

    return 0;
}
