#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <conio.h>
using namespace std; 
/*
* Packman With C++
* Faculty of engineering
* University of Tehran
* Amir Salehi
*/
char** _MapMaker_(int dim1, int dim2)
{
    srand(time(NULL));
    char** _Map_ = (char**)malloc(dim1 * sizeof(char*));
    for (int i = 0; i < dim1; i++)
    {
        _Map_[i] = (char*)malloc(dim2 * sizeof(char));
    }
    char _char_set_[5] = { 'w','y',',','*','x' };
    for (int i = 0; i < dim1; i++)
    {
        for (int j = 0; j < dim2; j++)
        {
            _rand_number_ = rand() % 5;
            _Map_[i][j] = _char_set_[_rand_number_];
        }
    }
    return _Map_;
}
int main() {
    char** map1 = _MapMaker_(20, 20);
    char** map2 = _MapMaker_(20, 20);
    char** map3 = _MapMaker_(20, 20);
    
	int x,score=0,a,s,q,d,w,l,l1,l2,l3,l4,bazi=0,z,naghshe,halat;			                                                
while(bazi<2)			                                             //entekhab edame bazi 
{                                                                   //entekhab map bazi
		cout<<"map khod ra entekhab konid:"<<endl<<"1."<<endl;                                          
	       for(int i=0;i<20;i++)
		   {
		   for(int j=0;j<20;j++)
		    cout<<map1[i][j];
			cout<<endl;}
	cout<<"2."<<endl;
		    for(int i=0;i<20;i++)
		   {
		   for(int j=0;j<20;j++)
		    cout<<map2[i][j];
			cout<<endl;}
	cout<<"3."<<endl;
		    for(int i=0;i<20;i++)
		   {
		   for(int j=0;j<20;j++)
		    cout<<map3[i][j];
			cout<<endl;}
			
			
			cin>>naghshe;                                          //daryaft shomare map
			
			while((naghshe!=1)&&(naghshe!=2)&&(naghshe!=3))
			{cout<<"map varede sahih nist"<<endl<<"map digari ra entekhab konid."<<endl;
			cin>>naghshe;
			}
			                                                      //jay gozari map entekhab shode dar map bazi
			switch(naghshe){                                                                               
				case 1:
					system("cls");
		          for(int i=0;i<20;i++)
		            {
		           for(int j=0;j<20;j++)
		             map[i][j]=map1[i][j];
		            }
				break;
				 case 2:
			    	system("cls");
		               for(int i=0;i<20;i++)
		            {
		             for(int j=0;j<20;j++)
		            map[i][j]=map2[i][j];}
				break;
				 case 3:
				    system("cls");
		             for(int i=0;i<20;i++)
		            {
		            for(int j=0;j<20;j++)
		            map[i][j]=map3[i][j];}
				
			}
		         
		            	
		            	                                                                                     // entekhab halat bazi
		            	
cout<<"halat bazi ra moshakhas konid:"<<endl<<"1.easy"<<endl<<"2.normal"<<endl<<"3.hard"<<endl;  

cin>>halat;
			while((halat!=1)&&(halat!=2)&&(halat!=3))
			{cout<<"halat varede sahih nist"<<endl<<"halat digari ra entekhab konid."<<endl;
			cin>>halat;
			}
      system("cls");
                int px=6,py=7,mx=1,my=1,ix=6,iy=12,cx=13,cy=7,bx=13,by=12;                                   //taarif mogheiat ashbah v pacman
	            map[mx][my]='M';
				map[px][py]='P';
				map[ix][iy]='I';
				map[cx][cy]='C';
				map[bx][by]='B';   
	                for(int i=0;i<20;i++)                                                                    //namayesh map v mogheiat ashbah v pacman v emtiaz avalie
                    {
		            for(int j=0;j<20;j++)
		             cout<<map[i][j];
		    
		        	cout<<endl;}
		            		cout<<"score:"<<score<<"           "<<"Pacman:("<<mx<<")"<<"("<<my<<")"<<endl;
	                        cout<<"Blinky:("<<bx<<")"<<"("<<by<<")"<<"   "<<"Pinky:("<<px<<")"<<"("<<py<<")"<<endl;
	                        cout<<"Inky:("<<ix<<")"<<"("<<iy<<")"<<"      "<<"Clyde:("<<cx<<")"<<"("<<cy<<")"<<endl;
		        
switch(halat)
{                                                                                                           // halat easy bazi
case 1:
	for(int k=0;score<10;k++)
{ 
if((mx==px&&my==py)||(mx==cx&&my==cy)||(mx==bx&&my==by)||(mx==ix&&my==iy))	 
{
break;
}
x=getch();                                                                                                  //daryaft klid harekat
switch(x){                                    
case 'a':                                                                                                   //harkat pacman ba key a baray left
     if(map[mx][my-1]=='w')
      cout<<"no move";
else
    {if(map[mx][my-1]=='Y')                                                                                //nahvaye afzayesh emtiaz 
     ++score;
     {map[mx][my]=' ';
	 map[mx][--my]='M';
     }}break;

case 's':                                                                                                  //harkat pacman ba key s baray down
    if(map[mx+1][my]=='w')
    cout<<"no move";
else
     {if(map[mx+1][my]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[++mx][my]='M';
     }}break;
    
case 'd':                                                                                                   //harkat pacman ba key d baray right
     if(map[mx][my+1]=='w')
     cout<<"no move";
     else
     {if(map[mx][my+1]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[mx][++my]='M';
     }}
     break;

case 'w':	                                                                                               //harkat pacman ba key w baray up
     if(map[mx-1][my]=='w')
     cout<<"no move";
else
    {if(map[mx-1][my]=='Y')
     ++score;  
     {map[mx][my]=' ';
	 map[--mx][my]='M';
     }} break;
case 72:                                                                                                   //harkat pacman ba key arrow up
  if(map[mx-1][my]=='w')
     cout<<"no move";
else
    {if(map[mx-1][my]=='Y')
     ++score;  
     {map[mx][my]=' ';
	 map[--mx][my]='M';
     }}break;
case 80:    if(map[mx+1][my]=='w')                                                                        //harkat pacman ba key arrow down
    cout<<"no move";
else
     {if(map[mx+1][my]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[++mx][my]='M';
     }}	break;
case 75:           if(map[mx][my-1]=='w')                                                                 //harkat pacman ba key arrow left
      cout<<"no move";
else
    {if(map[mx][my-1]=='Y')                                                           
     ++score;
     {map[mx][my]=' ';
	 map[mx][--my]='M';
     }}break;
case 77:                                                                                                 //harkat pacman ba key arrow right
     if(map[mx][my+1]=='w') 
     cout<<"no move";
     else
     {if(map[mx][my+1]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[mx][++my]='M';
     }}
}                                                                                                         //harkat souls
                                                                              srand(time (0));
                                                                             x=rand()%4;
                                                                             switch(x)
                                                                             {
                                                                             case 0:                       //down soul P
                                                                             	if(map[px+1][py]!='w')
                                                                             	 {if(map[px][py]!='Y')
	                                                                              map[px][py]=' ';
                                                                             	 if(map[px+1][py]!='Y')
	                                                                              map[++px][py]='P';
	                                                                              else
	                                                                               map[++px][py]='Y';
                                                                                  }
                                                                             	 break;
                                                                             case 1:                       //left soul P
                                                                             	if(map[px][py-1]!='w')
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px][py-1]!='Y')
                                                                             	 map[px][--py]='P';
                                                                             	 else
                                                                             	  map[px][--py]='Y';
                                                                                  }

                                                                                  break;
                                                                             case 2:                       //up soul P
                                                                                if(map[px-1][py]!='w')
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px-1][py]!='Y')
                                                                             	 map[--px][py]='P';
                                                                             	 else
                                                                             	  map[--px][py]='Y';
                                                                                  }
                                                                             	 break;      
                                                                             case 3:                      //right soul P
                                                                             	if(map[px][py+1]!='w')
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px][py+1]!='Y')
                                                                             	 map[px][++py]='P';
                                                                             	 else
                                                                             	  map[px][++py]='Y';
                                                                                  } break; }       
                                                                             x=rand()%4;
                                                                             switch(x)
                                                                             {
                                                                             case 0:                       //down soul B
                                                                             	if(map[bx+1][by]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx+1][by]!='Y')
                                                                                 map[++bx][by]='B';
                                                                             	 else
                                                                             	  map[++bx][by]='Y';
                                                                                  }
                                                                             	 break;
                                                                             case 1:                       //left soul B
                                                                             	if(map[bx][by-1]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx][by-1]!='Y')
                                                                             	 map[bx][--by]='B';
                                                                             	 else
                                                                             	  map[bx][--by]='Y';
                                                                                   }
                                                                                 break;
                                                                             case 2:                       //up soul B
                                                                             	if(map[bx-1][by]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx-1][by]!='Y')
                                                                             	 map[--bx][by]='B';
                                                                             	 else
                                                                             	  map[--bx][by]='Y';
                                                                                  }
                                                                             	 break;      
                                                                             case 3:                      //right soul B
                                                                             	if(map[bx][by+1]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx][by+1]!='Y')
                                                                             	 map[bx][++by]='B';
                                                                             	 else
                                                                             	  map[bx][++by]='Y';
                                                                                  }  }      
                                                                             x=rand()%4;
                                                                             switch(x)
                                                                             {
                                                                             case 0:                       //down soul I
                                                                             	if(map[ix+1][iy]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix+1][iy]!='Y')
                                                                             	 map[++ix][iy]='I';
                                                                             	 else
                                                                             	  map[++ix][iy]='Y';
                                                                                  }
                                                                             	 break;
                                                                             case 1:                       //left soul I
                                                                             	if(map[ix][iy-1]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix][iy-1]!='Y')
                                                                             	 map[ix][--iy]='I';
                                                                             	 else
                                                                             	  map[ix][--iy]='Y';
                                                                                  }
                                                                             
                                                                                  break;
                                                                             case 2:                       //up soul I
                                                                             	if(map[ix-1][iy]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix-1][iy]!='Y')
                                                                             	 map[--ix][iy]='I';
                                                                             	 else
                                                                             	  map[--ix][iy]='Y';
                                                                                  }
                                                                             	 break;      
                                                                             case 3:                      //right soul I
                                                                             	if(map[ix][iy+1]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix][iy+1]!='Y')
                                                                             	 map[ix][++iy]='I';
                                                                             	 else
                                                                             	  map[ix][++iy]='Y';
                                                                                  }  }      
                                                                             x=rand()%4;
                                                                             switch(x)
                                                                             {
                                                                             case 0:                       //down soul C
                                                                             	if(map[cx+1][by]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx+1][cy]!='Y')
                                                                             	 map[++cx][cy]='C';
                                                                             	 else
                                                                             	  map[++cx][cy]='Y';
                                                                                  }
                                                                             	 break;
                                                                             case 1:                       //left soul C
                                                                             	if(map[cx][cy-1]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx][cy-1]!='Y')
                                                                             	 map[cx][--cy]='C';
                                                                             	 else
                                                                             	  map[cx][--cy]='Y';
                                                                                  }

                                                                                  break;
                                                                             case 2:                       //up soul c
                                                                             	if(map[cx-1][cy]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx-1][cy]!='Y')
                                                                             	 map[--cx][cy]='C';
                                                                             	 else
                                                                             	  map[--cx][cy]='Y';
                                                                                  }
                                                                             	 break;      
                                                                             case 3:                      //right soul C
                                                                             	if(map[cx][cy+1]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx][cy+1]!='Y')
                                                                             	 map[cx][++cy]='C';
                                                                             	 else
                                                                             	  map[cx][++cy]='Y';
                                                                                  }  }      
																	   
