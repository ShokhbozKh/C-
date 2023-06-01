//#1
//#include <iostream>
//using namespace std;
//int main(){
//	int a[5]={0};
//	
//	for(int i=0; i<=4; i++){
//		cout<<"a["<<i<<"]"<<a[i]<<endl;
//	}
//	
//	return 0;
//}

//#2
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"massiv soni:"; cin>>n;
//	int a[10]={0};
//	// kiritish
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]="; cin>>a[i];
//	}
//	// chiqarish
//	for(int i=0; i<n ; i++){
//		cout<<"a["<<i<<"] "<<a[i]<<endl;
//	}
//	//kursatkichlar bilan ishlash
//	
//	for (int i=0; i<n ;i++){
//		cout<<*(a+i)<<" "<<endl;
//	}
//	
//	return 0;
//}

//#3
//#include <iostream>
//using namespace std;
//int main(){
//	int a[10];
//	int n, sum=0;
//	cin>>n;
//	for (int i=0; i<n; i++){
//		cout<<"massiv element kirit=";
//		cin>>a[i];
//		sum+=a[i];
//	}
//	cout<<"summa:"<<sum<<endl;
//	
//	return 0;
//}
//4

//massiv ga element kiritib yig'indi topib ichidan kichigini topish

//#include <iostream>
//using namespace std;
//int main(){
//	int a[10];
//	int sum=0, n, min, urni;
//	cout<<"massiv elementlari soni=";
//	cin>>n;
//	
//	for(int i=0; i<n; i++){
//		cout<<"masiv elementini kirit= a["<<i+1<<"]=";
//		cin>>a[i];
//		
//		sum=sum+a[i];
//	}
//	min=a[0];
//	urni=0;
//	for(int i=0; i<n; i++){
//		if(min>a[i]){
//			min=a[i];
//			urni=i;
//		}
//	}
//	cout<<"summa="<<sum<<endl;
//	cout<<"minimal elementi="<<min<<endl;
//	cout<<"minimal elementi urni="<<urni<<endl;
//	
//}

//# massiv elementlarini usish tartibida saralash;

//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	int a[10];
//	
//	cout<<"element soni=";
//	cin>>n;
//	
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]=";
//		cin>>a[i];
//		
//	}
//	for(int i=0; i<n; i++)
//		cout<<a[i]<<" ";
//		
//	cout<<endl;
//
//	// saralash usish va kamayish
//	for(int i=0; i<n-1; i++){
//		
//		for(int j=i+1; j<n; j++){
//			
//			if(a[i]> a[j]){
//				
//				int	k=a[i];
//				a[i]=a[j];
//				a[j]=k;
//			}
//		}
//	}
//	
//	for(int i=0; i<n; i++)
//	cout<<a[i]<<" ";
//	
//	return 0;
//}

//#include <iostream>
//#include <conio.h>//c
//using namespace std;
//int main(){
//	int n, a[10];
//	cout<<"n="; cin>>n;
//	
//	for(int i=0; i<n; i++){
//		cin>>a[i];
//	}
//	for(int i=0; i<n; i++){
//		cout<<a[i]<<" ";
//	}
//	for(int i=0; i<n-1; i++){
//		
//		for(int j=i; j<n; j++){
//			if(a[i]>a[j]){
//				int k=a[i];
//				a[i]=a[j];
//				a[j]=k;
//			}
//			cout<<"i="<<i<<" j="<<j<<"  "<<endl;// saralash for ichi
//			getch();
//			for(int p=0; p<n; p++){
//			cout<<a[p]<<" ";
//			}
//			
//		}cout<<endl;
//	}
//	for(int i=0; i<n; i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main(){
//	int n,a[20]={1,1};
//	cout<<"n="; cin>>n;
//	
//	for(int i=2; i<n; i++){
//		a[i]=a[i-2]+a[i-1];
//	}
//	for(int i=0; i<n; i++){
//		cout<<a[i]<<" ";
//	}
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main(){
//	int n, a[10], min, max;
//	cin>>n;
//	
//	for(int i=0; i<n; i++){
//		cout<<"["<<i<<"]="; cin>>a[i];
//	}
//	for(int i=0; i<n; i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0; i<n; i++){
//		min=a[0];
//		max=a[0];
//		if(min>a[i]){
//			min=a[i];
//		}
//		if(max<a[i]){
//			max=a[i];
//		}
//	
//	}
//	
//	cout<<"max="<<max<<endl;
//	cout<<"min="<<min<<endl;
//	
//	return 0;
//	
//}

//#1
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	float a[100], sum=0;
//	
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]="; cin>>a[i];
//		sum+=a[i];
//	}
//	cout<<"sum="<<sum<<endl;
//	
//	return 0;
//}

//#2
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	float a[100], p=1;
//	
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]="; cin>>a[i];
//		p*=a[i];
//	}
//	cout<<"p="<<p<<endl;
//	
//	return 0;
//}

//#3
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	float a[100], sum=0;
//	
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]="; cin>>a[i];
//		sum+=abs(a[i]);
//	}
//	cout<<"sum="<<sum<<endl;
//	
//	return 0;
//}

