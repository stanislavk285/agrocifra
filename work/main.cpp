#include <iostream>
using namespace std;
//Пузырьковая сортировка
void bubbleSort(double arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Перестановка элементов
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
};
int main(){
    setlocale(LC_ALL,"rus");
    int size;
    cout << "Размер массива:";
    cin >> size;
    if (size <= 0 || size > 1000) {
        cout << "Размер массива должен быть положительным и не больше 1000" <<endl;
        return 0;
    };
    double arr[size];
    // Ввод массива
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    };
    //Сортировка массива
    bubbleSort(arr, size);
    cout << "Два наибольших элемента массива: " << arr[size-1] << " индекс: " << size-1 << " и " << arr[size-2] << " индекс: " << size-2;
return 0;
}