system("cls");                                                                                        //delete kardan map ghabli v chap map v tozihat update shode
                    for(int i=0;i<20;i++)
                    {
		            for(int j=0;j<20;j++)
		             cout<<map[i][j];
		            	cout<<endl;}
	cout<<"score:"<<score<<"           "<<"Pacman:("<<mx<<")"<<"("<<my<<")"<<endl;
	cout<<"Blinky:("<<bx<<")"<<"("<<by<<")"<<"   "<<"Pinky:("<<px<<")"<<"("<<py<<")"<<endl;
	cout<<"Inky:("<<ix<<")"<<"("<<iy<<")"<<"      "<<"Clyde:("<<cx<<")"<<"("<<cy<<")"<<endl;
}
if(score==10)
{
system("cls");                                                                                    //age bazi ra bordid
                 for(int i=0;i<20;i++)
                    {
		            for(int j=0;j<22;j++)
		             cout<<bord[i][j];
		            	cout<<endl;}
cout<<"shoma bazi ra bordid"<<endl<<"aya mikhahid dobare emtehan konid:"<<endl<<"1.yes"<<endl<<"2.no"<<endl;
cin>>z;
while(z!=1&&z!=2)
{cin>>z;
}
bazi=z;
if(z==1)
{system("cls");
score=0;}}
else
{system("cls");                                                                                 //age bazi ra bakhtid
                 for(int i=0;i<20;i++)
                    {
		            for(int j=0;j<22;j++)
		             cout<<bakht[i][j];
		            	cout<<endl;}
cout<<"score:  "<<score<<endl;
if((mx==px&&my==py))	 
{cout<<"you got caught by pinky";

}
if((mx==ix&&my==iy))	 
{cout<<"you got caught by Inky";

}
if((mx==bx&&my==by))	 
{cout<<"you got caught by Blinky";

}
if((mx==cx&&my==cy))	 
{cout<<"you got caught by Clyde";

}
cout<<endl<<"aya mikhahid dobare emtehan konid:"<<endl<<"1.yes"<<endl<<"2.no"<<endl;
cin>>z;
while(z!=1&&z!=2)
{cin>>z;
}
bazi=z;
if(z==1)
{system("cls");
score=0;}}
break;
case 2:
		for(int k=0;score<10;k++)
{ 
if((mx==px&&my==py)||(mx==cx&&my==cy)||(mx==bx&&my==by)||(mx==ix&&my==iy))	 
{
break;
}
x=getch();                                                                           //daryaft klid harekat
switch(x){                                    
case 'a':                                                                              //harkat pacman ba key a baray left
     if(map[mx][my-1]=='w')
      cout<<"no move";
else
    {if(map[mx][my-1]=='Y')                                                            //nahvaye afzayesh emtiaz 
     ++score;
     {map[mx][my]=' ';
	 map[mx][--my]='M';
     }}break;

case 's':                                                                             //harkat pacman ba key s baray down
    if(map[mx+1][my]=='w')
    cout<<"no move";
else
     {if(map[mx+1][my]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[++mx][my]='M';
     }}break;
    
case 'd':                                                                              //harkat pacman ba key d baray right
     if(map[mx][my+1]=='w')
     cout<<"no move";
     else
     {if(map[mx][my+1]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[mx][++my]='M';
     }}
     break;

case 'w':	                                                                            //harkat pacman ba key w baray up
     if(map[mx-1][my]=='w')
     cout<<"no move";
else
    {if(map[mx-1][my]=='Y')
     ++score;  
     {map[mx][my]=' ';
	 map[--mx][my]='M';
     }} break;
case 72:                                                                                //harkat pacman ba key arrow up
  if(map[mx-1][my]=='w')
     cout<<"no move";
else
    {if(map[mx-1][my]=='Y')
     ++score;  
     {map[mx][my]=' ';
	 map[--mx][my]='M';
     }}break;
case 80:    if(map[mx+1][my]=='w')                                                      //harkat pacman ba key arrow down
    cout<<"no move";
else
     {if(map[mx+1][my]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[++mx][my]='M';
     }}	break;
case 75:           if(map[mx][my-1]=='w')                                                 //harkat pacman ba key arrow left
      cout<<"no move";
else
    {if(map[mx][my-1]=='Y')                                                           
     ++score;
     {map[mx][my]=' ';
	 map[mx][--my]='M';
     }}break;
case 77:                                                                                //harkat pacman ba key arrow right
     if(map[mx][my+1]=='w')
     cout<<"no move";
     else
     {if(map[mx][my+1]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[mx][++my]='M';
     }}
} 
l1=((px+1-mx)*(px+1-mx)+(py-my)*(py-my));                                                //be dast avardan fasle az pacman dar 4 jahat soul
l2=((px-1-mx)*(px-1-mx)+(py-my)*(py-my));
l3=((px-mx)*(px-mx)+(py+1-my)*(py+1-my));
l4=((px-mx)*(px-mx)+(py-1-my)*(py-1-my));
if((l1<=l2)&&(l1<=l3)&&(l1<=l4))                                                         //peyda kardan kotah tarin fasle az pacman
l=l1;                                                
if((l2<=l1)&&(l2<=l3)&&(l2<=l4))
l=l2;
if((l3<=l2)&&(l3<=l1)&&(l3<=l4))
l=l3;
if((l4<=l2)&&(l4<=l3)&&(l4<=l1))
l=l4;
if(l==l1)
l=0;
if(l==l2)
l=1;
if(l==l3)
l=2;
if(l==l4)
l=3;
switch(l)
{
case 0:
		                                                                        if(map[px+1][py]!='w')                  //down soul P
                                                                             	 {if(map[px][py]!='Y')
	                                                                              map[px][py]=' ';
                                                                             	 if(map[px+1][py]!='Y')
	                                                                              map[++px][py]='P';
	                                                                              else
	                                                                               map[++px][py]='Y';
                                                                                  }  break; 
case 1:                                                                          
                                                                                 if(map[px-1][py]!='w')                 //up soul P
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px-1][py]!='Y')
                                                                             	 map[--px][py]='P';
                                                                             	 else
                                                                             	  map[--px][py]='Y';
                                                                                  }break; 

