/*input
10
1
2
3
4
5
6
7
8
9
10
*/
// Printing middle element without using cnt
#include<bits/stdc++.h>

using namespace std;

struct node
{
	node *next;
	int data;
}*start;

stack<int> s;
int main()
{
	int t,d,val;
	cin>>t;
	node *head;
	start=NULL;
	while(t--)
	{
		cin>>d;
		if(start==NULL)
		{
			head=(struct node*)malloc(sizeof(node));
			head->data=d;
			start=head;
		}
		else
		{
			head->next=(struct node*)malloc(sizeof(node));
			head=head->next;
			head->data=d;   
		}
	}
	head->next=NULL;
	node *ptr,*ptr1;
	ptr=start;
	ptr1=start->next;
	while(ptr1!=NULL && ptr1->next!=NULL)
	{
		ptr=ptr->next;
		ptr1=ptr1->next->next;
	}
	cout<<ptr->data<<endl;
}