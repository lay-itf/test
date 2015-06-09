#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>

using namespace std;

int main()
{	
	srand(time(NULL));

	cout<<"READY"<<endl;

	int T,P,N;
	cin>>T>>P>>N;

	vector<int> A(N);
	vector< pair<int,int> > PA(N);

	for(int i=0;i<N;i++){
		cin>>A[i];
		PA[i]=make_pair(A[i],i);
	}
	sort(PA.begin(),PA.end());

	for(int i=0;i<T;i++){
		int t;
		string D;
		cin>>t>>D;

		vector< pair<int,int> > B(N);
		for(int j=0;j<N;j++) B[j]=make_pair(0,i);
		for(int j=0;j<N;j++){
			for(int k=0;k<P;k++){
				int b;
				cin>>b;
				if(k!=0)B[j].first+=b;
			}
		}
		sort(B.begin(),B.end());
	

		vector<int> R(N);
		for(int j=0;j<N;j++){
			cin>>R[j];
		}

		vector<int> _P(N);
		if(D=="W") for(int j=0;j<N;j++) cin>>_P[j];

		if(D=="W"){
			for(int j=0;j<3;j++){
				if(i!=0)cout<<B[N-1].second<<" ";
				else cout<<rand()%N<<" ";
			}
			int r1=rand()%3,r2=rand()%3;
			cout<<PA[r1=N-1-r1].second<<" "<<PA[r2=N-1-r2].second<<endl;
//			cout<<r1<<"番目に人気"<<endl;
//			cout<<r2<<"番目に人気"<<endl;
		}else{
			cout<<B[N-1].second<<" "<<B[N-1].second<<endl;
		}

	}

	return 0;
}
