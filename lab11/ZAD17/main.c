#include <stdio.h>
#include <stdlib.h>

enum Month{
STYCZEN,
LUTY,
MARZEC,
KWIECIEN,
MAJ,
CZERWIEC,
LIPIEC,
SIERPIEN,
WRZESIEN,
PAZDZIERNIK,
LISTOPAD,
GRUDZIEN
};

int days_in_month(enum Month miesiace){
switch(miesiace){
case STYCZEN:
case MARZEC:
case MAJ:
case LIPIEC:
case SIERPIEN:
case PAZDZIERNIK:
case GRUDZIEN:
return 31;
case KWIECIEN:
case CZERWIEC:
case WRZESIEN:
case LISTOPAD:
return 30;
case LUTY:
return 28;
}
}

int main()
{
    enum Month miesiac = KWIECIEN;
    printf("%d\n", days_in_month(miesiac));
    return 0;
}