case 2: 
                                                                             	if(map[px][py+1]!='w')                  //right soul P
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px][py+1]!='Y')
                                                                             	 map[px][++py]='P';
                                                                             	 else
                                                                             	  map[px][++py]='Y';                
                                                                                  }  break;                                                                             
case 3:
                                                                                if(map[px][py-1]!='w')                  //left soul P
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px][py-1]!='Y')
                                                                             	 map[px][--py]='P';
                                                                             	 else
                                                                             	  map[px][py]='Y';
                                                                                  }	}
srand(time (0));
q=rand()%2;
switch(q)
{
case 0:
l1=((bx+1-mx)*(bx+1-mx)+(by-my)*(by-my));
l2=((bx-1-mx)*(bx-1-mx)+(by-my)*(by-my));
l3=((bx-mx)*(bx-mx)+(by+1-my)*(by+1-my));
l4=((bx-mx)*(bx-mx)+(by-1-my)*(by-1-my));
if((l1<=l2)&&(l1<=l3)&&(l1<=l4))
l=l1;
if((l2<=l1)&&(l2<=l3)&&(l2<=l4))
l=l2;
if((l3<=l2)&&(l3<=l1)&&(l3<=l4))
l=l3;
if((l4<=l2)&&(l4<=l3)&&(l4<=l1))
l=l4;
if(l==l1)
l=0;
if(l==l2)
l=1;
if(l==l3)
l=2;
if(l==l4)
l=3;
switch(l)
{
case 0:
		                                                                        if(map[bx+1][by]!='w')
                                                                             	 {if(map[bx][by]!='Y')
	                                                                              map[bx][by]=' ';
                                                                             	 if(map[bx+1][by]!='Y')
	                                                                              map[++bx][by]='B';
	                                                                              else
	                                                                               map[++bx][by]='Y';
                                                                                  }  break; 
case 1:                                                                          
                                                                                 if(map[bx-1][by]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx-1][by]!='Y')
                                                                             	 map[--bx][by]='B';
                                                                             	 else
                                                                             	  map[--bx][by]='Y';
                                                                                  }break; 

