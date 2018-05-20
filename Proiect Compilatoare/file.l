%{
#include <stdio.h>
#include "y.tab.h"
%}

%%

"INTREG"|"REAL"|"CARACTER"|"SIR_CARCATERE" { 
    return TIP_DATA; 
}

"SAU"|"SI" {
    return OPERATOR_LOGIC;
}

">"|"<"|"="|"<="|">=" {
    return OPERATOR_RELATIONAL;
}

"+"|"-"|"*"|"/" {
    return OPERATOR_ARITMETIC;
}

"ADEVARAT"|"FALS" {
    return BOOL;
}

"STRUCTURA" {
    return STRUCT;
}

"DACA" {
    return IF;
}

"PENTRU" {
    return FOR; 
}

"EXECUTA_FOR" {
    return DO_FOR;
}

"EXECUTA_WHILE" {
    return DO_WHILE;
}

"RETURNEAZA" {
    return RETURN;
}

"SFARSIT_FOR" {
    return ENDFOR;
}

"SFARSIT_WHILE" {
    return ENDWHILE;
}

"PANA_LA" {
    return UNTIL;
}

"INCEPUTUL_DECLARATIILOR" {
    return START_DECLARATII;
}

"SFARSITUL_DECLARATIILOR" {
    return SFARSIT_DECLARATII;
}

"INCEPUTUL_DECLARATIILOR_FUNCTIILOR" {
    return START_DECLARATII_FUNCTIE;
}

"SFARSITUL_DECLARATIILOR_FUNCTIILOR" {
    return SFARSIT_DECLARATII_FUNCTIE;
}

"CAT_TIMP" {
    return WHILE;
}

"NIMIC" {
    return VOID;
}

"ATUNCI" {
    return THEN;
}

"ALTFEL" {
    return ELSE;
}

"SFARSIT_DACA" {
    return ENDIF;
}

"START" {
    return START_PROGRAM;
}

"FIXAT" {
    return CONSTANTA;
}

"STOP" {
    return STOP_PROGRAM;
}

[_a-zA-Z][_a-zA-Z0-9]* {
    return IDENTIFICATOR;
}

"<-" {
    return ATRIBUIRE;
}

[0-9]+ {
    return NUMAR;
}

[ \t] ;

\n {
    yylineno++;
}

. {return yytext[0];}

 
