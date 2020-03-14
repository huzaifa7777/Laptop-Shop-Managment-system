#include<iostream>
#include<iomanip>

using namespace std;

void mainmenu();
int a;
int y=0,p_temp;
string n_temp;

class Laptop
{
    protected:
    	string choose,cpu,gen;
        int quantity[100],price[100];
        string name[100];
        float screen;
        float ram,rom;
    public:
        void data()
        {
            		cout<<"\n\t\t\tProduct name:"<<n_temp<<endl;
            		cout<<"\n\t\t\tPrice:"<<p_temp;
            		cout<<"\n\t\t\tGeneration:"<<gen;
            		cout<<"\n\t\t\tCPU:"<<cpu;
                    cout<<"\n\t\t\tRAM:"<<ram<<" GB";
                    cout<<"\n\t\t\tROM:"<<rom<<" GB";
                    cout<<"\n\t\t\tDisplay "<<screen<<" inches";
                    
				
        }
};
class Dell:public Laptop
{
    protected:
			float GHz;
    public:
    	void Alienware()
    	{
    				ram=16;
                    rom=1024;
                    screen=17.3;
                    p_temp=299599;
                    n_temp="Dell_Alienware_17_R3";
                    cpu="Intel_Core_i7_2.0_GHz";
                    gen="6th";
                    data();

		}
		void XPS()
		{
					ram=8;
                    rom=512;
                    screen=13.3;
                    p_temp=199999;
                    n_temp="Dell_XPS_13_9365";
                    cpu="Intel_Core_i7_2.7_GHz";
                    gen="7th";
                    data();
		}
		void Latitude()
		{
					ram=16;
                    rom=512;
                    screen=14.0;
                    p_temp=180999;
                    n_temp="Dell_Latitude_14_7480";
                    cpu="Intel_Core_i7_2.8_GHz";
                    gen="7th";
                    data();
		}
};
class Hp:public Dell
{
    protected:
			float battery;
    public:
    	void Omen()
    	{
		            ram=16;
                    rom=1024;
                    screen=17.3;
                    p_temp=217999;
                    n_temp="Hp_Omen";
                    cpu="Intel_Core_i7_2.8_GHz";
                    gen="7th";
                    data();

		}
		void Spectre()
		{
					ram=16;
                    rom=512;
                    screen=15.6;
                    p_temp=204999;
                    n_temp="Hp_Spectre_X360";
                    cpu="Intel_Core_i7_4.0_GHz";
                    gen="8th";
                    data();
		}
		void Envy()
		{
					ram=8;
                    rom=512;
                    screen=13.3;
                    p_temp=156999;
                    n_temp="Hp_Envy_13_AD113X";
                    cpu="Intel_Core_i7_1.8_GHz";
                    gen="8th";
                    data();
		}
};
class Lenovo:public Hp
{
    protected:
    	string battery;
			
    public:
    	void Yoga()
    	{
    				ram=16;
                    rom=1024;
                    screen=13.9;
                    p_temp=284999;
                    n_temp="Lenovo_Yoga_920";
                    cpu="Intel_Core_i7_1.8_GHz";
                    gen="8th";
                    data();

		}
		void ThinkPad()
		{
					ram=8;
                    rom=512;
                    screen=14.1;
                    p_temp=213999;
                    n_temp="Lenovo_ThinkPad_X1";
                    cpu="Intel_Core_i7_3.9_GHz";
                    gen="7th";
                    data();
		}
		void IdeaPad()
		{
					ram=16;
                    rom=512;
                    screen=13.3;
                    p_temp=162999;
                    n_temp="Lenovo_IdeaPad_Yoga";
                    cpu="intel_Core_i7_2.2_GHz";
                    gen="7th";
                    data();
		}
	
	};
