//===============================================
//Computer.cppԴ�ļ�
//������Computer�ĳ�Ա����
//===============================================

#include"class.h"

/*******************���캯��*********************/
Computer::Computer()
{
	num=2;
	flag=0;
}

/*******************���庯��*********************/
void Computer::play(Board & bd)
{
	jingong(bd);
	fangshou(bd);
	bd.point[x][y]=num;
}

/**************������Ҫ���жϺ���****************/
void Computer::jingong(Board & bd)
{
	x=y=8;//��ʼ��
	flag=0;
	int i,j;
	int d,n;//��¼�������νض����ӵĸ�����������Ŀ
	float f=0;//��ʱ��¼��i����j�������Ҫ��
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			f=0;
			if((bd.point[i][j]==1)||(bd.point[i][j]==2))//����ĵ��Ѿ��������ӣ�����
			{
				continue;
			}
			//�ж�����Ҫ��
			n=1;
			d=0;
			if((i!=0)&&(bd.point[i-1][j]==num))
			{
				n++;
				if(((i-1)!=0)&&(bd.point[i-2][j]==num))
				{
					n++;
					if(((i-2)!=0)&&(bd.point[i-3][j]==num))
					{
						n++;
						if(((i-3)!=0)&&(bd.point[i-4][j]==num))
						{
							n++;
						}
						else if(((i-3)==0)||(bd.point[i-4][j]==1))
						{
							d++;
						}
					}
					else if(((i-2)==0)||(bd.point[i-3][j]==1))
					{
						d++;
					}
				}
				else if(((i-1)==0)||(bd.point[i-2][j]==1))
				{
					d++;
				}
			}
			else if((i==0)||(bd.point[i-1][j]==1))
			{
				d++;
			}
			if((i!=14)&&(bd.point[i+1][j]==num))
			{
				n++;
				if(((i+1)!=14)&&(bd.point[i+2][j]==num))
				{
					n++;
					if(((i+2)!=14)&&(bd.point[i+3][j]==num))
					{
						n++;
						if(((i+3)!=14)&&(bd.point[i+4][j]==num))
						{
							n++;
						}
						else if(((i+3)==14)||(bd.point[i+4][j]==1))
						{
							d++;
						}
					}
					else if(((i+2)==14)||(bd.point[i+3][j]==1))
					{
						d++;
					}
				}
				else if(((i+1)==14)||(bd.point[i+2][j]==1))
				{
					d++;
				}
			}
			else if((i==14)||(bd.point[i+1][j]==1))
			{
				d++;
			}
			if(n>=5)//�����ӳ�5�ӣ�������Ҫ֮����ж�
			{
				x=i;
				y=j;
				flag=100;
				return;
			}
			if(d==0)
			{
				switch(n)
				{
					case 4:f+=25;break;
					case 3:f+=7;break;
					case 2:f+=3;break;
					default:;
				}
			}
			if(d==1)
			{
				switch(n)
				{
					case 4:f+=14;break;
					case 3:f+=2;break;
					case 2:f+=1;break;
					default:;
				}
			}
			//�ж�����Ҫ��
			n=1;
			d=0;
			if((j!=0)&&(bd.point[i][j-1]==num))
			{
				n++;
				if(((j-1)!=0)&&(bd.point[i][j-2]==num))
				{
					n++;
					if(((j-2)!=0)&&(bd.point[i][j-3]==num))
					{
						n++;
						if(((j-3)!=0)&&(bd.point[i][j-4]==num))
						{
							n++;
						}
						else if(((j-3)==0)||(bd.point[i][j-4]==1))
						{
							d++;
						}
					}
					else if(((j-2)==0)||(bd.point[i][j-3]==1))
					{
						d++;
					}
				}
				else if(((j-1)==0)||(bd.point[i][j-2]==1))
				{
					d++;
				}
			}
			else if((j==0)||(bd.point[i][j-1]==1))
			{
				d++;
			}
			if((j!=14)&&(bd.point[i][j+1]==num))
			{
				n++;
				if(((j+1)!=14)&&(bd.point[i][j+2]==num))
				{
					n++;
					if(((j+2)!=14)&&(bd.point[i][j+3]==num))
					{
						n++;
						if(((j+3)!=14)&&(bd.point[i][j+4]==num))
						{
							n++;
						}
						else if(((j+3)==14)||(bd.point[i][j+4]==1))
						{
							d++;
						}
					}
					else if(((j+2)==14)||(bd.point[i][j+3]==1))
					{
						d++;
					}
				}
				else if(((j+1)==14)||(bd.point[i][j+2]==1))
				{
					d++;
				}
			}
			else if((j==14)||(bd.point[i][j+1]==1))
			{
				d++;
			}
			if(n>=5)
			{
				x=i;
				y=j;
				flag=100;
				return;
			}
			if(d==0)
			{
				switch(n)
				{
					case 4:f+=25;break;
					case 3:f+=7;break;
					case 2:f+=3;break;
					default:;
				}
			}
			if(d==1)
			{
				switch(n)
				{
					case 4:f+=14;break;
					case 3:f+=2;break;
					case 2:f+=1;break;
					default:;
				}
			}
			//�ж�����������Ҫ��
			n=1;
			d=0;
			if((i!=0)&&(j!=0)&&(bd.point[i-1][j-1]==num))
			{
				n++;
				if(((i-1)!=0)&&((j-1)!=0)&&(bd.point[i-2][j-2]==num))
				{
					n++;
					if(((i-2)!=0)&&((j-2)!=0)&&(bd.point[i-3][j-3]==num))
					{
						n++;
						if(((i-3)!=0)&&((j-3)!=0)&&(bd.point[i-4][j-4]==num))
						{
							n++;
						}
						else if(((i-3)==0)||((j-3)==0)||(bd.point[i-4][j-4]==1))
						{
							d++;
						}
					}
					else if(((i-2)==0)||((j-2)==0)||(bd.point[i-3][j-3]==1))
					{
						d++;
					}
				}
				else if(((i-1)==0)||((j-1)==0)||(bd.point[i-2][j-2]==1))
				{
					d++;
				}
			}
			else if((i==0)||(j==0)||(bd.point[i-1][j-1]==1))
			{
				d++;
			}
			if((i!=14)&&(j!=14)&&(bd.point[i+1][j+1]==num))
			{
				n++;
				if(((i+1)!=14)&&((j+1)!=14)&&(bd.point[i+2][j+2]==num))
				{
					n++;
					if(((i+2)!=14)&&((j+2)!=14)&&(bd.point[i+3][j+3]==num))
					{
						n++;
						if(((i+3)!=14)&&((j+3)!=14)&&(bd.point[i+4][j+4]==num))
						{
							n++;
						}
						else if(((i+3)==14)||((j+3)==14)||(bd.point[i+4][j+4]==1))
						{
							d++;
						}
					}
					else if(((i+2)==14)||((j+2)==14)||(bd.point[i+3][j+3]==1))
					{
						d++;
					}
				}
				else if(((i+1)==14)||((j+1)==14)||(bd.point[i+2][j+2]==1))
				{
					d++;
				}
			}
			else if((i==14)||(j==14)||(bd.point[i+1][j+1]==1))
			{
				d++;
			}
			if(n>=5)
			{
				x=i;
				y=j;
				flag=100;
				return;
			}
			if(d==0)
			{
				switch(n)
				{
					case 4:f+=25;break;
					case 3:f+=7;break;
					case 2:f+=3;break;
					default:;
				}
			}
			if(d==1)
			{
				switch(n)
				{
					case 4:f+=14;break;
					case 3:f+=2;break;
					case 2:f+=1;break;
					default:;
				}
			}
			//�ж�����������Ҫ��
			n=1;
			d=0;
			if((i!=14)&&(j!=0)&&(bd.point[i+1][j-1]==num))
			{
				n++;
				if(((i+1)!=14)&&((j-1)!=0)&&(bd.point[i+2][j-2]==num))
				{
					n++;
					if(((i+2)!=14)&&((j-2)!=0)&&(bd.point[i+3][j-3]==num))
					{
						n++;
						if(((i+3)!=14)&&((j-3)!=0)&&(bd.point[i+4][j-4]==num))
						{
							n++;
						}
						else if(((i+3)==14)||((j-3)==0)||(bd.point[i+4][j-4]==1))
						{
							d++;
						}
					}
					else if(((i+2)==14)||((j-2)==0)||(bd.point[i+3][j-3]==1))
					{
						d++;
					}
				}
				else if(((i+1)==14)||((j-1)==0)||(bd.point[i+2][j-2]==1))
				{
					d++;
				}
			}
			else if((i==14)||(j==0)||(bd.point[i+1][j-1]==1))
			{
				d++;
			}
			if((i!=0)&&(j!=14)&&(bd.point[i-1][j+1]==num))
			{
				n++;
				if(((i-1)!=0)&&((j+1)!=14)&&(bd.point[i-2][j+2]==num))
				{
					n++;
					if(((i-2)!=0)&&((j+2)!=14)&&(bd.point[i-3][j+3]==num))
					{
						n++;
						if(((i-3)!=0)&&((j+3)!=14)&&(bd.point[i-4][j+4]==num))
						{
							n++;
						}
						else if(((i-3)==0)||((j+3)==14)||(bd.point[i-4][j+4]==1))
						{
							d++;
						}
					}
					else if(((i-2)==0)||((j+2)==14)||(bd.point[i-3][j+3]==1))
					{
						d++;
					}
				}
				else if(((i-1)==0)||((j+1)==14)||(bd.point[i-2][j+2]==1))
				{
					d++;
				}
			}
			else if((i==0)||(j==14)||(bd.point[i-1][j+1]==1))
			{
				d++;
			}
			if(n>=5)
			{
				x=i;
				y=j;
				flag=100;
				return;
			}
			if(d==0)
			{
				switch(n)
				{
					case 4:f+=25;break;
					case 3:f+=7;break;
					case 2:f+=3;break;
					default:;
				}
			}
			if(d==1)
			{
				switch(n)
				{
					case 4:f+=14;break;
					case 3:f+=2;break;
					case 2:f+=1;break;
					default:;
				}
			}
			if(f>flag)
			{
				flag=f;
				x=i;
				y=j;
			}
		}
	}
}

