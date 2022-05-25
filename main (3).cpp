//Project CS
//nada dawood alali, zainab al thonayan, yaqeen al zawad. badriah aldoosary

#include<iostream>
#include <fstream>  
using namespace std; 
#define plantlist 25
ofstream outFile ,appFile;
ifstream   inFile;

struct plantDetails
{
int PID;
string type;
string name;
string care;
string water;
string information;


}plantDetails[plantlist];











int mainplantlist = 0 ;
void insert();
int plantmenu();
void display();
int checkvalidid();
string toolscare();
void checkout();
int Greenstore();
void inserPlantsToFile();
void readPlantsToFile();

///////////////
void insert(){   
mainplantlist++;
plantDetails[(mainplantlist - 1)].PID=1;
plantDetails[(mainplantlist - 1)].type="internal";
plantDetails[(mainplantlist - 1)].name="Bambo";
plantDetails[(mainplantlist - 1)].care="1-It needs indirect light and must be kept from direct rays;  Because it causes yellowing of the leaves and wilting of the plant.\n2-Fertilize once or twice a month with a quarter of the amount written on the compost box.\n";
plantDetails[(mainplantlist - 1)].water="Bamboo grows successfully in the aquatic environment, provided that some conditions are taken into account (such as making sure that the water is very salty, and not using household tap water for irrigation only after leaving it in an open container for at least a full day to reduce the percentage of chlorine harmful to the plant, changing the water or when the roots are in  are roots, big, big, help them grow).\n";
plantDetails[(mainplantlist - 1)].information="-A plant that accepts forming with metal wires to take the beautiful spiral shape that we see in the markets, but it needs patience, time and effort.\n";
mainplantlist++;
plantDetails[(mainplantlist - 1)].PID=2;
plantDetails[(mainplantlist - 1)].type="internal";
plantDetails[(mainplantlist - 1)].name="Zamia";
plantDetails[(mainplantlist - 1)].care="1-Change the compost monthly in the summer\n\n-It can be multiplied by dividing it into sections\n\n-Put the roots in the soil for reproduction.\n";
plantDetails[(mainplantlist - 1)].water="Watered in small quantitiesAfter the soil's upper surface has dried\n\n-It is possible for little leaves to fall.\n";
plantDetails[(mainplantlist - 1)].information="-temperatures 15 to 18\n\n-Dehydration tolerant\n\n-It can reach 120 cm.\n";
mainplantlist++;
plantDetails[(mainplantlist - 1)].PID=3;
plantDetails[(mainplantlist - 1)].type="internal";
plantDetails[(mainplantlist - 1)].name="EpipremnumAureum";
plantDetails[(mainplantlist - 1)].care="1-It needs indirect light in the summer and can be exposed to sunlight in the winter.\n";
plantDetails[(mainplantlist - 1)].water="Watered moderately and reduce in the winter, and to get more fresh, it is preferable to put its pot on a tray filled with wet pebbles, especially in the summer.\n";
plantDetails[(mainplantlist - 1)].information="-One of the most successful indoor ornamental plants.\n- Long branches, for example, can be wrapped on plastic wires and extended in different sides of the room or office to fill the place with its leaves, so it appears as a climbing plant.\n";
mainplantlist++;
plantDetails[(mainplantlist - 1)].PID=1;
plantDetails[(mainplantlist - 1)].type="external";
plantDetails[(mainplantlist - 1)].name="Bougainvillea";
plantDetails[(mainplantlist - 1)].care="Natural fertilizer is given four times a year\n";
plantDetails[(mainplantlist - 1)].water="-It is irrigated with water twice a day during extreme heat, and once a day when the weather is mild, and once every two days during the winter.\n";
plantDetails[(mainplantlist - 1)].information="Its cultivation succeeds in the Kingdom of Saudi Arabia, and there are seven types that are widely cultivated in the Kingdom, including this type, and it is used for several purposes, such as:\n1- Covering for fences, tall trees, gates, cosmetic arches, etc.\n2- Making fences and plant impregnable fences.\n3- It can be molded for decorative purposes.\n";
mainplantlist++;
plantDetails[(mainplantlist - 1)].PID=2;
plantDetails[(mainplantlist - 1)].type="external";
plantDetails[(mainplantlist - 1)].name="RutaGraveolens";
plantDetails[(mainplantlist - 1)].care="-It does not need much care, as it grows in poor breeding, but well-drained soil is better for its growth, and it can be trimmed, but in the spring or after the end of the flowering season,, it needs a sunny place to grow well.\n";
plantDetails[(mainplantlist - 1)].water="-onse a week\n";
plantDetails[(mainplantlist - 1)].information="-It was used as a medicinal plant.\n -If its leaves are dried and placed in a cloth bag and placed in a place, it will repel insects.\n -Its flowers are picked and used for home decoration purposes.\n";
mainplantlist++;
plantDetails[(mainplantlist - 1)].PID=3;
plantDetails[(mainplantlist - 1)].type="external";
plantDetails[(mainplantlist - 1)].name="DelonixRegia";
plantDetails[(mainplantlist - 1)].care="-These trees tolerate hot and dry climates, and care for them is limited \n to removing the dead parts and hoeing the ground twice annually with the addition of compost.\n";
plantDetails[(mainplantlist - 1)].water="-It is watered once a day and abundantly in the summer,and reduces to half the amount in the winter\n";
plantDetails[(mainplantlist - 1)].information="-The poinciana does not bloom until it reaches the age of 10 years.\n";

}
string toolscare(string tools)
{
	cout <<"Tools care:\n" << " 1-Soil \n 2-Scissors \n 3-Irrigation timer \n 4-Plant Pots"<<endl;
	return tools;
}
void display(string type, int id , int info){
    int found=0;
for(int i = 0; i < mainplantlist; i++)
{
    if( plantDetails[i].PID==id &&  plantDetails[i].type==type)
    {
        if (info==1){
            cout << "(-Taking care of it:)\n" << plantDetails[i].care << endl;
        }
        else   if (info==2){
                    cout << "(-How to water it:)\n" << plantDetails[i].water << endl;

        }
          else   if (info==3){
                      cout << "(-Useful information:)\n" << plantDetails[i].information << endl;

        }

        found=1;
    }    
}
if(found==0){
    cout <<"invalid input Please Choose from (1-3) \n" << endl;
}

}
int plantmenu()
{
    int info;
  	cout <<"Choose the service you want:\t" << "1-Taking care of it \t 2-How to water it \t 3-Useful information"<<endl;
  	cin>>info;
  	return info;
  
}
int checkvalidid(int id ){
    int found=0;
for(int i = 0; i < mainplantlist; i++)
{
    if( plantDetails[i].PID==id)
    {
       
        found=1;
    }    
}
return found;
}


