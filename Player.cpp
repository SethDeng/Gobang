//===============================================
//Player.cppԴ�ļ�
//������Player�ĳ�Ա����
//===============================================

#include"class.h"

/*******************���캯��*********************/
Player::Player(int n)//n�����ڳ�ʼ������ҵ���Ϸ��š�Ĭ��Ϊ1
{
	num=n;
	x=y=8;
}

/*******************���庯��*********************/
void Player::play(Board & bd)
{
	cout<<"���������"<<num<<"���ӡ�"<<endl;
xia:
	cout<<"���ԡ��� �С��ĸ�ʽ������Ҫ���ӵĵ㲢���س�ȷ�ϣ�"<<endl;
	cin>>x>>y;
	if((x<0)||(x>14)||(y<0)||(y>14))
	{
		cout<<"�Բ����뽫������������֮�ڡ�"<<endl;
		goto xia;
	}
	if((bd.point[x][y]==1)||(bd.point[x][y]==2))
	{
		cout<<"�Բ��𣬸ô��Ѿ��������ӡ�"<<endl;
		goto xia;
	}
	bd.point[x][y]=num;//����
}

/*****************�ж���Ӯ����*******************/
int Player::judge(const Board & bd)//�ж����Ƿ�ﵽ5��
{
	//�ж���
	int n=1;//��ʼ��n
	if((x!=0)&&(bd.point[x-1][y]==num))//�ж�ǰһ��λ���Ƿ�����
	{
		n++;
		if(((x-1)!=0)&&(bd.point[x-2][y]==num))
		{
			n++;
			if(((x-2)!=0)&&(bd.point[x-3][y]==num))
			{
				n++;
				if(((x-3)!=0)&&(bd.point[x-4][y]==num))
				{
					n++;
				}
			}
		}
	}
	if(n>=5)
		return 1;
	if((x!=14)&&(bd.point[x+1][y]==num))
	{
		n++;
		if(((x+1)!=14)&&(bd.point[x+2][y]==num))
		{
			n++;
			if(((x+2)!=14)&&(bd.point[x+3][y]==num))
			{
				n++;
				if(((x+3)!=14)&&(bd.point[x+4][y]==num))
				{
					n++;
				}
			}
		}
	}
	if(n>=5)
		return 1;

	//�ж���
	n=1;//��ʼ��n
	if((y!=0)&&(bd.point[x][y-1]==num))
	{
		n++;
		if(((y-1)!=0)&&(bd.point[x][y-2]==num))
		{
			n++;
			if(((y-2)!=0)&&(bd.point[x][y-3]==num))
			{
				n++;
				if(((y-3)!=0)&&(bd.point[x][y-4]==num))
				{
					n++;
				}
			}
		}
	}
	if(n>=5)
		return 1;//�ﵽ5����������Ӧ
	if((y!=14)&&(bd.point[x][y+1]==num))
	{
		n++;
		if(((y+1)!=14)&&(bd.point[x][y+2]==num))
		{
			n++;
			if(((y+2)!=14)&&(bd.point[x][y+3]==num))
			{
				n++;
				if(((y+3)!=14)&&(bd.point[x][y+4]==num))
				{
					n++;
				}
			}
		}
	}
	if(n>=5)//�ﵽ5����������Ӧ
		return 1;

	//�ж���������
	n=1;//��ʼ��n
	if((x!=0)&&(y!=0)&&(bd.point[x-1][y-1]==num))
	{
		n++;
		if(((x-1)!=0)&&((y-1)!=0)&&(bd.point[x-2][y-2]==num))
		{
			n++;
			if(((x-2)!=0)&&((y-2)!=0)&&(bd.point[x-3][y-3]==num))
			{
				n++;
				if(((x-3)!=0)&&((y-3)!=0)&&(bd.point[x-4][y-4]==num))
				{
					n++;
				}
			}
		}
	}
	if(n>=5)
		return 1;
	if((x!=0)&&(y!=0)&&(bd.point[x+1][y+1]==num))
	{
		n++;
		if(((x+1)!=0)&&((y+1)!=0)&&(bd.point[x+2][y+2]==num))
		{
			n++;
			if(((x+2)!=0)&&((y+2)!=0)&&(bd.point[x+3][y+3]==num))
			{
				n++;
				if(((x+3)!=0)&&((y+3)!=0)&&(bd.point[x+4][y+4]==num))
				{
					n++;
				}
			}
		}
	}
	if(n>=5)
		return 1;

	//�ж���������
	n=1;//��ʼ��n
	if((x!=0)&&(y!=0)&&(bd.point[x+1][y-1]==num))
	{
		n++;
		if(((x+1)!=0)&&((y-1)!=0)&&(bd.point[x+2][y-2]==num))
		{
			n++;
			if(((x+2)!=0)&&((y-2)!=0)&&(bd.point[x+3][y-3]==num))
			{
				n++;
				if(((x+3)!=0)&&((y-3)!=0)&&(bd.point[x+4][y-4]==num))
				{
					n++;
				}
			}
		}
	}
	if(n>=5)
		return 1;
	if((x!=0)&&(y!=0)&&(bd.point[x-1][y+1]==num))
	{
		n++;
		if(((x-1)!=0)&&((y+1)!=0)&&(bd.point[x-2][y+2]==num))
		{
			n++;
			if(((x-2)!=0)&&((y+2)!=0)&&(bd.point[x-3][y+3]==num))
			{
				n++;
				if(((x-3)!=0)&&((y+3)!=0)&&(bd.point[x-4][y+4]==num))
				{
					n++;
				}
			}
		}
	}
	if(n>=5)
		return 1;

	//������ʤ������
	return 0;
}