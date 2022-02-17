#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;
#define MAX_USER 1024

char tendangnhap[250];
char matkhaudangnhap[250];

typedef struct Taikhoandangky
{
	char tendangnhap[255];
	char matkhau[255];
} Taikhoandangky;

Taikhoandangky tk[MAX_USER];
int usingno = 0;

// typedef struct question
// {
// 	char hint[255];
// 	char answer[255];
// } question;



int SoSanh(string s1, string s2)
{
	for (int i = 0; i < s1.size(); i++)
		s1[i] = toupper(s1[i]);

	for (int i = 0; i < s2.size(); i++)
		s2[i] = toupper(s2[i]);

	if (s1.compare(s2) == 0)
	{
		return 1;
	}

	return 0;
}
class ChiTieuThang {
public:
	int n;
	int m;
	string Name1[100];
	string Name2[100];
	double Thu[100];
	double Chi[100];
	int Time1[31];
	int Time2[31];
public:
	
		
	void Nhap()
    {
		cout << "So thu nhap trong thang" << endl;
		cin >> this->n;
		for (int i = 0; i < n; i++) {
			cout << "Nhap ten " << i + 1 << ':';
			fflush(stdin);
			getline(cin, this->Name1[i]);
			cout << "\n Nhap tien : ";
			cin >> Thu[i];
			cout <<"\n Nhap ngay : ";
			cin >> Time1[i];
		}
		cout << "\nSo chi tieu trong thang" << endl;
		cin >> this->m;
		for (int i = 0; i < m; i++) {
			cout << "Nhap ten " << i + 1 << ':';
			fflush(stdin);
			getline(cin, this->Name2[i]);
			cout << "\n Nhap tien : ";
			cin >> Chi[i];
			cout <<"\n Nhap ngay : ";
			cin >> Time2[i];
		}
	}

	void Xuat() 
    {
		for (int i = 0; i < this->n; i++) {
			cout  << this->Name1[i] << " : " << (size_t)this->Thu[i] << " "<< "vao ngay " << (size_t)this->Time1[i]<< endl;
		}
		for (int i = 0; i < this->m; i++) {
		  cout  << this->Name2[i] << " : " << (size_t)this->Chi[i] << " "<< "vao ngay " << (size_t)this->Time2[i]<< endl;
		}
	}

	void SaoKe1()
    {
		for (int i = 0; i < this->n; i++) {
			cout << this->Name1[i] << " : " << (size_t)this->Thu[i] << " "<< "vao ngay " << (size_t)this->Time1[i] << endl;
		}
    }

	void SaoKe2()
    {
		for (int i = 0; i < this->m; i++) {
			cout << this->Name2[i] << " : " << (size_t)this->Chi[i] << " "<< "vao ngay " << (size_t)this->Time2[i] << endl;
		}
    }
	void XuatTime(int k,int l)
    {
		for (int i = 0; i < this->m; i++) {
			if(Time2[i]>=k && Time2[i]<=l){
			// đọc ở đây nè
			cout << this->Name2[i] << " : " << (size_t)this->Chi[i] << " "<< "vao ngay " << (size_t)this->Time2[i]<< endl;
		    }
        }
    }
	void XuatMuc(string A)
    {
		for (int i = 0; i < this->m; i++) {
			if(SoSanh(A,this->Name2[i])==1){
			cout << this->Name2[i] << " : " << (size_t)this->Chi[i]<<" " << "vao ngay " << (size_t)this->Time2[i]<< endl;
            }
		}
    }

    double tongchi()
    {
      int chi = 0;
      for(int i =0 ;i < this->m; i++){
        chi = chi +(size_t)this->Chi[i];
        }
        return chi;

    }
};
    
    void luutruinput(	char username[255],	char password[255]){
      ofstream file("input.txt");

      file << username << endl;
      file << password << endl;
    }
