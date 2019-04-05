#include <iostream>
using namespace std;

class sepedaDewasa{
	
	public :
		int jmlhrodadewasa(){
			return 2;
		}
		void cetak(){
			cout<<"Jumlah Roda : ";
		}
	
};

class sepedaBayi{
		
	public :
		int jmlhrodabayi(){
			return 3;
		}
		void cetak(){
			cout<<"Jumlah Roda : ";
		}
};

class sepeda: public sepedaDewasa,public sepedaBayi{
	private :
		string jenis;
	public : 
		void setJenis(string jenis){
		this->jenis=jenis;
		}
};

int main(){
	string jenis;
	sepeda sepeda1;
	sepedaDewasa a;
	sepedaBayi b;
	cout<<"Masukkan Jenis Sepeda(dewasa/bayi) : ";
	cin>>jenis;
	sepeda1.setJenis(jenis);
	if(jenis=="dewasa"){
	a.cetak();
		cout<<sepeda1.jmlhrodadewasa();
		}
		else if(jenis=="bayi"){
		b.cetak();
			cout<<sepeda1.jmlhrodabayi();
		}
}
	

	
