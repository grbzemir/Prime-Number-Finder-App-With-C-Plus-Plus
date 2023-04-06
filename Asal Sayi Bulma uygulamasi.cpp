#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>


using namespace std;


 class Hesap

 {
    
    private:
    int sayi;
    int sayac;
    string devam;
    bool sonuc;

    public:
    void menu();
    bool asalMi( int );
    void sonrakiDort();
    
 };

    void Hesap::menu()

    {
     
     while (true)

     {
       
       system("color 0a");

       cout<<"Asal Sayi Uygulamasi "<< endl;
       cout<<"Sayi giriniz:"; 
       cin>>sayi;

       if(asalMi(sayi))
       cout<< sayi <<" Asal sayidir."<<endl;
     
       else

       cout<< sayi <<" Asal sayi degildir."<<endl;
       cout<<"Sonraki dort sayinin siralamasi: "<<endl;
       sonrakiDort();
       
    
       cout<<"Devam etmek ister misiniz? (e/h)";
       cin>>devam;

      if (devam == "e" || devam == "E")
      {

        system("cls");
      }

        else
        {
            cout<<"Program sonlandiriliyor..."<<endl;
            break; // while kırıp programı sonlandırır.
        }

     }

    }

    bool Hesap::asalMi( int s  )

    {
       
       sonuc=true;
       int i;
       
       if(s==1)
       {
          return false;

       }
       
       for(i=2;i<s;i++)
       {
           if(s%i==0)
           {
               sonuc=false;
               break;
           }
       }

         return sonuc;


    }     

    void Hesap::sonrakiDort()

    {

        
    	sayac=0;
    	int temp; // karşılıklı deger atamak icin temp degiskeni kullanilir
        temp=sayi; 
    
    	while( sayac != 5)
        
        {

           temp++;  // klavyeden girilen degeri burda bir arttiriyoruz ardından asal olup olmadıgını kontrol ediyoruz asal ise ekrana yazdirir.
          
           if(asalMi(temp))
           {
               cout<<sayac<<" . Asal sayi : "<< temp<< endl;
               sayac++;
           }

		}

        sayac=0;

    }


  int main()

{  

    Hesap nesne;
    nesne.menu();



    return 0;

}