//#4
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	float a[100], sum=0;
//	
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]="; cin>>a[i];
//		sum*=abs(a[i]);
//	}
//	cout<<"sum="<<sum<<endl;
//	
//	return 0;
//}

//#5
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	float a[100], sum=0;
//	
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]="; cin>>a[i];
//		sum+=pow(a[i],2);
//	}
//	cout<<"sum="<<sum<<endl;
//	
//	return 0;
//}

//#6
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	float a[100], sum=0, p=1;
//	
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]="; cin>>a[i];
//		sum+=(a[i]);
//		p*=a[i];
//		
//	}
//	cout<<"sum="<<sum<<endl;
//	cout<<"p="<<p<<endl;
//	
//	return 0;
//}

//#7
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	float a[100], sum=0, degree=-1;
//	
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]="; cin>>a[i];
//		
//		degree*=-1;
//		
//		
//		sum+=(a[i])*degree;
//	}
//	cout<<"sum="<<sum<<endl;
//	cout<<"daraja="<<degree<<endl;
//	
//	return 0;
//}

//#8
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//	int n;
//	cout<<"n="; cin>>n;
//	
//	float a[100], sum=0, f=1;
//	
//	for(int i=1; i<=n; i++){
//		cout<<"a["<<i-1<<"]="; cin>>a[i-1];
//		f*=i;
//		
//		sum+=a[i-1]/f ;
//	}
//	cout<<"sum="<<sum<<endl;
//	
//	return 0;
//}

//#13.8
//#include <iostream>
//using namespace std;
//int main(){
//	int n=5,a[100];
//	
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]=";
//		cin>>a[i];
//	}
//	
//	for(int i=0; i<5; i++){
//		for(int j=i; j<5; j++){
//			if(a[i]>a[j]){
//				int k=a[i];
//				a[i]=a[j];
//				a[j]=k;
//			}
//		}
//		cout<<a[i]<<" ";
//	}
//	
//	return 0;
//}

//#13.2a
//#include<iostream>
//using namespace std;
//int main(){
//	int n, b[10];
//	cin>>n;
//	
//	for(int i=0; i<n; i++){
//		b[i]=i;
//		cout<<"b["<<i<<"]"<<b[i]<<endl;
//	}
//	return 0;
//}

//#13.2b
//#include <iostream>
//using namespace std;
//int main(){
//	int b[10], n;
//	cin>>n;
//	
//	for(int i=0; i<n; i++){
//		b[i]=i*i;
//		cout<<"b["<<i<<"]="<<b[i]<<endl;
//	}
//	
//	return 0;
//}

//#13.2v
//#include <iostream>
//using namespace std;
//int main(){
//	int n, b[10]={1}, p=1;
//	cin>>n;
//	
//	for(int i=1; i<n; i++){
//		p*=i;
//		b[i]=p;
//	}
//	for(int i=0; i<n; i++){
//		cout<<"b["<<i<<"]="<<b[i]<<endl;
//	}
//	
//	return 0;
//}

//#13.3
//#include <iostream>
//using namespace std;
//int main(){
//	int b[10]={0,1}, n;
//	cin>>n;
//	for(int i=2; i<n; i++){
//		b[i]=b[i-2] + b[i-1] ;
//	}
//	for(int i=0; i<n; i++){
//		cout<<"b["<<i<<"]="<<b[i]<<endl;
//	}
//	
//	return 0;
//}

//#13.4
//#include <iostream>
//#include<cmath>
//using namespace std;
//int main(){
//	int n, a[10], t=0;
//	float sum=1;
//	cin>>n;
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]="; cin>>a[i];
//	}
//	for(int i=0; i<n; i++){
//		if(a[i]<0){
//			break;
//		}
//		t++;
//		sum*=a[i];
//	}
//	sum=fabs(sum);
//	cout<<"sum="<<pow(sum,1.0/(float) t);
//	
//	return 0;
//}

//#13.5
//#include <iostream>
//using namespace std;
//int main(){
//	int n, a[100];
//	cin>>n;
//	
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]="; cin>>a[i];	
//		
//	}
//	int max=a[0], min=a[0];
//	for(int i=0; i<n; i++){
//		if(max<a[i]){
//			max=a[i];
//		}
//		if(min>a[i]){
//			min=a[i];
//		}
//	}
//	
//	int max2=a[0], min2=a[0];
//	for(int i=0; i<n; i++){
//		if(i%2==0){
//			if(max2<a[i]){
//				max2=a[i];
//			}
//		}
//		else if(i%2==1){
//			if(min2>a[i]){
//				min2=a[i];
//			}
//			
//		}
//	}
//	
//	cout<<"max umumiy="<<max<<endl;
//	cout<<"mini umumiy="<<min<<endl;
//	cout<<endl;
//	cout<<"max juft index="<<max2<<endl;
//	cout<<"mini toq index="<<min2<<endl;
//	
//	return 0;
//}


//#13.6
#include <iostream>
using namespace std;
int main(){
	int a[100], n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	int k;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
		if(a[i]>a[j]){
			k=a[i];
			a[i]=a[j];
			a[j]=k;
		}	
		}
		cout<<a[i]<<" ";
	}
	
	return 0;
}




