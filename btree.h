#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



#define M 3

struct node {
  int n;
  /* n < M No. of keys in node will always less than order of B
tree */
  int keys[M - 1]; /*array of keys*/
  struct node * p[M]; /* (n+1 pointers will be in use) */
}* root = NULL;

enum KeyStatus {
  Duplicate,
  SearchFailure,
  Success,
  InsertIt,
  LessKeys
};

void insert(int key);
void display(struct node * root, int);
void DelNode(int x);
void search(int x);
enum KeyStatus ins(struct node * r, int x, int * y, struct node ** u);
int searchPos(int x, int * key_arr, int n);
enum KeyStatus del(struct node * r, int x);