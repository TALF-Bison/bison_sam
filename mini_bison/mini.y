 
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  int yyerror(char *);

%}

%token AND AND_ASIG ARRAY CABECERA CADA CADENA CARACTER CONJUNTO CONSTANTES CONTINUAR CTC_CADENA
%token CTC_CARACTER CTC_ENTERA CTC_REAL DE DEFECTO DIV_ASIG DEVOLVER EJECUTA ENCAMBIO ENTERO EQ ES
%token ESCAPE ESTRUCTURA ETIQUETA EXCEPCION FD_ASIG FI_ASIG FLECHA_DCHA FLECHA_IZDA FICHERO FIN
%token FUNCION HACER HASH GE IDENTIFICADOR INDIRECCION LANZA LE MIENTRAS MOD_ASIG MULT_ASIG NADA NEQ
%token OR OTRA OR_ASIG PARA POT_ASIG PRINCIPIO PROGRAMA POTENCIA REAL REF RESTA_ASIG RUTA SALTAR SI
%token SINO SUMA_ASIG TAMANO TIPOS UNION VARIABLES XOR_ASIG 


%%

/*
Convencion para nombrar las reglas que incluyen varios (sino se puede mejorar dejar estas)

[A]+ v_A_mas

[A]* v_A_ast

(A)+ v_A_mcoma

(A)* v_A_acoma

*/

/************/
/* programa */
/************/
programa : inicio_programa estructura_programa
;

varias_rutas : varias_rutas ',' RUTA
              | RUTA { printf("rutas -> RUTA\n"); }
              ;

varias_cabeceras : varias_cabeceras CABECERA varias_rutas ';' { printf("fich_cabecera -> CABECERA rutas\n"); } 
                 | 
                 ;

inicio_programa : PROGRAMA IDENTIFICADOR ';' varias_cabeceras
;

/*CREO QUE ASÍ YA ESTARÍA*/
declaracion_varias_funciones : declaracion_varias_funciones declaracion_funcion
                             |
                             ;

estructura_programa : declaraciones_tipos
                      declaraciones_constantes
                      declaraciones_variables
                      declaracion_varias_funciones
                      bloque_instrucciones
                      ;


/************************/
/* declaracion de tipos */
/************************/

declaracion_tipo : IDENTIFICADOR ES especificacion_tipo ';'
;

varias_declaracion_tipo : varias_declaracion_tipo declaracion_tipo
                        | declaracion_tipo
                        ;

declaraciones_tipos : TIPOS varias_declaracion_tipo FIN
;

////////

varias_referencias : varias_referencias REF 
                   | 
                   ;

especificacion_tipo : varias_referencias tipo_basico
;

////////

tipo_basico : IDENTIFICADOR 
            | tipo_escalar 
            | tipo_enumerado 
            | tipo_estructurado
            ;

tipo_escalar : ENTERO | REAL | CARACTER | CADENA | FICHERO | EXCEPCION
;

tipo_enumerado : ARRAY DE especificacion_tipo
               | HASH DE especificacion_tipo
               | CONJUNTO DE especificacion_tipo
;

////////

linea_campo : IDENTIFICADOR ES especificacion_tipo ';'
;

varias_linea_campo : varias_linea_campo linea_campo
                   | linea_campo
                   ;

tipo_estructurado : ESTRUCTURA PRINCIPIO varias_linea_campo FIN
                  | UNION PRINCIPIO varias_linea_campo FIN
;



/*****************************/
/* declaracion de constantes */
/*****************************/

declaracion_constante : IDENTIFICADOR ES tipo_basico '=' constante ';'
;

varias_declaracion_constante : varias_declaracion_constante declaracion_constante
                             | declaracion_constante
                             ;

declaraciones_constantes : CONSTANTES varias_declaracion_constante FIN
;

////////

constante : CTC_ENTERA
          | CTC_REAL
          | CTC_CARACTER
          | CTC_CADENA
          | constante_enumerada
          | constante_estructurada
;

//////// 

varias_constante : constante_por_coma_asterisco
                |
                ;
constante_por_coma_asterisco : constante_por_coma_asterisco ',' constante
                   | constante
                   ;

varios_elemento_hash : elemento_hash_por_coma_asterisco
                     |
                     ;
elemento_hash_por_coma_asterisco : elemento_hash_por_coma_asterisco ',' elemento_hash
                       | elemento_hash
                       ;

constante_enumerada : '(' varias_constante ')'
                    | '(' varios_elemento_hash ')'
;

////////

elemento_hash : CTC_CADENA "->" constante
              ;

///////

campo_constante: IDENTIFICADOR '=' constante
;

varios_campo_constante : varios_campo_constante ',' campo_constante
                       | campo_constante
                       ;

constante_estructurada : '{' varios_campo_constante '}'
;


/****************************/
/* declaracion de variables */
/****************************/

varios_identificadores_por_coma_mas : varios_identificadores_por_coma_mas ',' IDENTIFICADOR
                                | IDENTIFICADOR
                                ;

varias_expresiones_por_coma_mas : varias_expresiones_por_coma_mas ',' expresion
                                | expresion
                                ;

declaracion_variables : varios_identificadores_por_coma_mas ':' especificacion_tipo ';'
                      | varios_identificadores_por_coma_mas ':' especificacion_tipo '=' varias_expresiones_por_coma_mas ';'
                      ;


varias_declaracion_variables : varias_declaracion_variables declaracion_variables
                             | declaracion_variables
                             ;

