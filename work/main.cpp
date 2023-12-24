#include <iostream>
using namespace std;
//����������� ����������
void bubbleSort(double arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // ����� ����������
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
    cout << "������ �������: ";
    cin >> size;
    if (size <= 0 || size > 10000) {
        cout << "������ ������� ������ ���� ������������� � �� ��������� 1000." <<endl;
        return 0;
    };
    double arr[size];
    // ���� �������
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    };
    //���������� ������� � ������� ���������� ���������
    bubbleSort(arr, size);
    cout << "��� ���������� �������� �������: " << arr[size-1] << " ������ : " << size-1 << " � " << arr[size-2] << " ������: " << size-2;
return 0;
}