/**************������Ҫ���жϺ���****************/
void Computer::fangshou(Board & bd)
{
	if(flag==100)//�������jingong�����Ѿ��ж��˿���һ�嶨ʤ����������Ҫ�����жϡ�
		return;
	num=1;//�жϽ�������ʱ��num��Ϊ1��������β�Ļ�
	int i,j;
	int d,n;//��¼�������νض����ӵĸ�����������Ŀ
	float f=0;//��ʱ��¼��i����j�������Ҫ��
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			f=0;
			if((bd.point[i][j]==1)||(bd.point[i][j]==2))//����ĵ��Ѿ��������ӣ�����
				continue;
			//�ж�����Ҫ��
			n=1;
			d=0;
			if((i!=0)&&(bd.point[i-1][j]==num))
			{
				n++;
				if(((i-1)!=0)&&(bd.point[i-2][j]==num))
				{
					n++;
					if(((i-2)!=0)&&(bd.point[i-3][j]==num))
					{
						n++;
						if(((i-3)!=0)&&(bd.point[i-4][j]==num))
						{
							n++;
						}
						else if(((i-3)==0)||(bd.point[i-4][j]==2))
						{
							d++;
						}
					}
					else if(((i-2)==0)||(bd.point[i-3][j]==2))
					{
						d++;
					}
				}
				else if(((i-1)==0)||(bd.point[i-2][j]==2))
				{
					d++;
				}
			}
			else if((i==0)||(bd.point[i-1][j]==2))
			{
				d++;
			}
			if((i!=14)&&(bd.point[i+1][j]==num))
			{
				n++;
				if(((i+1)!=14)&&(bd.point[i+2][j]==num))
				{
					n++;
					if(((i+2)!=14)&&(bd.point[i+3][j]==num))
					{
						n++;
						if(((i+3)!=14)&&(bd.point[i+4][j]==num))
						{
							n++;
						}
						else if(((i+3)==14)||(bd.point[i+4][j]==2))
						{
							d++;
						}
					}
					else if(((i+2)==14)||(bd.point[i+3][j]==2))
					{
						d++;
					}
				}
				else if(((i+1)==14)||(bd.point[i+2][j]==2))
				{
					d++;
				}
			}
			else if((i==14)||(bd.point[i+1][j]==2))
			{
				d++;
			}
			if(n>=5)//�����ӳ�5�ӣ��������Ϸ�£�ֹ֮ͣ����ж�
			{
				x=i;
				y=j;
				flag=100;
				num=2;//�жϽ�������num�Ļ�2
				return;
			}
			if(d==0)
			{
				switch(n)
				{
					case 4:f+=25;break;
					case 3:f+=7;break;
					case 2:f+=3;break;
					default:;
				}
			}
			if(d==1)
			{
				switch(n)
				{
					case 4:f+=14;break;
					case 3:f+=2;break;
					case 2:f+=1;break;
					default:;
				}
			}
			//�ж�����Ҫ��
			n=1;
			d=0;
			if((j!=0)&&(bd.point[i][j-1]==num))
			{
				n++;
				if(((j-1)!=0)&&(bd.point[i][j-2]==num))
				{
					n++;
					if(((j-2)!=0)&&(bd.point[i][j-3]==num))
					{
						n++;
						if(((j-3)!=0)&&(bd.point[i][j-4]==num))
						{
							n++;
						}
						else if(((j-3)==0)||(bd.point[i][j-4]==2))
						{
							d++;
						}
					}
					else if(((j-2)==0)||(bd.point[i][j-3]==2))
					{
						d++;
					}
				}
				else if(((j-1)==0)||(bd.point[i][j-2]==2))
				{
					d++;
				}
			}
			else if((j==0)||(bd.point[i][j-1]==2))
			{
				d++;
			}
			if((j!=14)&&(bd.point[i][j+1]==num))
			{
				n++;
				if(((j+1)!=14)&&(bd.point[i][j+2]==num))
				{
					n++;
					if(((j+2)!=14)&&(bd.point[i][j+3]==num))
					{
						n++;
						if(((j+3)!=14)&&(bd.point[i][j+4]==num))
						{
							n++;
						}
						else if(((j+3)==14)||(bd.point[i][j+4]==2))
						{
							d++;
						}
					}
					else if(((j+2)==14)||(bd.point[i][j+3]==2))
					{
						d++;
					}
				}
				else if(((j+1)==14)||(bd.point[i][j+2]==2))
				{
					d++;
				}
			}
			else if((j==14)||(bd.point[i][j+1]==2))
			{
				d++;
			}
			if(n>=5)
			{
				x=i;
				y=j;
				flag=100;
				num=2;//�жϽ�������num�Ļ�2
				return;
			}
			if(d==0)
			{
				switch(n)
				{
					case 4:f+=25;break;
					case 3:f+=7;break;
					case 2:f+=3;break;
					default:;
				}
			}
			if(d==1)
			{
				switch(n)
				{
					case 4:f+=14;break;
					case 3:f+=2;break;
					case 2:f+=1;break;
					default:;
				}
			}
			//�ж�����������Ҫ��
			n=1;
			d=0;
			if((i!=0)&&(j!=0)&&(bd.point[i-1][j-1]==num))
			{
				n++;
				if(((i-1)!=0)&&((j-1)!=0)&&(bd.point[i-2][j-2]==num))
				{
					n++;
					if(((i-2)!=0)&&((j-2)!=0)&&(bd.point[i-3][j-3]==num))
					{
						n++;
						if(((i-3)!=0)&&((j-3)!=0)&&(bd.point[i-4][j-4]==num))
						{
							n++;
						}
						else if(((i-3)==0)||((j-3)==0)||(bd.point[i-4][j-4]==2))
						{
							d++;
						}
					}
					else if(((i-2)==0)||((j-2)==0)||(bd.point[i-3][j-3]==2))
					{
						d++;
					}
				}
				else if(((i-1)==0)||((j-1)==0)||(bd.point[i-2][j-2]==2))
				{
					d++;
				}
			}
			else if((i==0)||(j==0)||(bd.point[i-1][j-1]==2))
			{
				d++;
			}
			if((i!=14)&&(j!=14)&&(bd.point[i+1][j+1]==num))
			{
				n++;
				if(((i+1)!=14)&&((j+1)!=14)&&(bd.point[i+2][j+2]==num))
				{
					n++;
					if(((i+2)!=14)&&((j+2)!=14)&&(bd.point[i+3][j+3]==num))
					{
						n++;
						if(((i+3)!=14)&&((j+3)!=14)&&(bd.point[i+4][j+4]==num))
						{
							n++;
						}
						else if(((i+3)==14)||((j+3)==14)||(bd.point[i+4][j+4]==2))
						{
							d++;
						}
					}
					else if(((i+2)==14)||((j+2)==14)||(bd.point[i+3][j+3]==2))
					{
						d++;
					}
				}
				else if(((i+1)==14)||((j+1)==14)||(bd.point[i+2][j+2]==2))
				{
					d++;
				}
			}
			else if((i==14)||(j==14)||(bd.point[i+1][j+1]==2))
			{
				d++;
			}
			if(n>=5)
			{
				x=i;
				y=j;
				flag=100;
				num=2;//�жϽ�������num�Ļ�2
				return;
			}
			if(d==0)
			{
				switch(n)
				{
					case 4:f+=25;break;
					case 3:f+=7;break;
					case 2:f+=3;break;
					default:;
				}
			}
			if(d==1)
			{
				switch(n)
				{
					case 4:f+=14;break;
					case 3:f+=2;break;
					case 2:f+=1;break;
					default:;
				}
			}
			//�ж�����������Ҫ��
			n=1;
			d=0;
			if((i!=14)&&(j!=0)&&(bd.point[i+1][j-1]==num))
			{
				n++;
				if(((i+1)!=14)&&((j-1)!=0)&&(bd.point[i+2][j-2]==num))
				{
					n++;
					if(((i+2)!=14)&&((j-2)!=0)&&(bd.point[i+3][j-3]==num))
					{
						n++;
						if(((i+3)!=14)&&((j-3)!=0)&&(bd.point[i+4][j-4]==num))
						{
							n++;
						}
						else if(((i+3)==14)||((j-3)==0)||(bd.point[i+4][j-4]==2))
						{
							d++;
						}
					}
					else if(((i+2)==14)||((j-2)==0)||(bd.point[i+3][j-3]==2))
					{
						d++;
					}
				}
				else if(((i+1)==14)||((j-1)==0)||(bd.point[i+2][j-2]==2))
				{
					d++;
				}
			}
			else if((i==14)||(j==0)||(bd.point[i+1][j-1]==2))
			{
				d++;
			}
			if((i!=0)&&(j!=14)&&(bd.point[i-1][j+1]==num))
			{
				n++;
				if(((i-1)!=0)&&((j+1)!=14)&&(bd.point[i-2][j+2]==num))
				{
					n++;
					if(((i-2)!=0)&&((j+2)!=14)&&(bd.point[i-3][j+3]==num))
					{
						n++;
						if(((i-3)!=0)&&((j+3)!=14)&&(bd.point[i-4][j+4]==num))
						{
							n++;
						}
						else if(((i-3)==0)||((j+3)==14)||(bd.point[i-4][j+4]==2))
						{
							d++;
						}
					}
					else if(((i-2)==0)||((j+2)==14)||(bd.point[i-3][j+3]==2))
					{
						d++;
					}
				}
				else if(((i-1)==0)||((j+1)==14)||(bd.point[i-2][j+2]==2))
				{
					d++;
				}
			}
			else if((i==0)||(j==14)||(bd.point[i-1][j+1]==2))
			{
				d++;
			}
			if(n>=5)
			{
				x=i;
				y=j;
				flag=100;
				num=2;//�жϽ�������num�Ļ�2
				return;
			}
			if(d==0)
			{
				switch(n)
				{
					case 4:f+=25;break;
					case 3:f+=7;break;
					case 2:f+=3;break;
					default:;
				}
			}
			if(d==1)
			{
				switch(n)
				{
					case 4:f+=14;break;
					case 3:f+=2;break;
					case 2:f+=1;break;
					default:;
				}
			}
			if(f>flag)
			{
				flag=f;
				x=i;
				y=j;
			}
		}
	}
	num=2;//�жϽ�������num�Ļ�2
}