#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int** DisMat;
struct Node {
    int data;
    int distance;
    bool check;
    Node* ahead;
};
Node** Array;
bool Creat(int point, int line) {
    if (point == 0 && line == 0) { cout << "��ͼΪ��ͼ��" << endl; return false; }
    if (point == 0 && line != 0 || point != 0 && line == 0) { cout << "��ͼ�Ǵ�ġ�" << endl; return false; }
    DisMat = new int* [point + 1];
    for (int i = 0; i <= point; i++) {
        DisMat[i] = new int[point + 1];
    }
    for (int i = 0; i <= point; i++) {
        for (int j = 0; j <= point; j++) {
            DisMat[i][j] = 0;
        }
    }
    int head; int tail; int distance; int i = 1;
    cout << "��ӵ�1��ʼ���롣" << endl;
    while (line != 0) {
        cout << "�������" << i << "���ߵ�ͷ��β�Լ�����" << endl;
        cin >> head >> tail >> distance;
        DisMat[head][tail] = distance;
        DisMat[tail][head] = distance;
        i++;
        line--;
    }
    return true;
}
void Traverse(int point, int line) {
    int min = 999;
    Node* best = new Node;
    for (int i = 1; i <= point; i++) {
        if (Array[i]->check == true && (Array[i]->distance) < min) {
            min = Array[i]->distance;
            best = Array[i];
        }
    }
    int bests = best->data;
    Array[bests]->check = false;
    for (int i = 1; i <= point; i++) {
        if (DisMat[bests][i] != 0 && Array[i]->check == true && ((Array[i]->distance) > (DisMat[bests][i] + Array[bests]->distance))) {
            Array[i]->distance = DisMat[bests][i] + Array[bests]->distance;
            Array[i]->ahead = Array[bests];
        }
    }
    for (int i = 1; i <= point; i++) {
        if (Array[i]->check == true)Traverse(point, line);
    }
}
void bTraverse(int point, int line) {
    Array = new Node * [point + 1];
    for (int i = 1; i <= point; i++) {
        Node* example = new Node;
        example->distance = 9999;
        example->ahead = NULL;
        example->data = i;
        example->check = true;
        Array[i] = example;
    }
    Array[1]->distance = 0;
    Traverse(point, line);
}
int main() {
    cout << "����������ͱ���" << endl;
    int point, line;
    cin >> point >> line;
    Creat(point, line);
    bTraverse(point, line);
    for (int i = 2; i <= point; i++) {
        if (Array[i]->distance != 9999) {
            int end[100] = { 0 }; int tran = 99;
            Node* x = Array[i];
            cout << "��1����" << i << "�����·��Ϊ��";
            while (x->ahead != NULL) {
                end[tran] = x->data;
                tran--;
                x = x->ahead;
            }
            end[tran] = x->data;
            for (int i = 0; i <= 98; i++) {
                if (end[i] != 0)cout << end[i] << "��";
            }
            cout << end[99] << endl;
            cout << "��1����" << i << "����̾���Ϊ��";
            cout << Array[i]->distance << endl;
        }
        else {
            cout << "��1����" << i << "û��ͨ·��" << endl;
        }
    }
}