class menu:public Lenovo
{
	protected:
		int c,s;
		int b,sum=0,an;
		string d,ch,ch1;
	public:
	void d_record()
        {
        	Adil:
            
            cout<<"\n\n\t\t\t\tBrand name:Dell";
            cout<<"\n\n\n\t\t\tCh.\tLaptop name\t\tPrice";
            cout<<"\n\t\t\t1.\tDell Alienware \t\t(299599)";
            cout<<"\n\t\t\t2.\tDell XPS\t\t(199999)";
            cout<<"\n\t\t\t3.\tDell Latitude\t\t(180999)";
            cout<<"\n\n\t\t\tEnter 0 to back main Menu";
            cout<<"\n\t\t\tEnter item number(1_3)...";
            cin>>b;
            system("CLS");
            if(b<=3&&b>=0)
            {
                if(b==1)
                {
                    Alienware();
                }
                else if(b==2)
                {
					XPS();
	            }
	            else if(b==3)
	            {
	            	Latitude();
				}
				else if(b == 0)
                {
                    test();
                }
            }
            else
            {
            	cout<<"\n\t\t\tPlease select item number(0-3)";
            	goto Adil;
			}
        }	
	 void h_record()
        {
        	Adil:
            
            cout<<"\n\n\t\t\t\tBrand name:Hp";
            cout<<"\n\n\n\t\t\tCh.\tLaptop name\t\tPrice";
            cout<<"\n\t\t\t1.\tHuawei Omen \t\t(217998)";
            cout<<"\n\t\t\t2.\tHuawei Spectre\t\t(204999)";
            cout<<"\n\t\t\t3.\tHuawei Envy\t\t(156999)";
            cout<<"\n\n\t\t\tEnter 0 to back main Menu";
            cout<<"\n\t\t\tEnter item number(1_3)...";
            cin>>c;
            system("CLS");
            if(c<=3&&c>=0)
            {
                if(c==1)
                {
                    Omen();
                }
                else if(c==2)
                {
					Spectre();
	            }
	            else if(c==3)
	            {
	            	Envy();
				}
				else if(c == 0)
                {
                    test();
                }
            }
            else
            {
            	cout<<"\n\t\t\tPlease select item number(0-3)";
            	goto Adil;
			}
        }
        void l_record()
        {
        	Adil:
            
            cout<<"\n\n\t\t\t\tBrand name:Lenovo";
            cout<<"\n\n\n\t\t\tCh.\tLaptop name\t\tPrice";
            cout<<"\n\t\t\t1.\tLenovo Yoga \t\t(284999)";
            cout<<"\n\t\t\t2.\tLenovo ThinkPad\t\t(213999)";
            cout<<"\n\t\t\t3.\Lenovo IdeaPad \t\t(162999)";
            cout<<"\n\n\t\t\tEnter 0 to back main Menu";
            cout<<"\n\t\t\tEnter item number(1_3)...";
            cin>>s;
            system("CLS");
            if(s<=3&&s>=0)
            {
                if(s==1)
                {
                    Yoga();
                }
                else if(s==2)
                {
					ThinkPad();
	            }
	            else if(s==3)
	            {
	            	IdeaPad();
				}
				else if(s == 0)
                {
                    test();
                }
            }
            else
            {
            	cout<<"\n\t\t\tPlease select item number(0-3)";
            	goto Adil;
			}
        }
        void choose()
        {
        		int sum=0;
        		
        		cout<<"\n\t\t\tDo you want buy this products<y/n>....";
        		cin>>ch;
        		if(ch=="Y"||ch=="y"||ch=="yes"||ch=="YES"||ch=="Yes")
        		{
					Adil:
                    cout<<"\n\n\t\t\tEnter the Quantity...";
                    cin>>quantity[y];
                    if(quantity[y]>0)
                    {
						name[y]=n_temp;
						price[y]=p_temp;
						y++;
                    cout<<"\n\t\t\tDo you want buy any other Laptop \n\t\t\t<for yes press y/for no press n>";
                    cin>>d;
                    if(d=="Y"||d=="y"||d=="yes"||d=="YES"||d=="Yes")
                    {
                    	system("cls");
                    	test();
					}
					else
					{
						invoice();
					}
					}
					else
					{
						system("cls");
						cout<<"\nPlease Enter the Quantity greater then 1....";
						goto Adil;
					}
					}
                else
					{
							system("cls");
						cout<<"\n\t\t\tDo you want buy any other Laptop \n\t\t\t<for yes press y/for no press n>";
                    cin>>ch1;
                    if(ch1=="Y"||ch1=="y"||ch1=="yes"||ch1=="YES"||ch1=="Yes")
                    {
                    	system("cls");
                    	test();
					}
					else
					{
						invoice();
					}
                	}
		}
		void invoice()
		{
			system("cls");
						cout<<"\n"<<setw(15)<<"Laptop name"<<setw(15)<<"Quantity"<<setw(15)<<"Price";
						for(an=0;an<y;an++)
						{
						
							cout<<"\n"<<setw(15)<<name[an]<<setw(15)<<quantity[an]<<setw(15)<<price[an];
					
                    		
                    		sum=sum+(quantity[an]*price[an]);
                		}
                			cout<<"\nGrand total \t\t\t\t"<<sum<<endl;
                			system("pause");
                    		cout<<"\nThanks you for visiting";
                		
		}
	

        void test()
		{
			test:
        mainmenu();
        system("CLS");
        
		
        if(a<=3&&a>0)
        {
		
        if(a==1)
        {
		
        	d_record();
        	choose();
		}
		else if(a==2)
		{
			h_record();
			choose();
			
		}
		else if(a==3)
		{
			l_record();
			choose();
		}
		}	
		else
		{
			system("cls");
			cout<<"\n\t\t\tPlease select item number(1-5)";
            	goto test;
		}
	
    
        }
	
};

int main()
{
 Adil:
    menu ob;
    

    ob.test();

}

void mainmenu()
{
	
    cout<<"\n\n\n\t\t\tWelcome to ADIL's Laptop";
    cout<<"\n\t\t\t1.Dell";
    cout<<"\n\t\t\t2.Hp";
    cout<<"\n\t\t\t3.Lenovo";
    cout<<"\n\n\t\t\tEnter the number=";
    cin>>a;

}

