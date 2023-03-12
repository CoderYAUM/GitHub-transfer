#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20
#define ERROR -1
#define OK   1
#define FALSE 0
#define TRUE  1
typedef enum { RIGHT, DOWN, LEFT, UP }Direction;
typedef enum { YES, NO }MarkTag;
typedef struct position  
{
    int x;
    int y;
}Position;
typedef struct
{
    int order;          
    Position seat;       
    Direction di;       
}SElemType;             
typedef struct
{
    SElemType* elem;
    int top;
}Stack;
char maze[MAXSIZE][MAXSIZE] = {
 {'1','1','1','1','1','1','1','1','1','1','1'},
 {'1','0','1','0','0','1','1','1','0','0','1'},
 {'1','0','0','0','0','0','1','0','0','1','1'},
 {'1','0','1','1','1','0','0','0','1','1','1'},
 {'1','0','0','0','1','0','1','1','0','1','1'},
 {'1','1','0','0','1','0','1','1','0','0','1'},
 {'1','1','1','0','0','0','0','0','0','0','1'},
 {'1','1','1','1','1','1','1','1','1','1','1'}
};   
int InitStack(Stack* S)             
{
    S->elem = (SElemType*)malloc(MAXSIZE * MAXSIZE * sizeof(SElemType));
    if (!S->elem)  return ERROR;
    S->top = 0;    return OK;
}
int Push(Stack* S, SElemType e)    { 
    if (S->top >= MAXSIZE * MAXSIZE)   return ERROR;
    S->elem[S->top++] = e;
    return OK;
}
int Pop(Stack* S, SElemType* e) 
{
    if (S->top <= 0)     return ERROR;
    *e = S->elem[--S->top];   return OK;
}
int Empty(Stack S)    {
    if (S.top == 0)    return TRUE;
    else   return FALSE;
}
int createMaze(Position* startpos, Position* endpos)
{
    Position start, end;
    printf("�������Թ���ڵ�λ�ã�");
    scanf("%d%d", &start.x, &start.y);
    printf("�������Թ����ڵ�λ�ã�");
    scanf("%d%d", &end.x, &end.y);
    *startpos = start; *endpos = end;
    return OK;
}  
int canPass(Position curpos)
{
    if (maze[curpos.x][curpos.y] == '0')   return TRUE;
    return FALSE;
}  
void markPos(Position curpos, MarkTag tag)     {
    switch (tag)
    {
    case YES: maze[curpos.x][curpos.y] = '.'; break;  
    case NO:  maze[curpos.x][curpos.y] = '#'; break;  
    }
}
Position nextPos(Position curpos, Direction dir)
{
    Position nextpos;
    switch (dir)
    {
    case RIGHT:nextpos.x = curpos.x; nextpos.y = curpos.y + 1; break;
    case DOWN:nextpos.x = curpos.x + 1; nextpos.y = curpos.y; break;
    case LEFT:nextpos.x = curpos.x; nextpos.y = curpos.y - 1; break;
    case UP:nextpos.x = curpos.x - 1; nextpos.y = curpos.y;  break;
    }
    return nextpos;
}
Direction nextDir(Direction dir)
{
    switch (dir)
    {
    case RIGHT: return DOWN;
    case DOWN: return LEFT;
    case LEFT: return UP;
    }
}
int Solve(Stack* S, Position start, Position end)
{
    Position curpos;
    SElemType e;
    int curstep = 1;   
    if (InitStack(S) == ERROR)  return FALSE;
    curpos = start;
    do {
        if (canPass(curpos)) {      
            markPos(curpos, YES);  
            e.order = curstep; e.seat = curpos; e.di = RIGHT;
            Push(S, e);             
            if (curpos.x == end.x && curpos.y == end.y)   
                return TRUE;
            curpos = nextPos(curpos, RIGHT);
            curstep++;
        }
        else {              
            if (!Empty(*S)) {
                if (Pop(S, &e) == ERROR)   return FALSE;
                while (e.di == UP && !Empty(*S)) {
                    curpos = e.seat; markPos(curpos, NO);
                    if (Pop(S, &e) == ERROR)  return FALSE;
                }
                if (e.di != UP) {   
                    e.di = nextDir(e.di);
                    Push(S, e);  
                    curpos = nextPos(e.seat, e.di);
                }
            }
        }
    } while (!Empty(*S));
    return FALSE;
}
void main()
{
    Position startPos, endPos;
    Stack path;
    int i, j;
    SElemType e;
    if (createMaze(&startPos, &endPos) == ERROR) return;
    Solve(&path, startPos, endPos);
    while (!Empty(path)) {
        Pop(&path, &e);
        printf("(%d,%d)", e.seat.x, e.seat.y);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 11; j++)
            printf("%c ", maze[i][j]);
        printf("\n");
    }
}