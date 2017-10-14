/*input
5
1
2
3
4
5
*/
// Detecting cycle
#include<bits/stdc++.h>

using namespace std;

struct node
{
	node *next;
	int data;
}*start;

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
			head->next=NULL;
			start=head;
		}
		else
		{
			head->next=(struct node*)malloc(sizeof(node));
			head->next->data=d;
			head=head->next;
		}
	}
	head->next=start->next;
	head=start;
	node *ptr1=start,*ptr2=start->next;
	int flag=0;
	while(ptr2!=NULL &&ptr2->next!=NULL)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
		if(ptr1==ptr2)
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"cycle exists";
	else
		cout<<"cycle does not exist";
}