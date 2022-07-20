#include <stdio.h>
#include "URI.h"

int main(){
     char a[] = "&sxsrf=ALiCzsYq4Gh3tIkQwJfZOqpLDUJWDEUJug%3A1658257346998&ei=wv_WYtmPPIGOseMPqoiCsAQ&ved=0ahUKEwjZ-POA0oX5AhUBR2wGHSqEAEYQ4dUDCA4&uact=5&oq=Jun+as+male+name&gs_lcp=Cgdnd3Mtd2l6EAM6BwgAEEcQsANKBAhBGABKBAhGGABQ5gVY5gVg0ghoAXABeACAAbQBiAG0AZIBAzAuMZgBAKABAcgBCMABAQ&sclient=gws-wiz";
     char b[500];
     URI_JSON(a,b);
     write(b,"data.json","w");
}