#include<iostream>
using namespace std;
class Players{
	public:
    int jersy;
    string name;
    int ranking[2];
Players()
{
	jersy=1;
	name=2;
	ranking[2]=3;
	}	
};

class Batsman: public Players{
	public:
		string Battingstyle;
		int totalscore;
		float avg,strike_rate;
		// function_call
		void batsmaninfo()
	{
	    cout<<" Enter the name :";
	    getline(cin,name);
		cout<<" Enter the jersy number :";
		cin>>jersy;
		for(int i=0;i<=2;i++)
	{
		cout<<" THE RANKING IN (T20/ODI/TEST)-BATSMAN: ";
		cin>>ranking[i];
		
	}
	cout<<"Enter batting style :";
	cin>>Battingstyle;
	cout<<"Total score :";
	cin>>totalscore;
	cout<<"The strike rate :";
	cin>>strike_rate;
	cout<<"The average is :";
	cin>>avg;	
	}	
	void Bats()
	{
		cout<<"The batsman hits the ball !";
		cout<<"Batsman is Running !";
		
	}
};
	class Bowler: public Players{
		public:
			string bowlingstyle;
			float bowlavg;
			float bowlspeed;
			int totalwick;
			public:
				void bowlerinfo()
			{
				cout<<"Enter the bowler name :";
				getline(cin,name);
				cout<<"Enter jersy number :";
				cin>>jersy;
					for(int i=0;i<=2;i++)
	{
		cout<<"THE RANKING IS (T20/ODI/TEST)-BOWLER :";
		cin>>ranking[i];	
	}
	cout<<"Bowling style is ";
	cin>>bowlingstyle;
	cout<<"The bowling average is ";
	cin>>bowlavg;
	cout<<"The bowl speed is ";
	cin>>bowlspeed;
	cout<<"The wickets taken by the Bowler are ";
	cin>>totalwick;
			}
		void Bowls()
	{
		cout<<"The Bowler is Bowling the ball !";
		cout<<"The Bowler changes the side !";
	}		
	};
	class Wicketkeeper : public Players 
	{
		public:
			string Battingstyle;
		    int totalscore;
		    int totalcatches;
		    int totalstumps;
		void Wicketkeeper_info()
		{
			cout<<" Enter the name :";
	        getline(cin,name);
		    cout<<" Enter the jersy number :";
		    cin>>jersy;
		    cout<<"Enter batting style :";
	        cin>>Battingstyle;
	        cout<<" Total score :";
	        cin>>totalscore;
	        cout<<"Total Catches Taken :";
	        cin>>totalcatches;
	        cout<<"Total Stumps :";
	        cin>>totalstumps;
		}
	void Wicket_keeper()
	{
	cout<<"The Wicker Kepper Catches the Ball ! ";
	cout<<"The Wicker Keeper Do Stumping !";	
	}	
	};
	class Allrounder : public Batsman 
	{
			public:
		string Battingstyle;
		int totalscore;
		float avg,strike_rate;
		// function_call
		void Allrounder_batsmaninfo()
	{
	    cout<<" Enter the name :";
	    getline(cin,name);
		cout<<" Enter the jersy number :";
		cin>>jersy;
		for(int i=0;i<=2;i++)
	{
		cout<<" THE RANKING IN (T20/ODI/TEST)-ALLROUNDER : ";
		cin>>ranking[i];
	}
	cout<<"Enter batting style :";
	cin>>Battingstyle;
	cout<<"Total score :";
	cin>>totalscore;
	cout<<"The strike rate :";
	cin>>strike_rate;
	cout<<"The average is :";
	cin>>avg;	
	}	
	void Allrounder_Bats()
	{
		cout<<" The batsman hits the ball !";
		cout<<" Batsman is Running !";
	}
	};
	class allrounder : public Bowler
	{
		public:
			string bowlingstyle;
			float bowlavg;
			float bowlspeed;
			int totalwick;
			public:
				void allrounder_bowlerinfo()
			{
				cout<<"Enter the bowler name :";
				getline(cin,name);
				cout<<"Enter jersy number :";
				cin>>jersy;
					for(int i=0;i<=2;i++)
	{
		cout<<"THE RANKING IS (T20/ODI/TEST)-ALLROUNDER :";
		cin>>ranking[i];	
	}
	cout<<"Bowling style is ";
	cin>>bowlingstyle;
	cout<<"The bowling average is ";
	cin>>bowlavg;
	cout<<"The bowl speed is ";
	cin>>bowlspeed;
	cout<<"The wickets taken by the Bowler are ";
	cin>>totalwick;
			}
		void allrounder_Bowls()
	{
		cout<<"The Bowler is Bowling the ball !";
		cout<<"The Bowler changes the side !";
	}		
	};
int main()
{
	Players p;
	Batsman b;
	b.batsmaninfo();
	b.Bats();
	Bowler B;
	B.bowlerinfo();
	B.Bowls();
	Wicketkeeper w;
	w.Wicketkeeper_info();
	w.Wicket_keeper();
	Allrounder RB1;
	RB1.Allrounder_batsmaninfo();
	RB1.Allrounder_Bats();
	allrounder RB2;
	RB2.allrounder_bowlerinfo();
	RB2.allrounder_Bowls();
}