case 2: 
                                                                             	if(map[bx][by+1]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx][by+1]!='Y')
                                                                             	 map[bx][++by]='B';
                                                                             	 else
                                                                             	  map[bx][++by]='Y';
                                                                                  }  break;                                                                             
case 3:
                                                                                if(map[bx][by-1]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx][by-1]!='Y')
                                                                             	 map[bx][--by]='B';
                                                                             	 else
                                                                             	  map[bx][by]='Y';
                                                                                  }	                                                                                  
}
l1=((cx+1-mx)*(cx+1-mx)+(cy-my)*(cy-my));
l2=((cx-1-mx)*(cx-1-mx)+(cy-my)*(cy-my));
l3=((cx-mx)*(cx-mx)+(cy+1-my)*(cy+1-my));
l4=((cx-mx)*(cx-mx)+(cy-1-my)*(cy-1-my));
if((l1<=l2)&&(l1<=l3)&&(l1<=l4))
l=l1;
if((l2<=l1)&&(l2<=l3)&&(l2<=l4))
l=l2;
if((l3<=l2)&&(l3<=l1)&&(l3<=l4))
l=l3;
if((l4<=l2)&&(l4<=l3)&&(l4<=l1))
l=l4;
if(l==l1)
l=0;
if(l==l2)
l=1;
if(l==l3)
l=2;
if(l==l4)
l=3;
switch(l)
{
case 0:
		                                                                        if(map[cx+1][cy]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
	                                                                              map[cx][cy]=' ';
                                                                             	 if(map[cx+1][cy]!='Y')
	                                                                              map[++cx][cy]='C';
	                                                                              else
	                                                                               map[++cx][cy]='Y';
                                                                                  }  break; 
case 1:                                                                          
                                                                                 if(map[cx-1][cy]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx-1][cy]!='Y')
                                                                             	 map[--cx][cy]='C';
                                                                             	 else
                                                                             	  map[--cx][cy]='Y';
                                                                                  }break; 

case 2: 
                                                                             	if(map[cx][cy+1]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx][cy+1]!='Y')
                                                                             	 map[cx][++cy]='C';
                                                                             	 else
                                                                             	  map[cx][++cy]='Y';
                                                                                  }  break;                                                                             
