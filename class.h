//===============================================
//class.hͷ�ļ�
//�������ж�������ͷ�ļ�
//===============================================

#ifndef _CLASSS_H_
#define _CLASSS_H_

/******************����ͷ�ļ�********************/
#include<cstdlib>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*******************�ࣺ����*********************/
class Player;//���������
class Board
{
public:
	int point[15][15];//���̸��ڵ㡣��׼15*15·����������
public:
	void display(Player *pt=NULL,int duixiang=1);//��duixiang=1ʱ��˵��������Ҷ�ս��=2ʱ��������Զ�ս
	Board();
};

/*******************�ࣺ���*********************/
class Player
{
public:
	int num;//������Ϸ����ұ�š�1��2
	int x,y;//��¼������ӵĽڵ�����
public:
	Player(int n=1);//n�����ڳ�ʼ������ҵ���Ϸ��š�Ĭ��Ϊ1
	int judge(const Board & bd);//ȡʤ�ж�
	void play(Board & bd);//���庯��
};

/*****************�ࣺ�������*******************/
class Computer:public Player//�̳�������ࡣĬ�ϱ��num����ʼ��Ϊ2
{
public:
	float flag;//���ڴ洢����������Ҫ��
public:
	Computer();
	void jingong(Board & bd);//������Ҫ���жϺ���
	void fangshou(Board & bd);//������Ҫ���ж�
	void play(Board & bd);//���庯��
};

#endif