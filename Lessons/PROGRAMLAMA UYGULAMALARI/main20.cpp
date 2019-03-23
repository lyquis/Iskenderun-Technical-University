#include <iostream>

using namespace std;

class Insan
{
	private:
		bool cinsiyet;
		int yas,boy;
		string ad,soyad;
	public:
 	Insan () {}
 	Insan (string ad,string soyad,int yas,int boy,bool cins) 
	{
	 	this->ad=ad;
	 	this->soyad=soyad;
	 	this->yas=yas;
	 	this->boy=boy;
	 	cinsiyet=cins;
	}
	void SetOzellikler(string ad,string soyad,int yas,int boy,bool cins);
	friend void yazdir(Insan abc);
 	
};
void Insan::SetOzellikler(string ad,string soyad,int yas,int boy,bool cins)
{
		this->ad=ad;
	 	this->soyad=soyad;
	 	this->yas=yas;
	 	this->boy=boy;
	 	cinsiyet=cins;
}
void yazdir(Insan abc)
{
	
	string x;
	true==abc.cinsiyet ? x="Erkek" : x="Kadin";
	cout<<"Adi="<<abc.ad<<"\nSoyadi= "<<abc.soyad<<"\nYasi ="<<abc.yas<<"\nCinsiyeti="<<x;
}




int main(int argc, char** argv)
 {
 	Insan deneme("Emin","Arslan",20,180,1);
 	yazdir(deneme);
 	cout<<endl<<endl;
 	Insan kobay;
 	kobay.SetOzellikler("abc","cba",20,180,0);
 	yazdir(kobay);
}
