#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct P{
	int a,b;
};
bool cmp(P A,P B){
	return A.a*B.b + A.b < B.a * A.b + B.b;
}

const int L=110;
string add(string a,string b)//ֻ�������Ǹ��������
{
    string ans;
    int na[L]={0},nb[L]={0};
    int la=a.size(),lb=b.size();
    for(int i=0;i<la;i++) na[la-1-i]=a[i]-'0';
    for(int i=0;i<lb;i++) nb[lb-1-i]=b[i]-'0';
    int lmax=la>lb?la:lb;
    for(int i=0;i<lmax;i++) na[i]+=nb[i],na[i+1]+=na[i]/10,na[i]%=10;
    if(na[lmax]) lmax++;
    for(int i=lmax-1;i>=0;i--) ans+=na[i]+'0';
    return ans;
}

string mul(string a,string b)//�߾��ȳ˷�a,b,��Ϊ�Ǹ�����
{
    string s;
    int na[L],nb[L],nc[L],La=a.size(),Lb=b.size();//na�洢��������nb�洢������nc�洢��
    fill(na,na+L,0);fill(nb,nb+L,0);fill(nc,nc+L,0);//��na,nb,nc����Ϊ0
    for(int i=La-1;i>=0;i--) na[La-i]=a[i]-'0';//���ַ�����ʾ�Ĵ�������ת��i���������ʾ�Ĵ�������
    for(int i=Lb-1;i>=0;i--) nb[Lb-i]=b[i]-'0';
    for(int i=1;i<=La;i++)
        for(int j=1;j<=Lb;j++)
        nc[i+j-1]+=na[i]*nb[j];//a�ĵ�iλ����b�ĵ�jλΪ���ĵ�i+j-1λ���Ȳ����ǽ�λ��
    for(int i=1;i<=La+Lb;i++)
        nc[i+1]+=nc[i]/10,nc[i]%=10;//ͳһ�����λ
    if(nc[La+Lb]) s+=nc[La+Lb]+'0';//�жϵ�i+jλ�ϵ������ǲ���0
    for(int i=La+Lb-1;i>=1;i--)
        s+=nc[i]+'0';//����������ת���ַ���
    return s;
}

int main()
{
	int n,x;
	scanf("%d%d",&n,&x);
	P p[n];
	for(int i = 0;i < n;i++){
		scanf("%d%d",&p[i].a,&p[i].b); 
	}
	sort(p,p + n,cmp);
	string X = to_string(x);
	for(int i = 0;i < n;i++){
		string c = mul(X,to_string(p[i].a));
//		cout<<c<<endl;
		X = add(c,to_string(p[i].b));
	}
	cout<<X;
	return 0;	
} 
