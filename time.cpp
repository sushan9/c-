#include<iostream>
#include<iostream>
using namespace std;
class Time{
	private:
	
		public:
			int hour,minute,second;
			Time(){
				cout<<"Enter the time in hr:min:sec"<<endl;
				cin>>hour;cin>>minute;cin>>second;
			}
};
class Time1:public Time{
	public:
		void calculation(Time1 t1,Time1 t2){
			int sec,min,hr;
			sec=t1.second+t2.second;
			min=t1.minute+t2.minute;
			hr=t1.hour+t2.hour;
			cout<<hr<<":hr\t"<<min<<":min\t"<<sec<<":sec."<<endl;
		}
};

int main(){
	Time1 t1,t2;
    cout<<"Time obtained from passing by value is"<<endl;
    t2.calculation(t1,t2);
   
}