int main(){
    while(true){
      int choose;
      cout << "CHAO MUNG BAN DEN VOI HE THONG QUAN LI THU CHI   " << endl;
      cout << "1.DANG NHAP" << endl;
      cout << "2.DANG KI " << endl;
      cout << "3.THOAT" << endl;
      cout << "Chon mot so de tiep tuc(1~3): ";
      cin >> choose;


      if(choose == 1){
        char username[225];
        char password[255];

        relogin :
        cout << "Nhap vao username: ";
        fflush(stdin);
        cin >> username;

        cout << "Nhap mat khau: ";
        fflush(stdin);
        cin >> password;
        for(int i =0; i<usingno;i++){
          if(!strcmp(tk[i].tendangnhap,username)){
            if(!strcmp(tk[i].matkhau, password)){
              while(true){
                int chooselocal;
                luutruinput(username,password);
                cout << "Xin chao " << username << endl;
                cout <<"1.Bat dau " << endl;
                // cout <<"2.Xem cac khoan thu " << endl;
                // cout <<"3.Xem cac khoan chi" << endl;
                cout <<"2.Dang xuat" << endl;
                cout <<"Chon mot so de tiep tuc (1~2): ";
                cin >> chooselocal;

    if(chooselocal == 1){

  int n,m;
	int menu;
	string A;
	ChiTieuThang X;
	X.Nhap();
	// X.Xuat();
  int dinhmuc;
  cout << "Nhap so tien dinh dung:";
  cin >> dinhmuc;

  // ofstream fl("lutru.txt");
  
	while(true){
    cout << "\n|--------------MENU-------------|";
		cout << "\n|1.Xuat sao ke thu nhap         |";
		cout << "\n|2.Xuat sao ke chi tieu         |";
		cout << "\n|3.Search chi tieu theo time    |";
		cout << "\n|4.Search chi tieu theo muc chi |";
    cout << "\n|5.Canh bao chi tieu            |";
    cout << "\n|6.Thoat chuong trinh           |";
		cout << "\nChon mot chuc nang (1~6) de tiep tuc: ";
		cin >> menu;
		switch(menu)
		{
			case 1: cout << "\n\n Xuat sao ke thu nhap\n";X.SaoKe1();break;
			case 2: cout << "Xuat sao ke chi tieu \n";X.SaoKe2(); break;
			case 3: cout << "Seach theo Time , Xin moi nhap time(N->M) (1~31)"; 
						cout << "\nn = "; cin >> n ;
						cout << "\nm = "; cin >> m ;
						X.XuatTime(n,m); break;
			case 4: cout << "Seach theo muc chi, Xin moi nhap ten muc chi\n";
						fflush(stdin);
						getline(cin,A);
						X.XuatMuc(A);break;
      
            case 5: if(dinhmuc > X.tongchi()){
                    cout << "Ban khong vuot qua so tien dinh muc!!!!!!!!!!!!!" << endl;
            }else{
                    cout << "Ban vuot qua so tien dinh muc!!!!!!!!!!!!!!!!!!!" << endl;
            }
            break;
            case 6: goto end;
	    }
    } 

    }
                
                else if(chooselocal==2){
                  goto end;
                }
                else{
                  cout << "Ban nhap khong dung so da cho" << endl;
                  cout << "Yeu cau nhap lai" << endl;
                }
              }
            }

            else{
              cout << "Ban nhap sai mat khau, vui long nhap lai" << endl;
              goto relogin;
            }

          }
        }
        cout << "Username khong ton tai" << endl;
        end: ;

      }
    else if(choose==2){
      int used = 0;
			char username[255];
			char password[255];
			char reinputpassword[255];

      cout << "Nhap vao username: ";
      fflush(stdin);
      cin >> username;

      checkpasswordmatch :
      cout << "Nhap vao mat khau: ";
      fflush(stdin);
      cin >> password;

      cout << "Nhap lai mat khau: ";
      fflush(stdin);
      cin >> reinputpassword;

      if(strcmp(password,reinputpassword)){
        cout <<"Mat khau cua ban khong trung khop, vui long nhap lai: " << endl;

        goto checkpasswordmatch;
      }

      checkused:
      for(int i =0 ; i<usingno; i++){
        if(!strcmp(tk[i].tendangnhap, username)){
					used = 1;
				}
      }

      if(used == 1){
        cout << "Ten dang nhap cua ban da bi su dung, Vui long nhap lai: " << endl;
        cout << "Nhap vao ten dang nhap: ";
        fflush(stdin);
        cin >> username;
        goto checkused;
      }
      strcpy(tk[usingno].tendangnhap,username);
      strcpy(tk[usingno].matkhau,password);
      usingno ++;
      cout << "Dang ky thanh cong :";
    }
    else if(choose==3){
      cout << "Tam biet ban !";
      return 0;
    }
    else{
      cout << "Ban nhap khong dung so da cho " << endl;
      cout << "Yeu cau nhap lai " << endl;
    }

    }
  // return 0;
  }
