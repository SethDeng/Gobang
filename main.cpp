//===============================================
//main.cppԴ�ļ�
//����������Ϸ���̺���
//===============================================

#include"class.h"

/***************�˻���ս���̺���*****************/
void ptc()
{
	Board gobang;//���̣�gobang
	gobang.display();
	Player player1(1);//���1��player1
	Computer comp;//��ҵ��ԣ�comp
	while (1)//��ѭ��������һ��ʤ��ʱ���˳�����
	{
		player1.play(gobang);
		gobang.display(&player1,2);
		if(player1.judge(gobang)==1)
		{
			cout<<"���1���ʤ�������������������"<<endl;
			system("pause");
			return;
		}
		comp.play(gobang);
		gobang.display(&comp,2);
		if(comp.judge(gobang)==1)
		{
			cout<<"���Ի��ʤ�������������������"<<endl;
			system("pause");
			return;
		}
	}
}

/***************˫�˶�ս���̺���*****************/
void ptp()
{
	Board gobang;//���̣�gobang
	gobang.display();
	Player player1(1),player2(2);//���1��player1�����2��player2
	while (1)//��ѭ��������һ��ʤ��ʱ���˳�����
	{
		player1.play(gobang);
		gobang.display(&player1,1);
		if(player1.judge(gobang)==1)
		{
			cout<<"���1���ʤ�������������������"<<endl;
			system("pause");
			return;
		}
		player2.play(gobang);
		gobang.display(&player2,1);
		if(player2.judge(gobang)==1)
		{
			cout<<"���2���ʤ�������������������"<<endl;
			system("pause");
			return;
		}
	}
}

/****************��Ϸ����������******************/
int main()
{
	int m=0;//�����ж���Ϸģʽ��
	system ("color 3f");//�趨��������ɫ���ַ���ɫ����
loop:
	system("cls");
	cout<<"==========================================="<<endl;
	cout<<"||           ��ӭ���������壡            ||"<<endl;
	cout<<"==========================================="<<'\n'<<endl;
	cout<<"��ѡ����Ϸģʽ��"<<'\n'<<"˫�˶�ս�������롰1�����س���"<<'\n'<<"�˻���ս�������롰2�����س���"<<endl;
	cin>>m;
	if(m==1)//˫�˶�սģʽ
		ptp();
	else if(m==2)//�˻���սģʽ
		ptc();
	else
		goto loop;
	goto loop;
	return 0;
}