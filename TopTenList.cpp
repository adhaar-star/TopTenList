//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

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


void TopTenList::display_forward(){
    for(vector<Hyperlink>::iterator it = _list.begin();it!=_list.end();++it){
        printf("%s\n",it->text.c_str());
    }
}

void TopTenList::display_backward(){
    for(vector<Hyperlink>::reverse_iterator it = _list.rbegin();it!=_list.rend();++it){
        printf("%s\n",it->text.c_str());
    }
}