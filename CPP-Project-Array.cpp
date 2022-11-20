#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

template<class T>
class Array
{
    private:
        T *A;
        int length;
        int size;
        swap(T *x, T *y);
    public:
    Array(){
        size = 10;
        length=5;
        A=new T[size];
    }
    Array(int s,int l){
        size = s;
        length = l;
        A = new T[size];
    }  
    ~Array(){
        delete []A;
    }
    Fill_Array();
    Display();
    Append(T key);
    Insert(int i, T k);
    Delete(int index);
    int LinearSearch(T k);
    int BinarySearch(T k);
    T Get(int i);
    Set(int i, T key);
    T Max();
    T Min();
    T Sum();
    float Avg();
    void Reverse();
    void InsertSort(T k);
    int isSorted();
    void ArrangeSign();
    Merge(Array arr1,Array arr2);
    Intersection(Array arr1, Array arr2);
    Union(Array arr1, Array arr2);
    Difference(Array arr1, Array arr2);
    int Search(T k);
    searchmissing_sorted();
    searchmissing_unsorted();
    dup_frequency_sorted();
    Hash_dup_frequency();
    Pair_sum(int k);
    Hash_Pair_Sum(int k);
    Sorted_Pair_Sum(int k);
    Min_and_Max();
};

template<class T>
Array<T>::Fill_Array(){
    if(length <= size){
    cout<<"Fill array with "<<length<<" elements: \n";
    for(int i = 0 ; i < length ; i++)
    cin>>A[i];
    }
    else cout<<"Error! Array length exceded than Array size.";
}

template<class T>
Array<T>::Display(){
    cout<<endl;
    for(int i = 0; i < length ; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

template<class T>
Array<T>::Append(T key){
    if(length < size ){
        A[length] = key;
        length++;
    }
    else
    cout<<"Array is full, can't  append another element!\n";
}

template<class T>
Array<T>::Insert(int i, T k){
if(i < length && i >=0 ){
    for(i = length -1; i> i ; i--)
    A[i] = A[i-1];
    A[i] = k;
    length++;
}
else cout<<"Unable to insert, Invalid Index!";
}

template<class T>
Array<T>::Delete(int index){
    int i;
    T x = A[index];
    if(index >= 0 && index < length){
        for(i=index ; i< length-1 ; i++){
            A[i] = A[i+1];
        }
    length-=1;
    cout<<"Deleted element: "<<x<<endl;
    }
    else
        cout<<"Deletion is not possible, Invalid index!\n";
}

template<class T>
Array<T>::swap(T *x, T *y){
    T temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

template<class T>
int Array<T>::LinearSearch(T k){
    for(int i = 0 ; i < length ; i++){
    if(A[i] == k)
    return i;
    }
    cout<<"Element "<<k<<" not found."<<endl;
}

template<class T>
int Array<T>::BinarySearch(T k)
{
    int l = 0 ,mid, h = length-1;
    while(l<=h){
        mid = (l+h)/2;
        if(A[mid] == k){
        return mid;
    }

    else if(k > A[mid]){
        l = mid+1;
    }

    else h = mid-1;
    }

    return -1;
}

template<class T>
T Array<T>::Get(int i){
    if(i >= 0 && i < length)
    return A[i];
    }

template<class T>
int Array<T>::Set(int i,T k){
    if(i >= 0 && i < length)
    A[i] = k;
}

template<class T>
T Array<T>::Max(){
    T max = A[0];
    int i;
    for( i = 1 ; i  < length ; i++)
     max = max>A[i]?max:A[i];
     return max;
}

template<class T>
T Array<T>::Min(){
    T min = A[0];
    int i;
    for( i = 1 ; i  < length ; i++)
     min = min<A[i]?min:A[i];
     return min;
}

template<class T>
T Array<T>::Sum(){
    T sum = 0;
    int i;
    for( i = 0 ; i  < length ; i++)
     sum += A[i];
     return sum;
}

template<class T>
float Array<T>::Avg(){
    return float(Sum()/length);
}

template<class T>
void Array<T>::Reverse(){
    int i=0,j;
    for(i = 0 , j = length-1; i <  j; i++,j--)
    swap(&A[i],&A[j]);
}

template<class T>
void Array<T>::InsertSort(T k){
    int i = length-1;
    if(length < size){
        while(i>=0 && A[i] > k){
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = k;
        length++;
    }
    else cout<<"Error! out of space for insertion.";
}

template<class T>
int Array<T>::isSorted(){
    int i;
    for(i = 1 ; i < length ; i++){
        if(A[i] < A[i-1]){
            cout<<"Array is not sorted Yet.";
            return -1;
        }
    }
    cout<<"Array is sorted!";
}

template<class T>
int Array<T>::Search(T k){
    int i;
    for(i = 0; i < length ; i++){
        if(A[i] == k)
        return 1;
    }
    return -1;
}

template<class T>
void Array<T>::ArrangeSign(){
    int i = 0,j = length -1;
    while(i<j){
        while(A[i] < 0) i++;
        while(A[j] > -1) j--;
        if (i < j) swap(&A[i],&A[j]);
    }
}

template<class T>
Array<T>::Merge(Array arr1, Array arr2)
{    
    int i = 0, j = 0, k = 0;
    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j]){
            A[k] = arr1.A[i];
            i++;
            k++;
        }
        else if(arr2.A[j] <= arr1.A[i]){
            A[k] = arr2.A[j];
            j++;
            k++;
        }
    }
    for(;i<arr1.length;i++){ 
    A[k] =  arr1.A[i];
    k++;
    }
    for(;j<arr2.length;j++){ 
    A[k] =  arr2.A[j];
    k++;
    }

}

template<class T>
Array<T>::Intersection(Array arr1, Array arr2)
{    
    int i = 0, j = 0, k = 0;
    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j]){
            i++;
        }
        else if(arr2.A[j] < arr1.A[i]){
            j++;
        }
        else if(arr2.A[j] == arr1.A[i]){
            A[k] = arr2.A[j];
            j++;
            i++;
            k++;
        }
    }
    length = k;
}

