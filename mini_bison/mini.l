%option yylineno

%{
#include <stdio.h>
#include "mini.tab.h"
%}

%x COMENTARIO

TAB [ \t] 
ID [a-zA-Z_][a-zA-Z_0-9]*
ENTEROS [0-9]+
OCTALES [#][0-7]+
HEXADECIMALES [#][hH][0-9a-fA-F]+

CTE_INT ({ENTEROS}|{OCTALES}|{HEXADECIMALES})+
CTE_FLOAT ({ENTEROS}|{OCTALES}|{HEXADECIMALES}|\.({ENTEROS}|{OCTALES}|{HEXADECIMALES}))+
CTE_MANEX (({CTE_INT}exp(([\+\-])?({ENTEROS}|{OCTALES}|{HEXADECIMALES})))|{CTE_FLOAT}exp(([\+\-])?({ENTEROS}|{OCTALES}|{HEXADECIMALES})))+
CARACTER ((#['abfnrtv#])|#[hH][0-7]?[A-Za-z0-9]|#[01]?[1-7]{1,2}|[^'#\n])
CADENA '({CARACTER}|#\n)*'
RUTA \|[a-zA-Z\_\/\.]+\|
DELIMITADORES "{"|"}"|"("|")"|[\:]|[\;]|[\,]
OP_AR       [\+\-\/\%]|[\*]
OP_BIT      [\&]|[\|]|[\@]|[\~]
OP_REL   [\<]|[\>]
OP_LOG      [\!]|[\&\|]
OP_ACC       "tamano"|[\.]|"["|"]"|"{"|"}"|[\^]|[\\]
COMENTARIOS_UNILINEA      ##.+
%%

{TAB}*"#-"                      BEGIN COMENTARIO;
<COMENTARIO>.|\n                       ;
<COMENTARIO>"-#"({TAB}*\n)*     BEGIN 0;

{COMENTARIOS_UNILINEA}      ;

\n|{TAB}+|(\n+{TAB}*)*            ;

(?i:array) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(ARRAY);
(?i:tamano) printf("linea %d, operador tamano: %s\n", yylineno, yytext);return(TAMANO);
(?i:cabecera) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(CABECERA);
(?i:cada) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(CADA);
(?i:cadena) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(CADENA);
(?i:caracter) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(CARACTER);
(?i:conjunto) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(CONJUNTO);
(?i:constantes) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(CONSTANTES);
(?i:continuar) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(CONTINUAR);
(?i:de) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(DE);
(?i:defecto) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(DEFECTO);
(?i:devolver) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(DEVOLVER);
(?i:ejecuta) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(EJECUTA);
(?i:encambio) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(ENCAMBIO);
(?i:entero) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(ENTERO);
(?i:es) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(ES);
(?i:escape) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(ESCAPE);
(?i:estructura) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(ESTRUCTURA);
(?i:etiqueta) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(ETIQUETA);
(?i:excepcion) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(EXCEPCION);
(?i:fichero) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(FICHERO);
(?i:fin) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(FIN);
(?i:funcion) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(FUNCION);
(?i:hacer) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(HACER);
(?i:hash) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(HASH);
(?i:lanza) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(LANZA);
(?i:mientras) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(MIENTRAS);
(?i:nada) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(NADA);
(?i:otra) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(OTRA);
(?i:para) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(PARA);
(?i:principio) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(PRINCIPIO);
(?i:programa) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(PROGRAMA);
(?i:real) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(REAL);
(?i:ref) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(REF);
(?i:saltar) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(SALTAR);
(?i:si) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(SI);
(?i:sino) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(SINO);
(?i:tipos) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(TIPOS);
(?i:union) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(UNION);
(?i:variables) printf("linea %d, palabra reservada: %s\n", yylineno, yytext);return(VARIABLES);



"**" { printf("linea %d, operador aritmetico: %s\n", yylineno ,yytext);return POTENCIA;}
"==" { printf("linea %d, operador relacional: %s\n", yylineno ,yytext);return EQ;}
"!="  { printf("linea %d, operador relacional: %s\n", yylineno ,yytext);return NEQ;}
"&&"  { printf("linea %d, operador logico AND: %s\n", yylineno ,yytext);return AND;}
"||"  { printf("linea %d, operador logico OR: %s\n", yylineno ,yytext);return OR;}
"->" { printf("linea %d, flecha derecha: %s\n", yylineno, yytext);return FLECHA_DCHA;}
"<-" { printf("linea %d, flecha izquierda: %s\n", yylineno, yytext);return FLECHA_IZDA;}
"=>"  { printf("linea %d, operador: %s\n", yylineno, yytext);return GE;}
"=<"  { printf("linea %d, operador: %s\n", yylineno, yytext);return LE;}
"=%"  { printf("linea %d, operador asignacion modulo: %s\n", yylineno, yytext);return MOD_ASIG;}
"=|"  { printf("linea %d, operador asignacion OR: %s\n", yylineno, yytext);return OR_ASIG;}
"^." { printf("linea %d, operador indireccion: %s\n", yylineno, yytext);return INDIRECCION;}
"=+" { printf("linea %d, operador asignacion suma: %s\n", yylineno, yytext);return SUMA_ASIG;}
"=<-" { printf("linea %d, operador: %s\n", yylineno, yytext);return FI_ASIG;}
"=**" { printf("linea %d, operador asignacion potencia: %s\n", yylineno, yytext);return POT_ASIG;}
"=-" { printf("linea %d, operador asignacion resta: %s\n", yylineno, yytext);return RESTA_ASIG;}
"=->" { printf("linea %d, operador: %s\n", yylineno, yytext);return FD_ASIG;}
"=*" { printf("linea %d, operador asignacion producto: %s\n", yylineno, yytext);return MULT_ASIG;}
"=&" { printf("linea %d, operador asignacion AND: %s\n", yylineno, yytext);return AND_ASIG;}
"=/" { printf("linea %d, operador asignacion division: %s\n", yylineno, yytext);return DIV_ASIG;}
"=@" { printf("linea %d, operador asignacion XOR: %s\n", yylineno, yytext);return XOR_ASIG;}
"=" { printf("linea %d, operador de asignacion: %s\n", yylineno ,yytext);return yytext[0];}

{CTE_INT} {printf("linea %d, constante entera: %s\n", yylineno, yytext);return CTC_ENTERA;}
{CTE_FLOAT} {printf("linea %d, constante real: %s\n", yylineno, yytext);return CTC_REAL;}
{CTE_MANEX} {printf("linea %d, constante con mantisa y/o exponente: %s\n", yylineno, yytext);return CTC_REAL;}
{OP_AR} { printf("linea %d, operador aritmetico: %s\n", yylineno ,yytext);return yytext[0];}
{OP_BIT} { printf("linea %d, operador de bit: %s\n", yylineno ,yytext);return yytext[0];}
{OP_REL} { printf("linea %d, operador relacional: %s\n", yylineno ,yytext);return yytext[0];}
{OP_LOG} { printf("linea %d, operador logico: %s\n", yylineno ,yytext);return yytext[0];}
{OP_ACC} { printf("linea %d, operador de acceso: %s\n", yylineno ,yytext);return yytext[0];}
{DELIMITADORES} { printf("linea %d, delimitador: %s\n", yylineno ,yytext);return yytext[0];}
{ID} { printf("linea %d, identificador: %s\n", yylineno ,yytext);return IDENTIFICADOR;} 
{RUTA} { printf("linea %d, ruta: %s\n", yylineno, yytext);return RUTA;}
{CARACTER} {printf("linea %d, caracter: %s\n", yylineno, yytext); return CTC_CARACTER;}
{CADENA} { printf("linea %d, cadena de caracteres: %s\n", yylineno ,yytext);return CTC_CADENA;}

. printf("linea %d,ERROR: %s\n",yylineno,yytext);

%%



