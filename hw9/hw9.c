#include <stdio.h>

#define SIZE 27 // 3x3x3 matrisin toplam eleman sayısı

// Fonksiyon prototipleri
int calculate_mean(int arr[], int size);
int calculate_median(int arr[], int size);
int find_min(int arr[], int size);
int find_max(int arr[], int size);
int calculate_mode(int arr[], int size);
int count_frequency(int arr[], int size, int value);
void sort_array(int arr[], int size);

int main() {
    // 3x3x3 matris
    int cube[3][3][3] = {
        {{5, 5, 12}, {13, 15, 7}, {10, 5, 13}},
        {{18, 10, 15}, {7, 10, 15}, {12, 12, 10}},
        {{12, 7, 15}, {10, 12, 15}, {10, 10, 12}}
    };

    // Matris elemanlarını tek bir diziye aktarma
    int flat_array[SIZE], index = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                flat_array[index++] = cube[i][j][k];
            }
        }
    }

    // Hesaplamalar
    int mean = calculate_mean(flat_array, SIZE);
    int median = calculate_median(flat_array, SIZE);
    int min = find_min(flat_array, SIZE);
    int max = find_max(flat_array, SIZE);
    int mode = calculate_mode(flat_array, SIZE);

    // Print results
    printf("1. Mean: %d\n", mean);
    printf("2. Median: %d\n", median);
    printf("3. Range: [%d,%d]\n",min,max);
    printf("4. Mode: %d \n", mode);
    printf("5. Enter a weigth to calculate its frequency: ");
    int search_value;
    scanf("%d", &search_value);
    int frequency = count_frequency(flat_array, SIZE, search_value);
    printf("5. The value %d appears %d times in the cube.\n", search_value, frequency);

    return 0;
}
// Fonksiyon tanımları
int calculate_mean(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total / size;
}

int calculate_median(int arr[], int size) {
    sort_array(arr, size);
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2;
    } else {
        return arr[size / 2];
    }
}

int find_min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int calculate_mode(int arr[], int size) {
    int frequency[101] = {0}; // Değerlerin frekansını tutmak için dizi
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    int mode = 0, max_freq = 0;
    for (int i = 0; i < 101; i++) {
        if (frequency[i] > max_freq) {
            max_freq = frequency[i];
            mode = i;
        }
    }
    return mode;
}

int count_frequency(int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

void sort_array(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
