//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"
 using namespace std;

using std::string;

TopTenList::TopTenList()
{
    
_list.resize(10);
};

void TopTenList::set_at(int index, Hyperlink link)
{
_list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
return _list[index-1];
}

// Display Top Ten Languages from beginning to end
void TopTenList::display_forward(){
    for(vector<Hyperlink>::iterator it = _list.begin();it!=_list.end();++it){
 
         cout<< it - _list.begin()+1 << ".  " <<
            "<a href=" << it->url<<
             it->text<< "</a>"<<std::endl;
  
}
}

// Display Top Ten Languages from end to beginning
void TopTenList::display_backward(){
    for(vector<Hyperlink>::reverse_iterator it = _list.rbegin();it!=_list.rend();++it){
         
             cout<< it - _list.rbegin()+1 << ".  " <<
            "<a href=" << it->url<<
             it->text<< "</a>"<<std::endl;
    
    }
}