#include<iostream>
using namespace std;
class linklist
{
	private:
struct node
{
	int data;
	node *link;
}*p;

public:
	linklist();
	void addatend(int num);
	void addatbeg(int num);
	void addafter(int c,int num);
	void del(int num);
	int count();
	void sortlink();
	void display();
	~linklist();
};

linklist::linklist()
{
	p=NULL;
}

void linklist::addatend(int num)
{
	node *q,*t;
	q=p;
	if(p==NULL)
	{
		p= new node;
		p->data=num;
		p->link=NULL;
	}
	else
	{
	 while(q->link!=NULL)
	  q=q->link;
	  t= new node;
	  t->data=num;
	  q->link=t;
	  t->link=NULL;
}
}

void linklist::addatbeg(int num)
{
	node *q;

	q=new node;
		q->data=num;
		q->link=p;
	p=q;
}

void linklist::addafter(int c,int num)
{
	node *q,*t;int i;
	for(i=0,q=p;i<c;i++)
	{
		q=q->link;
	}
	if(q->link==NULL)
	{
	cout<<"NUMBER OF ELEMENTS ARE LESS THAN c"<<endl;
	return;
    }
	
		t=new node;
		t->data=num;
		t->link=q->link;
		q->link=t;
	
}

void linklist::del(int num)
{
	node *q,*r;
	q=p;
	
	if(q->data==num)
	{
		p=q->link;
		delete q;
		return;
	}
	r=q;
		while(q!=NULL)
		{
			if(q->data==num)
			{
				r->link=q->link;
				delete q;
				return;
			}
			r=q;
			q=q->link;
			
		}
		cout<<"ELEMENT NOT FOUND"<<endl;
	}
	
void linklist::display()
{
	node *q;
	q=p;
	while(q!=NULL)
	{
		cout<<q->data<<endl;
		q=q->link;
	}
	
}

int linklist::count()
{
	node *q;
	int c=0;
	q=p;
	while(q!=NULL)
	{
		c++;
		q=q->link;
	}
	return c;
}

linklist::~linklist()
{
	node *q;
	if(p==NULL)
	return;
	
	while(p!=NULL)
	{
		q=p->link;
		delete p;
		p=q;
		
	}
}

void linklist::sortlink()
{
	node *q,*t,*r;
	q=p;
	t=p->link;
	while(t!=NULL)
	{
		q=p;
		while(q->link!=t->link)
		{
	          if(t->data < q->data)
	         {
	         	
	         	   while(q->link!=t)
               {
       	          q=q->link;
	           }      
	           
	              q->link=t->link;
	              t->link=q;
	         	
		      goto aman;
	         }
	   q=q->link;
       }
       aman:  ;
    
       	
       t=t->link;
     }
	
	
}



int main()
{
	linklist aman;
	cout<<"ENTER NUMBER OF ELEMENTS IN LINKLIST"<<endl;
    int n,a,b,c,i;
    cin>>n;
    cout<<"ENTER THE ELEMENTS"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>a;
    	aman.addatend(a);
	}
	aman.sortlink();
	aman.display();

}