template<class T>
Array<T>::Union(Array arr1, Array arr2)
{    
    int i = 0, j = 0, k = 0;
    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j]){
            A[k] = arr1.A[i];
            i++;
            k++;
        }
        else if(arr2.A[j] < arr1.A[i]){ 
            A[k] = arr2.A[j];
            j++;
            k++;
        }
        else if(arr2.A[j] == arr1.A[i]){
            A[k] = arr2.A[j];
            j++;
            k++;
            i++;
        }
    }
    for(;i<arr1.length;i++){ 
    A[k] =  arr1.A[i];
    k++;
    }
    for(;j<arr2.length;j++){ 
    A[k] =  arr2.A[j];
    k++;
    }
    length = k;
}

template<class T>
Array<T>::Difference(Array arr1, Array arr2)
{    //C = A - B;
    int i = 0;

    for(i = 0; i < arr1.length ; i++){
        A[i] = arr1.A[i];
    }
    int k = 0;
    for(i = 0;i < arr1.length; i++)
    {
        int found = arr2.Search(A[i]);
        if (found == -1){
            A[k++] = arr1.A[i];
        }
    }
    length = k;
}

template<class T>
Array<T>::searchmissing_sorted(){
    int diff = A[0];
    for(int i=0;i <length; i++){
        if(diff != A[i] - i){
            cout<<"Found some missi`n elements: ";
        while(diff < A[i]-i){
            cout<<" "<<i+diff;
            diff++;
            }
        }
    }
}

template<class T>
Array<T>::searchmissing_unsorted(){
    int min = Min();
    int max = Max();
    max++;
    T H[max];
    int i;
    for(i = 0; i< max; i++){
        H[i] = 0;
    }
    for(i=0;i<length ;i++){
        int l = A[i];
       H[l] = 1; 
    }
    cout<<"Missing elements are: ";
    for(int i = min ; i < max ; i ++)
    if(H[i] == 0)
    cout<<i<<" ";

}

template<class T>
Array<T>::dup_frequency_sorted(){
    for(int i = 0, j=0;i < length-1 ;i++)
    {
        if(A[i] == A[i+1] )
        {
                j = i+1;
                while(A[j] == A[i]) j++;

            cout<<endl<<A[i]<<" found for " <<j-i<<" times.";
            i = j-1;
        }
        
    }
}

template<class T>
Array<T>::Hash_dup_frequency(){
    int min = Min();
    int max = Max();
    max++;
    T H[max];
    int i;
    for(i = 0; i<= max; i++){
        H[i] = 0;
    }
    for(i=0;i<length ;i++){
        int l = A[i];
       H[l] += 1; 
    }
    for(int i = 0; i <= max ; i++)
    {
        if(H[i] > 1){
            cout<<"\nElement "<< i <<" is found "<< H[i] << " times.";
        }
    }
}

template<class T>
Array<T>::Pair_sum(int k){

    for(int i = 0 ; i < length-1 ; i++){
        for(int j = i+1; j < length ; j++){
            if( A[i] + A[j] == k){
                cout<<"\nSum of "<< A[i] <<" and "<< A[j] <<" is "<< k;
            }
        }
    }
}

template<class T>
Array<T>::Hash_Pair_Sum(int k){
  
    int max = Max();
    max++;
    T H[max];
    int i;
    for(i = 0; i< max; i++){
        H[i] = 0;
    }
    // A hash filled with zero
    
    // Work!!


    for( i = 0 ; i < length ; i++ )
    {   
        int a = A[i];
        if(H[k-a]  != 0 && (k - a > -1) ){
            cout<<endl<< A[i] << " and " << (k - A[i]) << " is "<< k;
        }
       H[a]++ ; 
    }
}

template<class T>
Array<T>::Sorted_Pair_Sum(int k){
    for( int i = 0, j = length -1; i < j ;){
        int t = A[i] + A[j];

        if( t == k) {
            cout<< endl << "Sum of " << A[i] <<" and "<< A[j] << " is "<<t;
            i++;
            j--;
        }
        else  if (t > k) {
                j--;
        }
        else i++;

    }
}

template<class T>
Array<T>::Min_and_Max(){
    int min = A[0];
    int max = A[0];
    for(int i = 1 ; i < length ; i++){
        min = min < A[i]? min : A[i];
        max = max > A[i]? max : A[i];
    }
    cout<<"\nMin is: "<<min<<"\nMax is: "<<max;
}
int main()
{   
    Array<int> arr(15,5);
    arr.Fill_Array();
    arr.Min_and_Max();
    


    return 0;
}