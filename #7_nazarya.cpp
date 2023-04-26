
////#masala
//#include<iostream>
//#include <stdlib.h>
//#include <ctime>
//
//using namespace std;//tasodifiy n ta son
//int main(){
//	int i=1,n;
//	float x;
//	cin>>n;
//	
//	srand(time(NULL));// har safar yangi son uyledi
//	
//	do{
//		
//		x=rand() % n +1;// +1 0 ni olmasligi uchun
//		
//		cout<<x<<" ";
//		i++;
//		
//	}while(n>=i);
//	
//	//cout<<" "<<endl;
//	return 0;
//}

//#2 kompyuter uylagan sonni topish

//#include <iostream>
//#include <stdlib.h>
//#include <ctime>
//
//using namespace std;
//
//int main(){
//	int n=100,k,i;
//	srand(time(NULL));
//	k= rand() % n + 1;
//	
//	
//	do{
//		cout<<"Son kiriting:"; cin>>i;
//		if(k>i){
//			cout<<"Kattaroq son kiriting"<<endl;
//		}
//		if(k<i){
//			cout<<"Kichikroq son kiriting"<<endl;
//		}
//		
//	}while(k!=i);
//	cout<<"Qoyil topdingiz:: :) "<<endl;
//	
//	system("pause");
//	
//	return 0;
//}

////#1a

//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	float s=0, k=0;
//	cin>>n>>k;
//	
//	do{
//		k++;
//		s+=1/k;
//		
//	}while(k<=n);
//	
//	cout<<s<<endl;
//	
//	return 0;
//}

//#1b
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	float s=0, k=0, d;
//	cin>>n>>k;
//	
//	do{
//		k++;
//		d=k*k*k*k*k;
//		s+=1/d;
//		
//	}while(k<=n);
//	
//	cout<<s<<endl;
//	
//	return 0;
//}

//#1c
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	float s=0, k=0, m=1;
//	cin>>n>>k;
//	
//	do{
//		k++;
//		m=(2*k+1);
//		
//		s+=1/m*m;
//		
//	}while(k<=n);
//	
//	cout<<s<<endl;
//	
//	return 0;
//}

//#1d
//#include<iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	int n;
//	float s=0, k=1,ishora, m=1;
//	cin>>n;
//	ishora=-1;
//	do{
//		
//		
//		ishora=pow(-1,k);
//		m=(2*k+1)*k;
//		s+=ishora/m;
//		k++;
//		
//	}while(k<=n);
//	
//	cout<<s<<endl;
//	
//	return 0;
//}

//#2a
//#include <iostream>
//using namespace std;
//int main(){
//	int n, i=1;
//	float x, s=0, surat=1, p=1;;
//	cin>>n>>x;
//	do{
//		surat*=x;
//		p*=i;
//		s+=surat/p ;
//		i++;
//	}while(i<=n);
//	cout<<s<<endl;
//	
//	return 0;
//}
//#2b
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n, i=1;
//	float x, s=0, p=1;;
//	cin>>n>>x;
//	do{
//
//		p*=i;
//		s+=((1/p) + sqrt(abs(x))) ;
//		i++;
//	}while(i<=n);
//	cout<<s<<endl;
//	
//	return 0;
//}
//#2c
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n, i=1;
//	float x, s=0, surat=1, maxraj=1;;
//	cin>>n>>x;
//	do{
//		surat=(x+cos(i*x));
//		maxraj*=2;
//		s+=(surat/maxraj) ;
//		i++;
//	}while(i<=n);
//	cout<<s<<endl;
//	
//	return 0;
//}

//#2d
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n, i=1;
//	float x, p=1, surat=1, maxraj=1;;
//	cin>>n>>x;
//	do{
//		surat=(sin(i*x));
//		maxraj*=i;
//		p+=(1+(surat/maxraj) );
//		i++;
//	}while(i<=n);
//	cout<<p<<endl;
//	
//	return 0;
//}

//#3
//#include <iostream>
//using namespace std;
//int main(){
//	int n, a=1, k=1;
//	cin>>n>>k;
//	do{
//		k++;
//		a=k*a +1/k;
//		
//	}while(k<n);
//	
//	cout<<a<<endl;
//	
//	return 0;
//}

//#4
//#include <iostream>
//using namespace std;
//int main(){
//	int n, v1=0, v2=0, v3=1.5, v=v3, i=0, p;
//	cin>>n;
//	do{
//		p=v;
//		v=(i+1)/ (i*i+1)*v3-v2*v1;
//		v1=v2;
//		v2=v3;
//		v3=p;
//		i++;
//		
//	}while(i<n);
//	
//	cout<<v<<endl;
//	
//	return 0;
//}

//#5
//#include <iostream>
//using namespace std;
//int main(){
//	int n, k;
//	float x, x0, q, r, b, c, d, x1, xx;
//	cin>>n>>q>>r>>b>>c>>d;
//	
//	cin>>n;
//	
//	do{
//		k++;
//		x0=x1;
//		x1=xx;
//		x=q*x1+r*x0+b;
//		xx=x;
//		
//	}while(k<n);
//	
//	cout<<x<<endl;
//	
//	return 0;
//}

//#6
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	int n;
//	float a0=1, a1=1,a,i=1,p=1;
//	
//	cin>>n;
//	
//	cin>>n;
//	
//	do{
//		a=a0+a1/pow(2.0,i-1);
//		a0=a1;
//		a1=a;
//		p*=a;
//		
//	}while(i<n);
//	
//	cout<<p<<endl;
//	
//	return 0;
//}

//#7
//#include <iostream>
//using namespace std;
//int main(){
//	float s,i;
//	
//	s=103;
//	i=101;
//	
//	do{
//		s=i+1/s ;
//		i=i-2;
//	}while(i>0);
//	s=1/s;
//	cout<<s<<endl;
//	
//	return 0;
//}

//#8
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//	float s, i, x;
//	cin>>x;
//	i=256;
//	s=x*x;
//	
//	do{	
//		s=x*x+i/s ;
//		i/=2;
//
//	}while(i>1);
//	s=x/s;
//	cout<<s<<endl;
//	
//	return 0;
//}

