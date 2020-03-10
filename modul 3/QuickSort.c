#include<stdio.h>
 
// Fungsi utilitas untuk menukar dua elemen
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
/* Fungsi ini mengambil elemen terakhir sebagai pivot, tempat
   elemen pivot pada posisi yang benar diurutkan
    array, dan semua tempat lebih kecil (lebih kecil dari pivot)
   di sebelah kiri pivot dan semua elemen yang lebih besar ke kanan
   dari pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot atau poros
    int i = (low - 1);  // Indeks elemen yang lebih kecil
 
    for (int j = low; j <= high- 1; j++)
    {
        // Jika elemen saat ini lebih kecil dari atau
        // sama dengan pivot
        if (arr[j] <= pivot)
        {
            i++;    // indeks kenaikan elemen yang lebih kecil
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
/* Fungsi utama yang mengimplementasikan QuickSort
 arr [] -> Array untuk diurutkan,
  rendah -> indeks awal,
  tinggi -> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi adalah indeks partisi, arr [p] sekarang
           di tempat yang tepat */
        int pi = partition(arr, low, high);
 
        // Urutkan elemen secara terpisah sebelumnya
        // partisi dan setelah partisi
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
/ * Fungsi untuk mencetak array * /
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Program driver untuk menguji fungsi-fungsi di atas
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}
