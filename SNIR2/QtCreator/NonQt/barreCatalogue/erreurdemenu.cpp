#include "erreurdemenu.h"



ErreurDeMenu::ErreurDeMenu(int _codeErreur, string _message)
{
codeErreur=_codeErreur;
message=_message;
}

int ErreurDeMenu::getCodeErreur()
{
    return codeErreur;

}

string ErreurDeMenu::getMessage()
{
return message;
}