case 3:
                                                                                if(map[cx][cy-1]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx][cy-1]!='Y')
                                                                             	 map[cx][--cy]='C';
                                                                             	 else
                                                                             	  map[cx][cy]='Y';
                                                                                  }	                                                                                  
}
l1=((ix+1-mx)*(ix+1-mx)+(iy-my)*(iy-my));
l2=((ix-1-mx)*(ix-1-mx)+(iy-my)*(iy-my));
l3=((ix-mx)*(ix-mx)+(iy+1-my)*(iy+1-my));
l4=((ix-mx)*(ix-mx)+(iy-1-my)*(iy-1-my));
if((l1<=l2)&&(l1<=l3)&&(l1<=l4))
l=l1;
if((l2<=l1)&&(l2<=l3)&&(l2<=l4))
l=l2;
if((l3<=l2)&&(l3<=l1)&&(l3<=l4))
l=l3;
if((l4<=l2)&&(l4<=l3)&&(l4<=l1))
l=l4;
if(l==l1)
l=0;
if(l==l2)
l=1;
if(l==l3)
l=2;
if(l==l4)
l=3;
switch(l)
{
case 0:
		                                                                        if(map[ix+1][iy]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
	                                                                              map[ix][iy]=' ';
                                                                             	 if(map[ix+1][iy]!='Y')
	                                                                              map[++ix][iy]='I';
	                                                                              else
	                                                                               map[++ix][iy]='Y';
                                                                                  }  break; 
case 1:                                                                          
                                                                                 if(map[ix-1][iy]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix-1][iy]!='Y')
                                                                             	 map[--ix][iy]='I';
                                                                             	 else
                                                                             	  map[--ix][iy]='Y';
                                                                                  }break; 

case 2: 
                                                                             	if(map[ix][iy+1]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix][iy+1]!='Y')
                                                                             	 map[ix][++iy]='I';
                                                                             	 else
                                                                             	  map[ix][++iy]='Y';
                                                                                  }  break;                                                                             
case 3:
                                                                                if(map[ix][iy-1]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix][iy-1]!='Y')
                                                                             	 map[ix][--iy]='I';
                                                                             	 else
                                                                             	  map[ix][iy]='Y';
                                                                                  }	                                                                                  
}
break;
case 1:                                                                      x=rand()%4;
                                                                             switch(x)
                                                                             {
                                                                             case 0:                       //down soul P
                                                                             	if(map[px+1][py]!='w')
                                                                             	 {if(map[px][py]!='Y')
	                                                                              map[px][py]=' ';
                                                                             	 if(map[px+1][py]!='Y')
	                                                                              map[++px][py]='P';
	                                                                              else
	                                                                               map[++px][py]='Y';
                                                                                  }
                                                                             	 break;
                                                                             case 1:                       //left soul P
                                                                             	if(map[px][py-1]!='w')
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px][py-1]!='Y')
                                                                             	 map[px][--py]='P';
                                                                             	 else
                                                                             	  map[px][--py]='Y';
                                                                                  }

                                                                                  break;
                                                                             case 2:                       //up soul P
                                                                                if(map[px-1][py]!='w')
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px-1][py]!='Y')
                                                                             	 map[--px][py]='P';
                                                                             	 else
                                                                             	  map[--px][py]='Y';
                                                                                  }
                                                                             	 break;      
                                                                             case 3:                      //right soul P
                                                                             	if(map[px][py+1]!='w')
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px][py+1]!='Y')
                                                                             	 map[px][++py]='P';
                                                                             	 else
                                                                             	  map[px][++py]='Y';
                                                                                  } break; }       
                                                                             x=rand()%4;
                                                                             switch(x)
                                                                             {
                                                                             case 0:                       //down soul B
                                                                             	if(map[bx+1][by]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx+1][by]!='Y')
                                                                                 map[++bx][by]='B';
                                                                             	 else
                                                                             	  map[++bx][by]='Y';
                                                                                  }
                                                                             	 break;
                                                                             case 1:                       //left soul B
                                                                             	if(map[bx][by-1]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx][by-1]!='Y')
                                                                             	 map[bx][--by]='B';
                                                                             	 else
                                                                             	  map[bx][--by]='Y';
                                                                                   }
                                                                                 break;
                                                                             case 2:                       //up soul B
                                                                             	if(map[bx-1][by]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx-1][by]!='Y')
                                                                             	 map[--bx][by]='B';
                                                                             	 else
                                                                             	  map[--bx][by]='Y';
                                                                                  }
                                                                             	 break;      
                                                                             case 3:                      //right soul B
                                                                             	if(map[bx][by+1]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx][by+1]!='Y')
                                                                             	 map[bx][++by]='B';
                                                                             	 else
                                                                             	  map[bx][++by]='Y';
                                                                                  }  }      
                                                                             x=rand()%4;
                                                                             switch(x)
                                                                             {
                                                                             case 0:                       //down soul I
                                                                             	if(map[ix+1][iy]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix+1][iy]!='Y')
                                                                             	 map[++ix][iy]='I';
                                                                             	 else
                                                                             	  map[++ix][iy]='Y';
                                                                                  }
                                                                             	 break;
                                                                             case 1:                       //left soul I
                                                                             	if(map[ix][iy-1]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix][iy-1]!='Y')
                                                                             	 map[ix][--iy]='I';
                                                                             	 else
                                                                             	  map[ix][--iy]='Y';
                                                                                  }
                                                                             
                                                                                  break;
                                                                             case 2:                       //up soul I
                                                                             	if(map[ix-1][iy]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix-1][iy]!='Y')
                                                                             	 map[--ix][iy]='I';
                                                                             	 else
                                                                             	  map[--ix][iy]='Y';
                                                                                  }
                                                                             	 break;      
                                                                             case 3:                      //right soul I
                                                                             	if(map[ix][iy+1]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix][iy+1]!='Y')
                                                                             	 map[ix][++iy]='I';
                                                                             	 else
                                                                             	  map[ix][++iy]='Y';
                                                                                  }  }      
                                                                             x=rand()%4;
                                                                             switch(x)
                                                                             {
                                                                             case 0:                       //down soul C
                                                                             	if(map[cx+1][by]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx+1][cy]!='Y')
                                                                             	 map[++cx][cy]='C';
                                                                             	 else
                                                                             	  map[++cx][cy]='Y';
                                                                                  }
                                                                             	 break;
                                                                             case 1:                       //left soul C
                                                                             	if(map[cx][cy-1]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx][cy-1]!='Y')
                                                                             	 map[cx][--cy]='C';
                                                                             	 else
                                                                             	  map[cx][--cy]='Y';
                                                                                  }

                                                                                  break;
                                                                             case 2:                       //up soul c
                                                                             	if(map[cx-1][cy]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx-1][cy]!='Y')
                                                                             	 map[--cx][cy]='C';
                                                                             	 else
                                                                             	  map[--cx][cy]='Y';
                                                                                  }
                                                                             	 break;      
                                                                             case 3:                      //right soul C
                                                                             	if(map[cx][cy+1]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx][cy+1]!='Y')
                                                                             	 map[cx][++cy]='C';
                                                                             	 else
                                                                             	  map[cx][++cy]='Y';
                                                                                  }  }
}	





