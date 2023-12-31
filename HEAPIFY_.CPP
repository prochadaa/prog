
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

class HEAP_MAX
{
	private:
		int*A,n;
	public:
		HEAP_MAX(int size);
		void SET_DATA();
		void ADJUST(int node, int n);
		void HEAPIFY();
		void DISPLAY();

};
//-------------------------
HEAP_MAX :: HEAP_MAX(int size)
{
	n = size;
	A= new int[n+1];
}
//-------------------------
void HEAP_MAX :: SET_DATA()
{
	for(int i=1; i<=n; i++)
	{
		A[i] = random(100);
	}
}
//-------------------------
void HEAP_MAX :: ADJUST(int node, int n)
{
	int j, item;
	j = 2*node;
	item = A[node];
	while(j<=n)
	{
		if(j < n && A[j] < A[j+1])
		{
			j = j + 1;
		}
		if(item>A[j])
			break;
		else
			A[j/2] = A[j];
		j = 2*j;
	}
	A[j/2] = item;
}
//-------------------------
void HEAP_MAX :: HEAPIFY()
{
	for(int i= n/2; i>=1; i--)
	{
		ADJUST(i,n);
	}
}
//-------------------------
void HEAP_MAX :: DISPLAY()
{
	for(int i=1; i<=n; i++)
	{
		cout<<A[i]<<" ";
	}
}
//-------------------------
void main()
{
	clrscr();
	int size;
	cout<<"Enter the size of list: ";
	cin>>size;	// set the size for creating list; pass that value to constructor of HEAP;
	HEAP_MAX heap(size);

	heap.SET_DATA();	// call this method to set elements in list;
	cout<<"\nElement before creating MAX_HEAP: ";
	heap.DISPLAY();

	heap.HEAPIFY();
	cout<<"\nElements after Creating MAX_HEAP: ";
	heap.DISPLAY();


	getch();
}
