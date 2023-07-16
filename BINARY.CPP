#include<iostream.h>
#include<conio.h>
class Array
{
   int a[10] , n , item;
   public:
   void Get();
   void Sort();
   void Bsearch();
};
void Array :: Get()
{
    cout << "Enter size of array : ";
    cin >> n;

    cout << "Enter array elements : ";
    for (int i = 0; i <= n; i++)
    {
	cin >> a[i];
    }
}
void Array :: Sort()
{
    int temp;
    for(int i = 0; i <= n; i++)
    {
	for (int j = i+1; j <= n; j++)
	{
	    if (a[i] > a[j])
	    {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	    }
	}
    }
    cout << "\n Elements after sorting are : \n";
    for(i = 0; i <= n; i++)
    {
	cout << a[i]<<" \t";
    }
}
void Array :: Bsearch()
{
    int Beg = 0 , End =  n;
    int Mid = (Beg + End)/2;
    int Loc;
    cout << "\n Enter element to search : ";
    cin >> item;

    while(Beg <= End && a[Mid] != item)
    {
	if(item < a[Mid])
	{
	    End = Mid-1;
	}
	else
	{
	    Beg = Mid+1;
	}
	Mid = (Beg + End)/2;
    }
    if (a[Mid] == item)
    {
       Loc = Mid;
       cout << "item is on "<<Loc+1 << "location \n ";
    }
    else
    {
       Loc = NULL;
       cout << "Element is not founded";
    }
}
void main()
{
    clrscr();
    Array a;
    a.Get();
    a.Sort();
    a.Bsearch();
    getch();
}