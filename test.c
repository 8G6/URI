#include <stdio.h>
#include "URI.h"

int main(){
     char a[] = "https://www.amazon.in/b/ref=cepc_sbc_atfbau_2?pf_rd_r=PQHSWM83Y12WA4TDASR0&pf_rd_p=fabbe388-be7c-435a-a144-6d2db918738f&pf_rd_m=A1VBAL9TL5WCBF&pf_rd_s=merchandised-search-3&pf_rd_t=30901&pf_rd_i=976419031&node=11599648031";
     char b[500];
     URI_JSON(a,b);
     write(b,"data.json","w");
}
