%option yylineno

%{
#include <stdio.h>
#include "mini.tab.h"
%}

%x COMENTARIO

TAB         [ \t] 

IDENTIFICADOR   [a-zA-Z_][a-zA-Z_0-9]*

CONST_ENTERAS   [0-9]+|([#][0-7]+)|([#][hH][0-9a-fA-F]+)
CONST_ENTERAS_MANTISA   {CONST_ENTERAS}exp(([\+\-])?{CONST_ENTERAS})
CONST_REALES    ({CONST_ENTERAS})?\.({CONST_ENTERAS})
CONST_REALES_MANTISA    {CONST_REALES}exp(([\+\-])?{CONST_ENTERAS})

CARACTER        \'[^\n\'\#]\'|\'[\#][0-7]{1,3}\'|\'[\#][hH][0-7A-Fa-f]{1,2}\' 
CADENAS_CARACTERES      \'[\#a-zA-Z0-9\_\/\.\' \n]*\'

DIRECTORIO      [^\n\|\/]
FICHERO         [^\n\|\/]+\.[^\n\|\/]+
RUTA             \|((\/)?{DIRECTORIO}(\/)?)*{FICHERO}\|

DELIMITADORES     "{"|"}"|"("|")"|[\:]|[\;]|[\,]
DELIM_FLECHA    "->" 

OP_ARIT       [\+\-\/\%]|[\*]{1,2}
OP_DE_BIT      "<-"|[\&]{1}|[\|]{1}|[\@]|[\~]
OP_RELACIONAL   [\<]|[\>]|"=<"|"=>"|[\=]{2}|"!="
OP_LOGICOS      [\!]{1}|[\&\|]{2}
OP_ASIGNACION   [\=]|[\=]{OP_ARIT}|[\=]{OP_DE_BIT}
OP_ACCESO       [\.]|"["|"]"|"{"|"}"|[\^]|[\\]|"^."

COM_UNILINEA      ##.+

%%

{TAB}*"#-"                      BEGIN COMENTARIO;
<COMENTARIO>.|\n                       ;
<COMENTARIO>"-#"({TAB}*\n)*     BEGIN 0;

{COM_UNILINEA}      ;

\n|{TAB}+|(\n+{TAB}*)*            ; 

(?i:array)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ARRAY);
(?i:cabecera)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CABECERA);
(?i:cada)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CADA);
(?i:cadena)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CADENA);
(?i:caracter)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CARACTER);
(?i:conjunto)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CONJUNTO);
(?i:constantes)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CONSTANTES);
(?i:continuar)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CONTINUAR);
(?i:de)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(DE);
(?i:defecto)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(DEFECTO);
(?i:devolver)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(DEVOLVER);
(?i:ejecuta)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(EJECUTA);
(?i:encambio)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ENCAMBIO);
(?i:entero)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ENTERO);
(?i:es)       printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ES);
(?i:escape)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ESCAPE);
(?i:estructura)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ESTRUCTURA);
(?i:etiqueta)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ETIQUETA);
(?i:excepcion)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(EXCEPCION);
(?i:fichero)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(FICHERO);
(?i:fin)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(FIN);
(?i:funcion)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(FUNCION);
(?i:hacer)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(HACER);
(?i:hash)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(HASH);
(?i:lanza)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(LANZA);
(?i:mientras)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(MIENTRAS);
(?i:nada)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(NADA);
(?i:otra)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(OTRA);
(?i:para)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(PARA);
(?i:principio)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(PRINCIPIO);
(?i:programa)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(PROGRAMA);
(?i:real)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(REAL);
(?i:ref)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(REF);
(?i:saltar)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(SALTAR);
(?i:si)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(SI);
(?i:sino)     printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(SINO);
(?i:tipos)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(TIPOS);
(?i:union)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(UNION);
(?i:variables)    printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(VARIABLES);

(?i:tamano)       printf("linea %d, operador de acceso: %s\n", yylineno, yytext); return(TAMANO);

{IDENTIFICADOR}             { printf("linea %d, identificador: %s\n", yylineno ,yytext); return(IDENTIFICADOR); } 

{RUTA}              { printf("linea %d, ruta: %s\n", yylineno, yytext); return(RUTA); }

{CONST_ENTERAS}     { printf("linea %d, ctn entera: %s\n", yylineno, yytext); return(CTC_ENTERA); }

{CONST_ENTERAS_MANTISA}     { printf("linea %d, ctn entera con mantisa: %s\n", yylineno, yytext); }

{CONST_REALES}     { printf("linea %d, ctn real: %s\n", yylineno, yytext); return(CTC_REAL); }

{CONST_REALES_MANTISA}     { printf("linea %d, ctn real con mantisa: %s\n", yylineno, yytext); }

{DELIMITADORES} |
{DELIM_FLECHA}      { printf("linea %d, delimitador: %s\n", yylineno ,yytext); return(yytext[0]); }

{CARACTER}                { printf("linea %d, caracter: %s\n", yylineno ,yytext); return(CTC_CARACTER); }

{CADENAS_CARACTERES}        { printf("linea %d, cadena de caracteres: %s\n", yylineno ,yytext); return(CTC_CADENA); }

{OP_ARIT}         { printf("linea %d, operador aritmetico: %s\n", yylineno ,yytext); return(yytext[0]); }

{OP_DE_BIT}      { printf("linea %d, operador de bit: %s\n", yylineno ,yytext); return(yytext[0]); }

{OP_RELACIONAL}   { printf("linea %d, operador relacional: %s\n", yylineno ,yytext); return(yytext[0]); }

{OP_LOGICOS}      { printf("linea %d, operador logico: %s\n", yylineno ,yytext); return(yytext[0]); }

{OP_ASIGNACION}   { printf("linea %d, operador de asignacion: %s\n", yylineno ,yytext); return(yytext[0]); }

{OP_ACCESO}       { printf("linea %d, operador de acceso: %s\n", yylineno ,yytext); return(yytext[0]); }

.                 {  printf("linea %d, ERROR: %s\n", yylineno ,yytext); return(yytext[0]); }

%%

