#include "CHARACTER.hpp"
#include "../addr.hpp"
namespace libm2{
void CHARACTER::ChatPacket(BYTE type, const char * msg){
    ((void(*)(CHARACTER* pkCh,BYTE,const char*))(Addr::CHARACTER::ChatPacket))(this,type,msg);
}
void CHARACTER::ChatPacket(BYTE type, std::string msg){
    this->ChatPacket(type, msg.c_str());
};
const char * CHARACTER::GetName(void) const{
    return this->m_stName.c_str();
}
bool CHARACTER::SetSyncOwner(LPCHARACTER ch, bool b){
    return ((bool(*)(LPCHARACTER,LPCHARACTER,bool))Addr::CHARACTER::SetSyncOwner)(this,ch,b);
}
BYTE CHARACTER::GetCharType(void){
    return ((BYTE(*)(LPCHARACTER))Addr::CHARACTER::GetCharType)(this);
}
bool CHARACTER::Sync(long x, long y){
    return ((bool(*)(LPCHARACTER,long,long))Addr::CHARACTER::Sync)(this,x,y);
};
BYTE CHARACTER::GetGMLevel(){
    return ((BYTE(*)(LPCHARACTER))Addr::CHARACTER::GetGMLevel)(this);
}
}
