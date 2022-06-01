#include "Place.h"
class Place_Manager
{

public:
	Valid v;
	// map< string, vector <Place*> > place_list;
	////typedef std::map< string, vector <Place*> > place_list;
	////static place_list place_list_;
	static std::map< string, vector <Place*> > place_list_;
	/*Place_Manager(const Place_Manager&) = delete;
	void operator=(const Place_Manager&) = delete;*/
public:

	Place_Manager();
	void display_filter();
	void add_filter(vector <Place*>&);
	/*
	-------------search----------------
	*/
	int filter_number();
	void select_search();
	void edit_place(string&);
	void add_place();//only implemented in cpp to show how class works
	void func(vector<Place*>&);
	//void search_duration(vector<Place*>&);
	void search_duration();
	void search_price();
	void search_date();
	void access();
	void remove_connect_places(string);
	void remove_filter();
	void display_places();//display All system places
	void No_filter_display(vector <Place*>& city_places);//display city places
	vector<pair<int, char>> display_selected_filter();//display filter vector
	void display(vector <Place*>&);//select which display in code
	void view_places();
	void view_price(vector<Place*>&);
	void view_start_date(vector<Place*>&);
	void view_end_date(vector<Place*>&);
	void view_duration(vector<Place*>&);
	void admin_delete();
	//datastructure search(city)-->map
	//datastructure search(price) -->tree
	~Place_Manager();
};

