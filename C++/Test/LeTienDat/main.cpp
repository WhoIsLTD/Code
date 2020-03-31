#include<iostream>
#include<conio.h>
using namespace std;

 

struct Node // khai bao cau truc cua Node chua du lieu la so nguyen.
{
    int data;
    Node*pNext;
};

 

struct List // Khai bao cau truc cua mot danh sach
{
    Node *pHead;
    Node *pTail;
};

 

Node *getNode(int x) //Ham tao ra not moi mang gia tri x
{
    Node *p;
    p = new Node; //xin cap phat vung nho cho phan tu Node.
    if (p==NULL)
        {
            cout<<"Bo nho khong du de cap phat";
            return NULL;
        }
    p->data =x;
    p->pNext =NULL;
    return p;
}

 

void init(List &l) // ham khoi tao danh sach rong.
{
    l.pHead =l.pTail =NULL;
}

 

void addHead(List &l, Node*p) // Add mot node moi vao dau danh sach
{
    if(l.pHead ==NULL) l.pHead =l.pTail =p;
    else
        {
            p->pNext =l.pHead;
            l.pHead = p;
        }
}

 

void addTail(List &l, Node*p) // Add mot node moi vao cuoi danh sach
{
    if(l.pHead ==NULL) l.pHead =l.pTail =p;//kiem tra danh sách rỗng
    else
        {
            l.pTail->pNext =p;
            l.pTail = p;
        }
}

 

void addAfter(List &l, Node *q, Node* p)
{
    if (q!= NULL)
    {
        p->pNext =q->pNext;
        q->pNext =p;
        if (q == l.pTail) l.pTail = p;
    }
    
}
void outPut(List l)
{
    Node *q =l.pHead;
    if (q==NULL) cout<<"Danh sach rong";
    while (q!=NULL) 
        {
            cout <<q->data <<"\t";
            q=q->pNext;
        }
}
//6. Dem so phan tu trong danh sach.
int CountNodes(List l)
{
    Node *q=l.pHead;
    int count =0;
    while (q!=NULL)
        {
            count =count +1; //count++;
            q=q->pNext;
        }
    return count;
}
// Tim kiem node co gia tri khoa la "X";
Node *Search(List l, int x)
{
    Node*q =l.pHead;
    while(q!=NULL)
    {
        if(q->data ==x) return q;
        q=q->pNext;
    }
    return NULL;
}

 

//Xoa phan tu dau tien cua danh sach
int removeHead(List &l)
{
    Node *p =l.pHead;
    if (l.pHead ==NULL) 
        return 0;
    l.pHead =p->pNext;
    if(l.pHead == NULL) 
        l.pTail =NULL; //Danh sach rong.
    delete p;
    return 1;
}

 

//1. Thêm giá trị 2 vào cuối danh sách.
//2. Thêm giá trị 3, 7 lần lượt vào đầu danh sách.
//3. Thêm giá trị 8 vào sau node có giá trị 5.
int main()
{
    Node *p;
    p=getNode(2); //Tao mot Node co gia tri bang 2.
    List l;
    init(l);
    addTail(l, p); //Them gia tri 2 vao cuoi danh sach
    p=getNode(3); //tao mot node co gia tri bang 3
    addTail(l,p); //them gia tri 3 vao dau danh sach
    p=getNode(5); //Tao mot node co gia tri bang 7
    addTail(l,p);
    p=getNode(3); //tao mot node co gia tri bang 3
    addTail(l,p); //them gia tri 3 vao dau danh sach
    p=getNode(7); //Tao mot node co gia tri bang 7
    addTail(l,p); // Them node co gia tri bang 7 vao dau danh sach.
    outPut(l);removeHead(l);
cout << endl;
 
cout << "them gia tri 8:" << endl;
    //3. Thêm giá trị 8 vào sau node có giá trị 5.
    Node *q = l.pHead;
    p=getNode(8);
        while (q->data != 5) 
            q=q->pNext;
        if (q!=NULL) 
            {addAfter(l,q,p);
            outPut(l);}
        else
            cout<<"Khong ton tai gia tri 5 trong danh sach.";

    cout <<"\nmang 10 so dau tien " << endl;
    
    //4. Nhap mang 10 so nguyen duong dau tien lien tiep vao dau danh sach.
    for (int i =1;i<=10;i++)
        {
            p=getNode(i);
            addHead(l,p);
        }
    outPut(l);
    //6. Dem so phan tu trong danh sach.
    cout<<" So phan tu trong danh sach la: " <<CountNodes(l);
    // DUng bien de nhan gia tri dem node
    int count = CountNodes(l);

 

    cout<<" \nSo phan tu trong danh sach la: " <<count;
    
}