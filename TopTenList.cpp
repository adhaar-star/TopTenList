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
  //  for(vector<Hyperlink>::iterator it = _list.begin();it!=_list.end();++it){
        for(int i=0; i<_list.size(); i++)
  {
         cout<<i+1<<" of "<<_list.size()<<" "
             <<_list[i].text<<" "
             <<_list[i].url<<std::endl;
       // printf("%s\n",it->text.c_str());
    }
//}
}

// Display Top Ten Languages from end to begin
void TopTenList::display_backward(){
   // for(vector<Hyperlink>::reverse_iterator it = _list.rbegin();it!=_list.rend();++it){
           for(int i=_list.size()-1; i>0; i--)
  {
         cout<<i+1<<" of "<<_list.size()<<" "
             <<_list[i].text<<" "
             <<_list[i].url<<std::endl;
       // printf("%s\n",it->text.c_str());
    }
    //}
}