void inserPlantsToFile()
{
    
    

	
    for(int i = 0; i < mainplantlist; i++)
       {
                outFile<<"\nPlant #"<< plantDetails[i].PID<<"\n";
                

                 outFile  << "\n(-Name:) " << plantDetails[i].name << endl;
                 outFile  << "\n(-Type:) " << plantDetails[i].type << endl;

            outFile << "\n(-Taking care of it:) " << plantDetails[i].care << endl;
                   outFile << "\n(-How to water it:) " << plantDetails[i].water << endl;

            outFile << "\n(-Useful information:) " << plantDetails[i].information << endl;

        outFile << "--------------------------------------------------"<<endl;

}


 
}

void readPlantsToFile()
{
    string name;
	inFile.open("data.txt",ios::in);
if(inFile.is_open() == true && outFile.is_open() == true )
{   string name;
	while( !inFile.eof() ){
		 getline(inFile,name); // read to variable name
       		 cout << name <<endl;
        	// outFile<<name; // write to first output file
       		 //outFile<<name; // write to second output file
		}
    inFile.close(); 
    cout << "Copied Successfully" <<endl;}
else
    cout << "Failed  !" <<endl;
    
}





int Greenstore()
{
    string plantName[2][3] = {{"zamia","Bamboo","Bougainvillea"}, {"Ruta graveolens","Epipremnum aureum","Delonix regia"}};
    int plantPrice[2][3] = {{69,18,29}, {23,74,68}};

   int rows =  2; // 2 rows  
   int cols = 3; // 3 cols
   
  
   
   int total=0;
   int choice;
   int store;
   
   
  do 
  {
       	cout <<"1-internal plant \t\t 2-external plant \t\t 3-exite"<<endl;
        cin >> store; 
       
      
        if (store != 3)
        {
            for (int j =0; j < cols; j++)
            {
                cout <<(j+1)<<"-"<<plantName[store-1][j]<<" "<<plantPrice[store-1][j]<<" SR"<<endl;
            }
            cin >> choice; 
              // calculate total
            total += plantPrice[store-1][choice-1];
        }
  }while (store != 3 );


      
  return total;
    
    
   
}

void checkout(int total)
{
      

    //  check out
    if (total > 100)
    {
         int discount  = total - (total * 10 / 100);
          cout<<"Total = "<<total<<" after discoutn = "<<discount<< endl;

    }
    else {
         cout<<"Total = "<<total<< endl;

    }

   
}



int main ()
{
 
 insert();
 // filse section start
outFile.open("data.txt",ios::out);
if(outFile.is_open()==true || outFile.is_open()){
        cout << "FIle is opened successfully !" <<endl;
        inserPlantsToFile();
  }
 else
cout << "Failed  !" <<endl;


 
 readPlantsToFile();
 // filse section end


int  plant , info;
string type;
while(true)
	{
		cout << "Welcome to 'GREEN' program to help you take care of plants"<<"\n"<<endl;
		cout << "What Type of plants are you intersted in?"<<"\n"<<endl; 
		cout << "1-Information about internal plants  2-Information about external plants  3-Tools Care  4-Green Store  0-exit"<<endl;
		cin >>  type;
		
		
	if (type=="0"){
	    break;
	}
	else if (type!="1" && type!="2" && type!="0" && type!="3" && type!="4")
	{
	    	cout <<"invalid input try again\n" << endl;
	}
				
		
	else if (type=="3")
	{
	    
	    cout << toolscare(type);
	}
	else if (type=="4")
	{
	     int total= Greenstore();
				    checkout(total);
	}
					
else 	if (type=="1" || type=="2")
			{
			    if (type== "1")
			    {
			        type="internal";
			    }
			    else if (type=="2")
			    {
			          type="external";
			    }
			     //cout<<"mainplantlist.."<<mainplantlist;
				for(int i = 0; i < mainplantlist; i++)
                {
                    if( plantDetails[i].type==type)
                    {
                        cout << plantDetails[i].PID<<"-" << plantDetails[i].name << endl;
                       
                      
                    }    
                }
                 cout<<"choose..";
					cin>>plant;
				
				int check=	checkvalidid(plant);
				if(check==0)
				{
				   	cout <<"invalid input Please Choose from (1-3) \n" << endl; 
				}
				else
					 info= plantmenu();
				//	cout<<info;
					display(type,plant,info);
			}
	

		
		
	} 
	
	
	return 0 ;
}

