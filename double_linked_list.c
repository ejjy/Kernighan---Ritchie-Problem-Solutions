#include <stdio.h>

typedef struct n {
	double data;
	struct n *next;
	struct n *prev;
} node;

typedef struct l {
	node *head;
	int length;
} list;

void print_items(node *x)
{
	printf("%4.2f",x->data);
	if (x->prev == NULL ) {
		printf(" ");
	} else {
		printf(", ");
		print_items(x->prev);
	}
	return;
}

void print_list(list x)
{
	printf("[ ");
	if (x.head != NULL) {
		 print_items((x.head));
	}
	printf("]\n");
	return;
}

int main()
{
	node a, b, c, d;
	a.data = 97.90+1;
	b.data = 1.2;
	c.data = -90.4;
	d.data = 42.0;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = NULL;
    a.prev = NULL;
    b.prev = &a;
    c.prev = &b;
    d.prev = &c;      

	//list A = { .head=&a, .length=4 };
	//list B = { .head=&b, .length=3 };
	list C = { .head=&d, .length=4 };
    //print_list(A);
	//print_list(B);
    print_list(C);
	return 0;
}
