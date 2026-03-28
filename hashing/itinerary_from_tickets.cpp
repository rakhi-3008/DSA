#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

void printItinerary( unordered_map<string, string> tickets){
    unordered_set<string> to;

    for(pair<string, string> ticket : tickets){ //<from, to>
        to.insert(ticket.second);
    }

    string start=" ";
    for(pair<string, string> ticket : tickets){
        if(to.find(ticket.first)==to.end()){    //starting point
            start=ticket.first;
        }
    }

    cout<<start<<" -> ";
    while(tickets.count(start)){
        cout<<tickets[start]<<" -> ";
        start=tickets[start];
    }
    cout<<"destination"<<endl;
}

int main(){
    unordered_map<string, string> tickets;
    tickets["chennai"]="bengaluru";
    tickets["mumbai"]="delhi";
    tickets["goa"]="chennai";
    tickets["delhi"]="goa";

    printItinerary(tickets);

    return 0;
}