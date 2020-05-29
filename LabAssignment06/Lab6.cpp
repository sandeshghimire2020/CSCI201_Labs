#include <iostream>

using namespace std;

float mean(int [],int );

float median (int [],int );

int main()

{

    int a[50];

    int size;

    cout<<"enter arrray size <=50 :";

    cin>>size;

    for(int i=0 ; i<size ; i++)

    {

        cout<<"enter  interger value a["<<i<<"] :";

        cin>>a[i];

    }

    int temp;

    for ( int i=0; i <size-1; i++)

    for(int j=i+1; j<size ; j++)

    if (a[i]>a[j])

    { temp =a[i];

      a[i]=a[j];

      a[j]=temp;

    }



for (int i=0; i<size;i++)



cout<<a[i]<<" ";

cout<<endl;





cout <<" mean = "<<mean(a, size)<<endl;

cout<<"median ="<<median(a,size)<<endl;

return 0;

}



float mean(int x[], int n)

{

    int sum = 0;

    for(int i=0; i<n ; i++)

    sum=sum+ x[i];



    return (sum/(float)n);

}



float median (int x[] , int n)

{

    if(n%2== 1)

    return(x[n/2]);

    else

    return(x[n/2 -1] +x[n/2]/2.0);

}