declaraciones_variables : VARIABLES varias_declaracion_variables FIN
;


/****************************/
/* declaracion de funciones */
/****************************/

declaracion_funcion : FUNCION IDENTIFICADOR "->" tipo_salida
                      cuerpo_funcion
                    | FUNCION IDENTIFICADOR lista_parametros "->" tipo_salida
                      cuerpo_funcion
                    ;

////////

varios_parametros : varios_parametros parametros ';'
                  |
                  ;

lista_parametros : '(' varios_parametros parametros ')'
;

//////////////////

varias_expresion_constante_por_coma_mas : varias_expresion_constante_por_coma_mas ',' expresion_constante
                                        | expresion_constante
                                        ;

parametros : varios_identificadores_por_coma_mas ':' especificacion_tipo
            | varios_identificadores_por_coma_mas ':' especificacion_tipo '=' varias_expresion_constante_por_coma_mas
            ;

////////////////

tipo_salida : especificacion_tipo | NADA
;

varias_declaracion_funcion : varias_declaracion_funcion declaracion_funcion
                           |
                           ;

//OJO AQUÍ por los []?
cuerpo_funcion : declaraciones_constantes
                 declaraciones_variables
                 varias_declaracion_funcion
                 bloque_instrucciones
               | declaraciones_constantes
                 varias_declaracion_funcion
                 bloque_instrucciones
               | declaraciones_variables
                 varias_declaracion_funcion
                 bloque_instrucciones 
               | varias_declaracion_funcion
                 bloque_instrucciones
               ;

varias_instrucciones : varias_instrucciones instruccion
                     | instruccion
                     ;

bloque_instrucciones : PRINCIPIO varias_instrucciones FIN
;

/*****************/
/* instrucciones */
/*****************/

instruccion : instruccion_expresion
            | instruccion_bifurcacion
            | instruccion_bucle
            | instruccion_salto
            | instruccion_destino_salto
            | instruccion_devolver
            | instruccion_vacia
            | instruccion_lanzamiento_excepcion
            | instruccion_captura_excepcion
;

instruccion_expresion : expresion_funcional ';'
                      | asignacion ';'
;

asignacion : expresion_indexada operador_asignacion expresion
;

operador_asignacion : '=' | "=+" | "=-" | "=*" | "=/" | "=%" | "=**" | "=<-" | "=->" | "=&" | "=@" | "=|"
;

/////////////////

otros_casos : SI ENCAMBIO '(' expresion ')' accion
;

v_otros_casos : v_otros_casos otros_casos
              |
              ;

instruccion_bifurcacion : SI expresion accion v_otros_casos FIN
                        | SI expresion accion v_otros_casos SINO accion FIN
;


accion : instruccion | bloque_instrucciones
;

////////////////

//separados por coma +
v_asignacion : v_asignacion ',' asignacion
              | asignacion
              ;

instruccion_bucle : MIENTRAS '(' expresion ')' accion
                  | HACER accion MIENTRAS '(' expresion ')' ';'
                  | PARA '(' v_asignacion ';' expresion ';' v_asignacion ')' accion
                  | PARA CADA IDENTIFICADOR '(' expresion ')' accion
;



////////////////

instruccion_salto : SALTAR IDENTIFICADOR ';' | CONTINUAR ';' | ESCAPE ';'
;

instruccion_destino_salto : ETIQUETA IDENTIFICADOR ';'
;

instruccion_devolver : DEVOLVER ';'
                     | DEVOLVER expresion ';'
;

instruccion_vacia : ';'
;

instruccion_lanzamiento_excepcion : LANZA EXCEPCION IDENTIFICADOR ';'
;

instruccion_captura_excepcion : EJECUTA bloque_instrucciones clausulas
;

clausulas : clausulas_excepcion 
          | clausulas_excepcion clausula_defecto
          | clausula_defecto
;

///////////////

v_clausula_excepcion_especifica : v_clausula_excepcion_especifica clausula_excepcion_especifica
                                |
                                ;

clausulas_excepcion : v_clausula_excepcion_especifica clausula_excepcion_general
;

//////////////

clausula_excepcion_especifica : EXCEPCION IDENTIFICADOR bloque_instrucciones 
;

clausula_excepcion_general : OTRA EXCEPCION bloque_instrucciones
;

clausula_defecto : DEFECTO bloque_instrucciones
;

/***************/
/* expresiones */
/***************/

expresion_constante : CTC_ENTERA | CTC_REAL | CTC_CADENA | CTC_CARACTER
;

expresion_indexada : expresion_basica
                   | expresion_indexada '.' expresion_basica
                   | expresion_indexada "^." expresion_basica
                   | expresion_indexada indice
                   | expresion_indexada "^." indice
;

expresion_basica : IDENTIFICADOR
                 | '(' expresion ')'
                 | '^' expresion_basica
                 | '\\' expresion_basica
;

indice : '[' expresion ']' | '{' expresion '}'
;

varias_expresion_por_coma_asterisco : varias_expresion
                                    |
                                    ;
varias_expresion : varias_expresion ',' expresion
                | expresion
                ;

expresion_funcional : IDENTIFICADOR '(' varias_expresion_por_coma_asterisco ')'
;


expresion : expresion_logica 
          | expresion_logica SI expresion SINO expresion
          ;

expresion_logica : OR
;

%%

int yyerror(char *s) {
  fflush(stdout);
  printf("*****************, %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./mini NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