system("cls");                                                               //delete kardan map ghabli v chap map v tozihat update shode
                    for(int i=0;i<20;i++)
                    {
		            for(int j=0;j<20;j++)
		             cout<<map[i][j];
		            	cout<<endl;}
	cout<<"score:"<<score<<"           "<<"Pacman:("<<mx<<")"<<"("<<my<<")"<<endl;
	cout<<"Blinky:("<<bx<<")"<<"("<<by<<")"<<"   "<<"Pinky:("<<px<<")"<<"("<<py<<")"<<endl;
	cout<<"Inky:("<<ix<<")"<<"("<<iy<<")"<<"      "<<"Clyde:("<<cx<<")"<<"("<<cy<<")"<<endl;
}if(score==10)
{
system("cls");
                 for(int i=0;i<20;i++)
                    {
		            for(int j=0;j<22;j++)
		             cout<<bord[i][j];
		            	cout<<endl;}
cout<<"shoma bazi ra bordid"<<endl<<"aya mikhahid dobare emtehan konid:"<<endl<<"1.yes"<<endl<<"2.no"<<endl;
cin>>z;
while(z!=1&&z!=2)
{cin>>z;
}
bazi=z;
if(z==1)
{system("cls");
score=0;}}
else
{system("cls");
                 for(int i=0;i<20;i++)
                    {
		            for(int j=0;j<22;j++)
		             cout<<bakht[i][j];
		            	cout<<endl;}
cout<<"score:  "<<score<<endl;
if((mx==px&&my==py))	 
{cout<<"you got caught by pinky";

}
if((mx==ix&&my==iy))	 
{cout<<"you got caught by Inky";

}
if((mx==bx&&my==by))	 
{cout<<"you got caught by Blinky";

}
if((mx==cx&&my==cy))	 
{cout<<"you got caught by Clyde";

}

cout<<endl<<"aya mikhahid dobare emtehan konid:"<<endl<<"1.yes"<<endl<<"2.no"<<endl;
cin>>z;
while(z!=1&&z!=2)
{cin>>z;
}
bazi=z;
if(z==1)
{system("cls");
score=0;}}
break;
case 3:
		for(int k=0;score<10;k++)
{ 
if((mx==px&&my==py)||(mx==cx&&my==cy)||(mx==bx&&my==by)||(mx==ix&&my==iy))	 
{
break;
}
x=getch();                                     //daryaft klid harekat
switch(x){                                    
case 'a':                                     //harkat pacman ba key a baray left
     if(map[mx][my-1]=='w')
      cout<<"no move";
else
    {if(map[mx][my-1]=='Y')                                                            //nahvaye afzayesh emtiaz 
     ++score;
     {map[mx][my]=' ';
	 map[mx][--my]='M';
     }}break;

case 's':                                   //harkat pacman ba key s baray down
    if(map[mx+1][my]=='w')
    cout<<"no move";
else
     {if(map[mx+1][my]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[++mx][my]='M';
     }}break;
    
case 'd':                                 //harkat pacman ba key d baray right
     if(map[mx][my+1]=='w')
     cout<<"no move";
     else
     {if(map[mx][my+1]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[mx][++my]='M';
     }}
     break;

case 'w':	                              //harkat pacman ba key w baray up
     if(map[mx-1][my]=='w')
     cout<<"no move";
else
    {if(map[mx-1][my]=='Y')
     ++score;  
     {map[mx][my]=' ';
	 map[--mx][my]='M';
     }} break;
case 72:                                 //harkat pacman ba key arrow up
  if(map[mx-1][my]=='w')
     cout<<"no move";
else
    {if(map[mx-1][my]=='Y')
     ++score;  
     {map[mx][my]=' ';
	 map[--mx][my]='M';
     }}break;
case 80:    if(map[mx+1][my]=='w')      //harkat pacman ba key arrow down
    cout<<"no move";
else
     {if(map[mx+1][my]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[++mx][my]='M';
     }}	break;
case 75:           if(map[mx][my-1]=='w') //harkat pacman ba key arrow left
      cout<<"no move";
else
    {if(map[mx][my-1]=='Y')                                                           
     ++score;
     {map[mx][my]=' ';
	 map[mx][--my]='M';
     }}break;
case 77:                               //harkat pacman ba key arrow right
     if(map[mx][my+1]=='w')
     cout<<"no move";
     else
     {if(map[mx][my+1]=='Y')
     ++score;
     {map[mx][my]=' ';
	 map[mx][++my]='M';
     }}
} 
l1=((px+1-mx)*(px+1-mx)+(py-my)*(py-my));                                //be dast avardan fasle az pacman dar 4 jahat soul
l2=((px-1-mx)*(px-1-mx)+(py-my)*(py-my));
l3=((px-mx)*(px-mx)+(py+1-my)*(py+1-my));
l4=((px-mx)*(px-mx)+(py-1-my)*(py-1-my));
if((l1<=l2)&&(l1<=l3)&&(l1<=l4))                                       //peyda kardan kotah tarin fasle az pacman
l=l1;
if((l2<=l1)&&(l2<=l3)&&(l2<=l4))
l=l2;
if((l3<=l2)&&(l3<=l1)&&(l3<=l4))
l=l3;
if((l4<=l2)&&(l4<=l3)&&(l4<=l1))
l=l4;
if(l==l1)
l=0;
if(l==l2)
l=1;
if(l==l3)
l=2;
if(l==l4)
l=3;
switch(l)
{
case 0:
		                                                                        if(map[px+1][py]!='w')         //down soul P
                                                                             	 {if(map[px][py]!='Y')
	                                                                              map[px][py]=' ';
                                                                             	 if(map[px+1][py]!='Y')
	                                                                              map[++px][py]='P';
	                                                                              else
	                                                                               map[++px][py]='Y';
                                                                                  }  break; 
case 1:                                                                          
                                                                                 if(map[px-1][py]!='w')         //up soul P
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px-1][py]!='Y')
                                                                             	 map[--px][py]='P';
                                                                             	 else
                                                                             	  map[--px][py]='Y';
                                                                                  }break; 

