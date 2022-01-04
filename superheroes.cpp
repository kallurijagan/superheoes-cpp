#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,string>superheroes;
    superheroes.clear();
    superheroes["78737626"]="SUPERMAN";
    superheroes["8467"]="THOR";
    superheroes["76246"]="ROBIN";
    superheroes["4766626"]="IRONMAN";
    superheroes["4467874337"]="GHOSTRIDER";
    superheroes["22782462637422"]="CAPTAINAMERICA";
    superheroes["35274"]="FLASH";
    superheroes["965837463"]="WOLVERINE";
    superheroes["228626"]="BATMAN";
    superheroes["4855"]="HULK";
    superheroes["25233"]="BLADE";
    superheroes["7426866"]="PHANTOM";
    superheroes["774337626"]="SPIDERMAN";
    superheroes["2522594369"]="BLACKWIDOW";
    superheroes["4355269"]="HELLBOY"; 
    superheroes["78647437"]="PUNISHER";
    long long type;
    string code;
    while(cin>>type>>code){
        if(type==0){
            if(superheroes.find(code)!=superheroes.end()){
                cout<<superheroes[code]<<endl;
            }
            else{
                cout<<"No superhero exists with entered code."<<endl;
            }
        }
        else {
        cout<<"Error in calling the message with given type input."<<endl;
        }
    }   
    return 0;
}