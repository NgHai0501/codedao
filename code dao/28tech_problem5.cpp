#include<bits/stdc++.h>
using namespace std;

class NV
{
    private:
        string ma,ten,ns;
        int so_ngay_cong, luong_co_ban;
    public:
        void nhap()
        {
            getline(cin,this->ma);
            getline(cin, this->ten);
            cin >> this->ns >> this->so_ngay_cong >> this->luong_co_ban;

        }
        string getMa()
        {
            return this->ma;
        }
        string Chucvu()
        {
            string tmp = this->ma.substr(0,2);
            if(tmp == "GD") return "Giam doc";
            if(tmp == "TP") return "Truong phong";
            if(tmp == "NV") return "Nhan vien";
            return "Pho giam doc";
        }
        void ChuanHoa()
        {
            if(this->ns[1] == '/') this->ns = "0" + this->ns;
            if(this->ns[4] == '/') this->ns.insert(3, "0");
        }
        int luong_cung()
        {
            return this->so_ngay_cong * this->luong_co_ban;
        }
        int phucap()
        {
            string tmp = this->ma.substr(0,2);
            if(tmp == "GD") return 2000000;
            if(tmp == "TP") return 500000;
            if(tmp == "NV") return 200000;
            return 1000000;
        }
        int thuong()
        {
            if(this->so_ngay_cong >=27) return 0.2*this->luong_cung();
            if(this->so_ngay_cong >=25) return 0.1*this->luong_cung();
            return 0;
        }
        long long thunhap()
        {
            return this->luong_cung() + this->phucap() + this->thuong();
        }

        void in()
        {
            cout << ma << " " << ten << " " << this->Chucvu() << " " << this->ns << " " 
                 << so_ngay_cong << " " << luong_co_ban << " " << this->thunhap() << endl;
        }
};
bool cmp(NV a, NV b)
{
    if(a.thunhap() != b.thunhap()) 
        return a.thunhap()>b.thunhap();
    return a.getMa() > b.getMa(); 
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    NV a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        a[i].nhap();
        a[i].ChuanHoa();
    }
    sort(a, a+n, cmp);
    for(int i=0;i<n;i++)
    {
        a[i].in();
    }
}