case 2: 
                                                                             	if(map[px][py+1]!='w')          //right soul P
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px][py+1]!='Y')
                                                                             	 map[px][++py]='P';
                                                                             	 else
                                                                             	  map[px][++py]='Y';
                                                                                  }  break;                                                                             
case 3:
                                                                                if(map[px][py-1]!='w')           //left soul P
                                                                             	 {if(map[px][py]!='Y')
                                                                             	 map[px][py]=' ';
                                                                             	 if(map[px][py-1]!='Y')
                                                                             	 map[px][--py]='P';
                                                                             	 else
                                                                             	  map[px][py]='Y';
                                                                                  }	}
l1=((bx+1-mx)*(bx+1-mx)+(by-my)*(by-my));
l2=((bx-1-mx)*(bx-1-mx)+(by-my)*(by-my));
l3=((bx-mx)*(bx-mx)+(by+1-my)*(by+1-my));
l4=((bx-mx)*(bx-mx)+(by-1-my)*(by-1-my));
if((l1<=l2)&&(l1<=l3)&&(l1<=l4))
l=l1;
if((l2<=l1)&&(l2<=l3)&&(l2<=l4))
l=l2;
if((l3<=l2)&&(l3<=l1)&&(l3<=l4))
l=l3;
if((l4<=l2)&&(l4<=l3)&&(l4<=l1))
l=l4;
if(l==l1)
l=0;
if(l==l2)
l=1;
if(l==l3)
l=2;
if(l==l4)
l=3;
switch(l)
{
case 0:
		                                                                        if(map[bx+1][by]!='w')
                                                                             	 {if(map[bx][by]!='Y')
	                                                                              map[bx][by]=' ';
                                                                             	 if(map[bx+1][by]!='Y')
	                                                                              map[++bx][by]='B';
	                                                                              else
	                                                                               map[++bx][by]='Y';
                                                                                  }  break; 
case 1:                                                                          
                                                                                 if(map[bx-1][by]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx-1][by]!='Y')
                                                                             	 map[--bx][by]='B';
                                                                             	 else
                                                                             	  map[--bx][by]='Y';
                                                                                  }break; 

case 2: 
                                                                             	if(map[bx][by+1]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx][by+1]!='Y')
                                                                             	 map[bx][++by]='B';
                                                                             	 else
                                                                             	  map[bx][++by]='Y';
                                                                                  }  break;                                                                             
case 3:
                                                                                if(map[bx][by-1]!='w')
                                                                             	 {if(map[bx][by]!='Y')
                                                                             	 map[bx][by]=' ';
                                                                             	 if(map[bx][by-1]!='Y')
                                                                             	 map[bx][--by]='B';
                                                                             	 else
                                                                             	  map[bx][by]='Y';
                                                                                  }	                                                                                  
}
l1=((cx+1-mx)*(cx+1-mx)+(cy-my)*(cy-my));
l2=((cx-1-mx)*(cx-1-mx)+(cy-my)*(cy-my));
l3=((cx-mx)*(cx-mx)+(cy+1-my)*(cy+1-my));
l4=((cx-mx)*(cx-mx)+(cy-1-my)*(cy-1-my));
if((l1<=l2)&&(l1<=l3)&&(l1<=l4))
l=l1;
if((l2<=l1)&&(l2<=l3)&&(l2<=l4))
l=l2;
if((l3<=l2)&&(l3<=l1)&&(l3<=l4))
l=l3;
if((l4<=l2)&&(l4<=l3)&&(l4<=l1))
l=l4;
if(l==l1)
l=0;
if(l==l2)
l=1;
if(l==l3)
l=2;
if(l==l4)
l=3;
switch(l)
{
case 0:
		                                                                        if(map[cx+1][cy]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
	                                                                              map[cx][cy]=' ';
                                                                             	 if(map[cx+1][cy]!='Y')
	                                                                              map[++cx][cy]='C';
	                                                                              else
	                                                                               map[++cx][cy]='Y';
                                                                                  }  break; 
case 1:                                                                          
                                                                                 if(map[cx-1][cy]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx-1][cy]!='Y')
                                                                             	 map[--cx][cy]='C';
                                                                             	 else
                                                                             	  map[--cx][cy]='Y';
                                                                                  }break; 

