#include<iostream>
using namespace std;
void bubblesort(int arr[]);
void printer(int arr[]);
void sort(int arr[]);
void selection(int arr[]);
void insertionSort(int arr[], int n);
int main(){
    int arr[]={1, 2, 3, 4, 5};
    printer(arr);
    cout<<"BubbleSort is being performed......!!!"<<endl;
    bubblesort(arr);
    cout<<"SimpleSort is being performed......!!!"<<endl;
    sort(arr);
    // sort(arr);
    cout<<"SelectionSort is being performed......!!!"<<endl;
    selection(arr);
    cout<<"InsertionSort is being performed......!!!"<<endl;
    insertionSort(arr, 5);
}
void bubblesort(int arr[]){
    int value;
    int*pp;
    pp = arr;
    for(int i = 0 ; i < 5; i++){
        if(*pp < *pp+1){
            value = *pp;
            *pp = *(pp+1);
            *(pp+1) = value;

        }
    }

}
void sort(int arr[]){
    int value;
    for(int i = 0 ; i < 5; i++){
        if(arr[i] < arr[i+1]){
            value = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = value;

        }
    }

}
void selection(int arr[]){
    int *pp;
    pp = arr;
    for(int i = 0; i < 5; i++){
        if(arr[i]<arr[i+1]){
            arr[i]=arr[i+1];

        }
    }
    for(int i = 0 ; i < 5; i++){
        cout<<arr[i]<<endl;
    }
}
void insertionSort(int arr[], int n)
{
    int i, *pp, j, *qq;
    for (i = 1; i < n; i++)
    {
        pp = arr;
        *qq = j = i - 1;
        while (*qq >= 0 && arr[*qq] > *pp)
        {
            arr[*qq + 1] = arr[*qq];
            *qq = *qq - 1;
        }
        arr[*qq + 1] = *pp;
    }
}
void printer(int arr[]){
    for(int i = 0 ; i < 5; i ++){
        cout<<"The value in the array is:";
        cout<<arr[i]<<endl;
    }
}