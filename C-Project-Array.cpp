#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

struct Array
{
    int *p;
    int length;
    int size;
};
int search_key(int A[],int size, int key)
{   
    for(int i = 0 ; i < size ; i++){
        if(key == A[i])
        return 1;
    }
    return -1;
}
int display(struct Array *arr)
{
    if (arr->length <= arr->size)
    {
    printf("Following are the elements of array: ");
    for (int i = 0; i < arr->length; i++)
        printf("%d ",arr->p[i]);
    }
    else
        printf("Array index became invalid.\n");
    
    printf("\n");
}
int append(struct Array *arr)
{
    int x;
    //Inserting a element at last
    printf("\nEnter a value to append in the Array: ");
    scanf("%d",&x); 
    
    if(arr->length < arr->size && arr->length > -1){
    arr->p[arr->length] = x;
    arr->length+=1;
    }
    else
        printf("Array is full! or Invalid index.\n");
}
int insert(struct Array *arr)
{
    int x,index,i;

    printf("\nEnter a value to insert: ");     
    scanf("%d",&x);
    printf("Enter an index: ");
    scanf("%d",&index);
    if (index >= 0 && index < arr->size)
    {
        for(i = arr->length; i > index ; i--)
        {
            arr->p[i] = arr->p[i-1];
        }
        arr->p[index] = x;
        arr->length+=1;
    }
    else
        printf("\nInvalid index.\n");
}
int delete_element(struct Array *arr)
{
    int i,index;
    printf("\nDelete element at index: ");
    scanf("%d",&index);

    if (index > -1 && index < arr->size){
        for(i = index ; i < arr->length-1 ; i++)
           arr->p[i] = arr->p[i+1];
        arr->length--; 
    }
    else
        printf("Invalid index!\n");
}
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int linear_search(struct Array *arr)
{
    int key,index = -1,i,x;
    printf("Enter a key to search: ");
    scanf("%d",&key);

    for(i = 0 ; i < arr->length ; i++){
        if(arr->p[i] == key){
            index = i;
            swap(&arr->p[i],&arr->p[0]);
        }
    }
    
    if(index == -1) printf("Element not found!");
    if(index > -1) printf("Element found at %d",index);

    printf("\n");    
}
int bin_search(struct Array *arr)
{   
    int key,i,index = -1;
    printf("Enter a element to search: ");
    scanf("%d",&key);

    int l = 0,h = arr->length;
        while(l <= h)
        {
            int mid = (l+h)/2;
            if(index != -1) break;
            if (arr->p[mid] == key)
                index =  mid;
            else if(key > arr->p[mid]) 
                l = mid+1;
            else 
                h = mid -1;
        } 
    if (index == -1) printf("Element not found!\n");
    if (index > -1) printf("Element found at %d",index);    
}
int rbin_search(int A[], int key,int l,int h)
{
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == A[mid]) return mid;
        else if(key > A[mid]) return rbin_search(A,key,mid+1,h);
        else  return rbin_search(A, key, l, mid-1);
    }
    return -1;
}
int Sum(struct Array arr)
{
    int sum  = 0,i;
    for(i = 0 ; i <arr.length ; i++){
        sum+=arr.p[i];
    }
    printf("Sum all elements: %d\n",sum);
}
int Avg(struct Array arr)
{
    int i, sum = 0, avg;

    for(i = 0; i< arr.length ;i++){
        sum+=arr.p[i];
    }
    avg = sum/arr.length;
    printf("Average of all elements: %d\n",avg);
}
int Max(struct Array arr)
{
    int i, max = arr.p[0];

    for(i = 0; i < arr.length ; i++){
        max  = max > arr.p[i] ? max:arr.p[i];
    }
    return max;
}
int Min(struct Array arr)
{
    int i, min = arr.p[0];

    for(i = 0; i < arr.length ; i++){
        min  = min < arr.p[i] ? min:arr.p[i];
    }
    return min;
}
int Get(struct Array arr)
{
    int i, index;

    printf("Enter a index to get a element: ");
    scanf("%d",&index);

    if(index >= 0 && index < arr.length){
        printf("%d is at index %d.\n",arr.p[index],index);
    }
    else printf("Invalid index!\n");
}
int Set(struct Array arr)
{
    int index,val;

    printf("Enter a index to insert the element: ");
    scanf("%d",&index);

    if(index >= 0 && index < arr.length){
        printf("Enter an element to Set at index %d: ",index);
        scanf("%d",&val);
        arr.p[index] = val;
    }
    printf("\n");
}
int rSum(int A[],int n)
{
    if(n < 0) return 0;
    return rSum(A, n-1) + A[n];
}
int reverse1(struct Array *arr)
{
    int i,j=arr->length,B[arr->length];
    for(i = 0 ; i < arr->length ; i++){ 
        B[i] = arr->p[j-1];
        j--;
        }
    for(i = 0; i < arr->length ; i++){
        arr->p[i] = B[i];
    }
    printf("Reversed Array:\n");
}
int reverse2(struct Array *arr)
{
    int i,j = arr->length,temp=0;
    for(i = 0 ; i< arr->length ; i++)
    {
        if(i < j){
        temp = arr->p[i];
        arr->p[i] = arr->p[j-1];
        arr->p[j-1] = temp;
        j--;
        }
    }
}
int rightshift(struct Array *arr)
{
    int i,x = 0,j = 0,flag = 0;

    printf("Shift how many elements: ",x);
    scanf("%d",&x);

    while(flag < x){ 

      for(i = arr->length-1 ; i >= 0  ; i--)
        arr->p[i] = arr->p[i-1];

      arr->p[0] = 0;
      flag++;
    }

}
int leftshift(struct Array *arr)
{
    int i,x = 0,j = 0,flag = 0;

    printf("Shift how many elements: ",x);
    scanf("%d",&x);

    while(flag < x){ 

      for(i = 0 ; i < arr->length  ; i++)
        arr->p[i] = arr->p[i+1];

      arr->p[arr->length-1] = 0;
      flag++;
    }

}
int sortedinsert(struct Array *arr,int key)
{
    int i = arr->length-1;
    while (key < arr->p[i])
    {
        if(key < arr->p[i]){ 
            arr->p[i+1] = arr->p[i];
            i--;
        }
    }
    arr->p[i+1] = key;
    arr->length++;
}
int isSorted(struct Array arr)
{
    int i=1,key = arr.p[0];
    while(key < arr.p[i]){
        key = arr.p[i];
        i++;
    }
    if(i-2 == arr.length)
        printf("Yes! the Array is sorted.\n");
    else 
        printf("No! Array is not sorted.\n");
}
int arrangesign(struct Array *arr)
{
    int i=0, j = arr->length-1;
    while(i<j)
    {
        while(arr->p[i] < 0)
        i++;
        while(arr->p[j] >= 0)
        j--;
        if(arr->p[i] > -1 && arr->p[j] < 0 && i<j)
        swap(&arr->p[i],&arr->p[j]);
    }
}
int merger(struct Array *arr)
{
    int i = 0, j = 0 , k = 0;
    int m = 4,n = 4;
    int A[] = {1,3,5,7};
    int B[] = {2,4,6,8};

    while(i < m && j < n)
    {
        if( A[i] < B[j]){ 
            arr->p[k] = A[i];
            i++;
            k++;
        }
        else{
            arr->p[k] = B[j];
            j++;
            k++;
        }
    }
    for(; i < m ; i++){
        arr->p[j] = A[i];
        j++;
    }
    for(; j < n ; j++){
        arr->p[k] = B[j];
        j++;
    }
}
int intersection_unsorted()
{
    struct Array arr1;
    struct Array arr2;
    struct Array arr3;
    int i = 0, j = 0, k = 0;

    printf("Enter size of 1, 2 and 3rd Array: \n");
    scanf("%d%d%d",&arr1.size,&arr2.size,&arr3.size);
    printf("Enter number of elements in 1st 2nd and 3rd Array:\n");
    scanf("%d%d%d",&arr1.length,&arr2.length,&arr3.length);

    arr1.p = (int*)malloc(arr1.size*sizeof(int));
    arr2.p = (int*)malloc(arr2.size*sizeof(int));
    arr3.p = (int*)malloc(arr3.size*sizeof(int));

    printf("Fill Array- 1 with %d elements: \n",arr1.length);
    for(i = 0; i <arr1.length; i++)
    scanf("%d",&arr1.p[i]);

    printf("Fill Array- 2 with %d elements: \n",arr2.length);
    for(i = 0; i <arr2.length; i++)
    scanf("%d",&arr2.p[i]);

    for(i = 0 ;i < arr1.length; i++)
        for(j = 0 ;j < arr2.length ;j++ )
           {
            if( arr2.p[j] == arr1.p[i])
                arr3.p[k++] = arr1.p[i];
           }

    printf("Intersection of Array 1 and Array2: \n");
    for(i = 0; i< k ; i++)
    printf("%d ",arr3.p[i]);
        
}
int intersection_sorted()
{
    int i = 0, j = 0, k = 0;

    struct Array arr1;
    struct Array arr2;
    struct Array arr3;

    printf("Enter size of 1, 2 and 3rd Array: \n");
    scanf("%d%d%d",&arr1.size,&arr2.size,&arr3.size);
    printf("Enter number of elements in 1st 2nd and 3rd Array:\n");
    scanf("%d%d%d",&arr1.length,&arr2.length,&arr3.length);

    arr1.p = (int*)malloc(arr1.size*sizeof(int));
    arr2.p = (int*)malloc(arr2.size*sizeof(int));
    arr3.p = (int*)malloc(arr3.size*sizeof(int));

    printf("Fill the Array1 with %d elements: \n",arr1.length);
    for(i = 0; i <arr1.length; i++)
    scanf("%d",&arr1.p[i]);

    printf("Fill the Array2 with %d elements: \n",arr2.length);
    for(i = 0; i <arr2.length; i++)
    scanf("%d",&arr2.p[i]);

    for(i = 0; i <arr3.length; i++)
    arr3.p[i] = 0;

    i=j=k=0;
    while ( i < arr1.length && j < arr2.length)
    {
        if(arr1.p[i] < arr2.p[j]) 
        i++;
        else if(arr2.p[j] < arr1.p[i]) 
        j++;
        else if( arr2.p[j] == arr1.p[i]){
            arr3.p[k++] = arr1.p[i++];
            j++;
            }
        else printf("\nError\n");
    
    }
    printf("Intersection of Array 1 and Array2: \n");
    for(i = 0; i< k ; i++)
    printf("%d ",arr3.p[i]);
}
int union_unsorted()
{
    struct Array arr1;
    struct Array arr2;
    struct Array arr3;
    int i = 0, j = 0, k = 0;

    printf("Enter size of 1, 2 and 3rd Array: \n");
    scanf("%d%d%d",&arr1.size,&arr2.size,&arr3.size);
    printf("Enter number of elements in 1st 2nd and 3rd Array:\n");
    scanf("%d%d%d",&arr1.length,&arr2.length,&arr3.length);

    arr1.p = (int*)malloc(arr1.size*sizeof(int));
    arr2.p = (int*)malloc(arr2.size*sizeof(int));
    arr3.p = (int*)malloc(arr3.size*sizeof(int));

    printf("Fill Array- 1 with %d elements: \n",arr1.length);
    for(i = 0; i <arr1.length; i++)
    scanf("%d",&arr1.p[i]);

    printf("Fill Array- 2 with %d elements: \n",arr2.length);
    for(i = 0; i <arr2.length; i++)
    scanf("%d",&arr2.p[i]);

    k = 0;
    for(i =0;i < arr1.length;i++){
        arr3.p[k] = arr1.p[i];
        k++;
    }

//     --------------  hello  -------------     //

    for(i = 0 ; i < arr2.length ;i++)
    {
        int key = arr2.p[i];
        int x = search_key(arr3.p,arr3.length,key);
        if(x == -1){
        arr3.p[k] = arr2.p[i];
        k++;
        }
    }

    printf("Union of Array 1 and Array2: \n");
    for(i = 0; i< k ; i++)
    printf("%d ",arr3.p[i]);
}
int union_sorted()
{
    struct Array arr1;
    struct Array arr2;
    struct Array arr3;
    int i = 0, j = 0, k = 0;

    printf("Enter size of 1, 2 and 3rd Array: \n");
    scanf("%d%d%d",&arr1.size,&arr2.size,&arr3.size);
    printf("Enter number of elements in 1st 2nd and 3rd Array:\n");
    scanf("%d%d%d",&arr1.length,&arr2.length,&arr3.length);

    arr1.p = (int*)malloc(arr1.size*sizeof(int));
    arr2.p = (int*)malloc(arr2.size*sizeof(int));
    arr3.p = (int*)malloc(arr3.size*sizeof(int));

    printf("Fill Array- 1 with %d elements: \n",arr1.length);
    for(i = 0; i <arr1.length; i++)
    scanf("%d",&arr1.p[i]);

    printf("Fill Array- 2 with %d elements: \n",arr2.length);
    for(i = 0; i <arr2.length; i++)
    scanf("%d",&arr2.p[i]);

//     --------------  hello  -------------     //
    i=j=k=0;
    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.p[i] < arr2.p[j]){
            arr3.p[k] = arr1.p[i];
            i++;
            k++;
        }
        else if(arr2.p[j] < arr1.p[i]){
            arr3.p[k] = arr2.p[j];
            j++;
            k++;
        }
        else if( arr2.p[j] == arr1.p[i]){
            arr3.p[k] = arr1.p[i];
            i++;
            k++;
            j++;
            }    
    }
    
    for(;i<arr1.length;i++)
        {
            arr3.p[k] = arr1.p[i];
            k++;
        }
    for(;j<arr2.length;j++)
        {
            arr3.p[k] = arr2.p[j];
            k++;
        } 
    
    for( i = 0; i<k ; i++)
        printf("%d ",arr3.p[i]);
}
int difference()
{
    struct Array arr1;
    struct Array arr2;
    struct Array arr3;
    int i = 0, j = 0, k = 0;

    printf("Enter size of 1, 2 and 3rd Array: \n");
    scanf("%d%d%d",&arr1.size,&arr2.size,&arr3.size);
    printf("Enter number of elements in 1st 2nd and 3rd Array:\n");
    scanf("%d%d%d",&arr1.length,&arr2.length,&arr3.length);

    arr1.p = (int*)malloc(arr1.size*sizeof(int));
    arr2.p = (int*)malloc(arr2.size*sizeof(int));
    arr3.p = (int*)malloc(arr3.size*sizeof(int));

    printf("Fill Array- 1 with %d elements: \n",arr1.length);
    for(i = 0; i <arr1.length; i++)
    scanf("%d",&arr1.p[i]);

    printf("Fill Array- 2 with %d elements: \n",arr2.length);
    for(i = 0; i <arr2.length; i++)
    scanf("%d",&arr2.p[i]);

//     --------------  hello  -------------     //
    i=j=k=0;
    for(i = 0 ;i < arr1.length; i++)
    {
        int found = search_key(arr2.p,arr2.length,arr1.p[i]);
        if (found == -1){
            arr3.p[k] = arr1.p[i];
            k++;
            }
    }
    
    for( i = 0; i<k ; i++)
        printf("%d ",arr3.p[i]);
}
searchmissing_sorted(struct Array arr){
 int diff = arr.p[0];
 for(int i = 0; i < arr.length ; i++){
     if(diff != arr.p[i] - i){
        printf("Found some missing elements: \n");
        while(diff < arr.p[i] -i){
            printf("%d ",i+diff);
            diff++;
        }
    }
 }
}
searchmissing_unsorted(struct Array arr){
    int min = Min(arr);
    int max = Max(arr);
    max++;
    int H[max];
    int i;
    for(i = 0; i< max; i++){
        H[i] = 0;
    }
    for(i=0;i<arr.length ;i++){
        int l = arr.p[i];
       H[arr.p[i]] = 1; 
    }
    printf("Missing elements are: ");
    for(int i = min ; i < max ; i ++){ 
    if(H[i] == 0)
    printf("%d ",i);
    }

}
dup_frequency_sorted(struct Array arr){
    int last_d = 0;
    for(int i = 0, j=0;i < arr.length-1 ;i++)
    {
        if(arr.p[i] == arr.p[i+1] )
        {
                j = i+1;
                while(arr.p[j] == arr.p[i]) j++;

            printf("\n%d found %d times.",arr.p[i],j-i);
            i = j-1;
        }
        
    }
}
Hash_dup_frequency(struct Array arr){

    int min = Min(arr);
    int max = Max(arr);

    max++;
    int H[max];
    int i;

    for(i = 0; i< max; i++){
        H[i] = 0;
    }
    for( i = 0 ; i < arr.length ; i++ ){
        int l = arr.p[i];
       H[l] += 1; 
    }
    for(int i = 0; i < max ; i++)
    {
        if(H[i] > 1){
            printf("\nElement %d is found %d times.",i , H[i]);
        }
    }
}
unsorted_frequency(struct Array arr){
    for (int i = 0 ; i < arr.length ; i++)
    {
        
        if( arr.p[i] != -1)
        {
            int count = 1;
            for(int j = i+1 ; j < arr.length ; j++)
            {
                if (arr.p[j] == arr.p[i]) {
                count++;
                arr.p[j] = -1;
                }
            }
        if(count > 1 ) printf("\n%d is present for %d times.",arr.p[i],count);
        }
    }
    
}
Pair_sum(struct Array arr){
    int k;
    printf("Enter sum, of pairs of elements: ");
    scanf("%d",&k);

    for(int i = 0 ; i < arr.length-1 ; i++){
        for(int j = i+1; j < arr.length ; j++){
            if(arr.p[i] + arr.p[j] == k){
                printf("\nSum of %d and %d is %d ",arr.p[i],arr.p[j],k);
            }
        }
    }
}
Hash_Pair_Sum(struct Array arr){
    int k;
    printf("Enter sum, of pairs of elements: ");
    scanf("%d",&k);

    int max = Max(arr);
    max++;
    int H[max];
    int i;
    for(i = 0; i< max; i++){
        H[i] = 0;
    }
    // A hash filled with zero
    
    // Work!!


    for( i = 0 ; i < arr.length ; i++ )
    {   
        int a = arr.p[i];
        if(H[k-a]  != 0 && (k - a > -1) ){
            printf("\nSum of %d and %d is %d",a,(k - a), k );
        }
       H[a]++ ; 
    }
}
Sorted_Pair_Sum(struct Array arr){

    int k;
    printf("Enter sum, of pairs of elements: ");
    scanf("%d",&k);

    for( int i = 0, j = arr.length -1; i < j ;){
        int t = arr.p[i] + arr.p[j];

        if( t == k) {
            printf("\nSum of %d and %d is %d",arr.p[i],arr.p[j], k );
            i++;
            j--;
        }
        else  if (t > k) {
                j--;
        }
        else i++;

    }
}
Min_and_Max(struct Array arr){
    int min = arr.p[0];
    int max = arr.p[0];
    for(int i = 1 ; i < arr.length ; i++){
        min = min < arr.p[i]? min : arr.p[i];
        max = max > arr.p[i]? max : arr.p[i];
    }
    printf("\nMinimum no. : %d",min);
    printf("\nMaxm no. : %d",max);
}