case 2: 
                                                                             	if(map[cx][cy+1]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx][cy+1]!='Y')
                                                                             	 map[cx][++cy]='C';
                                                                             	 else
                                                                             	  map[cx][++cy]='Y';
                                                                                  }  break;                                                                             
case 3:
                                                                                if(map[cx][cy-1]!='w')
                                                                             	 {if(map[cx][cy]!='Y')
                                                                             	 map[cx][cy]=' ';
                                                                             	 if(map[cx][cy-1]!='Y')
                                                                             	 map[cx][--cy]='C';
                                                                             	 else
                                                                             	  map[cx][cy]='Y';
                                                                                  }	                                                                                  
}
l1=((ix+1-mx)*(ix+1-mx)+(iy-my)*(iy-my));
l2=((ix-1-mx)*(ix-1-mx)+(iy-my)*(iy-my));
l3=((ix-mx)*(ix-mx)+(iy+1-my)*(iy+1-my));
l4=((ix-mx)*(ix-mx)+(iy-1-my)*(iy-1-my));
if((l1<=l2)&&(l1<=l3)&&(l1<=l4))
l=l1;
if((l2<=l1)&&(l2<=l3)&&(l2<=l4))
l=l2;
if((l3<=l2)&&(l3<=l1)&&(l3<=l4))
l=l3;
if((l4<=l2)&&(l4<=l3)&&(l4<=l1))
l=l4; 
if(l==l1)
l=0;
if(l==l2)
l=1;
if(l==l3)
l=2;
if(l==l4)
l=3;
switch(l)
{
case 0:
		                                                                        if(map[ix+1][iy]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
	                                                                              map[ix][iy]=' ';
                                                                             	 if(map[ix+1][iy]!='Y')
	                                                                              map[++ix][iy]='I';
	                                                                              else
	                                                                               map[++ix][iy]='Y';
                                                                                  }  break; 
case 1:                                                                          
                                                                                 if(map[ix-1][iy]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix-1][iy]!='Y')
                                                                             	 map[--ix][iy]='I';
                                                                             	 else
                                                                             	  map[--ix][iy]='Y';
                                                                                  }break; 

case 2: 
                                                                             	if(map[ix][iy+1]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix][iy+1]!='Y')
                                                                             	 map[ix][++iy]='I';
                                                                             	 else
                                                                             	  map[ix][++iy]='Y';
                                                                                  }  break;                                                                             
case 3:
                                                                                if(map[ix][iy-1]!='w')
                                                                             	 {if(map[ix][iy]!='Y')
                                                                             	 map[ix][iy]=' ';
                                                                             	 if(map[ix][iy-1]!='Y')
                                                                             	 map[ix][--iy]='I';
                                                                             	 else
                                                                             	  map[ix][iy]='Y';
                                                                                  }	                                                                                  
}

	



system("cls");                                                               //delete kardan map ghabli v chap map v tozihat update shode
                    for(int i=0;i<20;i++)
                    {
		            for(int j=0;j<20;j++)
		             cout<<map[i][j];
		            	cout<<endl;}
	cout<<"score:"<<score<<"           "<<"Pacman:("<<mx<<")"<<"("<<my<<")"<<endl;
	cout<<"Blinky:("<<bx<<")"<<"("<<by<<")"<<"   "<<"Pinky:("<<px<<")"<<"("<<py<<")"<<endl;
	cout<<"Inky:("<<ix<<")"<<"("<<iy<<")"<<"      "<<"Clyde:("<<cx<<")"<<"("<<cy<<")"<<endl;

}
if(score==10)
{
system("cls");
                 for(int i=0;i<20;i++)
                    {
		            for(int j=0;j<22;j++)
		             cout<<bord[i][j];
		            	cout<<endl;}
cout<<"shoma bazi ra bordid"<<endl<<"aya mikhahid dobare emtehan konid:"<<endl<<"1.yes"<<endl<<"2.no"<<endl;
cin>>z;
while(z!=1&&z!=2)
{cin>>z;
}
bazi=z;
if(z==1)
{system("cls");
score=0;}}
else
{system("cls");
                 for(int i=0;i<20;i++)
                    {
		            for(int j=0;j<22;j++)
		             cout<<bakht[i][j];
		            	cout<<endl;}
cout<<"score:  "<<score<<endl;
if((mx==px&&my==py))	 
{cout<<"you got caught by pinky";

}
if((mx==ix&&my==iy))	 
{cout<<"you got caught by Inky";

}
if((mx==bx&&my==by))	 
{cout<<"you got caught by Blinky";

}
if((mx==cx&&my==cy))	 
{cout<<"you got caught by Clyde";

}

cout<<endl<<"aya mikhahid dobare emtehan konid:"<<endl<<"1.yes"<<endl<<"2.no"<<endl;
cin>>z;
while(z!=1&&z!=2)
{cin>>z;
}
bazi=z;
if(z==1)
{system("cls");
score=0;}}

}
}
system("cls");                                                // khorooj az bazi
cout<<"shoma az bazi kharej shodid";
getch();
	return 0;
}