int main()
{   
    struct Array arr;
    int i= 0,ch;
    
    printf("Enter size of the Array: ");
    scanf("%d",&arr.size);
    arr.p = (int*)malloc(arr.size*sizeof(int));

    printf("Number of elements to be inserted: ");
    scanf("%d",&arr.length);

    if(arr.size >= arr.length){

    printf("Fill the Array with %d elements: \n",arr.length);
    for(i = 0; i <arr.length; i++)
    scanf("%d",&arr.p[i]);

//  ---------------------
//  ------Functions------
//  ---------------------
    do{
        printf("\n\n\n1.Display all elements:");
        printf("\n2.Search a key: ");
        printf("\n3.Find a maximum element: ");
        printf("\n4.Find min element: ");
        printf("\n5.Append a element: ");
        printf("\n6.Insert a element: ");
        printf("\n7.Find min and max for given sum: ");
        printf("\nNow! tell me what to do: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: display(&arr);
        break;
        case 2: linear_search(&arr);
        break;
        case 3: Max(arr);
        break;
        case 4: Min(arr);
        break;
        case 5: append(&arr);
        break;
        case 6: insert(&arr);
        break;
        case 7: Min_and_Max(arr);
        break;
        default:
            break;
        }

    }while(ch <= 7 and ch > 0);
    
    }

    else printf("Array length exceeded!");

    printf("\n\nGoodBye!\n");
    return 0;
}