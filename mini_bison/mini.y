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

%left '*' '/' '%' '+' "<-" "->" '&' '@' '|' "&&" "||"
%nonassoc '-' '~' '!' "tamano" '<' '>' "=<" "=>" "==" "!="
%right "**"

%%

/************/
/* programa */
/************/
programa : inicio_programa bloque_programa { printf("programa -> inicio_programa bloque_programa\n"); }
;

varias_rutas : varias_rutas ',' RUTA { printf("varias_rutas -> varias_rutas ',' RUTA\n"); }
              | RUTA { printf("rutas -> RUTA\n"); }
              ;

varias_cabeceras : varias_cabeceras CABECERA varias_rutas ';' { printf("fich_cabecera -> CABECERA rutas\n"); } 
                 |
                 ;

inicio_programa : PROGRAMA IDENTIFICADOR ';' varias_cabeceras { printf("inic_prog -> PROGRAMA ID ';' librerias \n"); }
;

declaracion_varias_funciones : declaracion_varias_funciones declaracion_funcion { printf("declaracion_varias_funciones -> declaracion_varias_funciones declaracion_funcion\n"); }
                             |
                             ;

bloque_programa : declaraciones_tipos
                  declaraciones_constantes
                  declaraciones_variables
                  declaracion_varias_funciones
                  bloque_instrucciones { printf("bloque_programa -> declaraciones bloque_instrucciones\n"); }
                  ;
/*
declaraciones_tipos : regla | //nada ;
declaraciones_constantes : regla | //nada ;
declaraciones_variables : regla | //nada ;
*/

/************************/
/* declaracion de tipos */
/************************/

declaracion_tipo : IDENTIFICADOR ES especificacion_tipo ';' { printf("declaracion_tipo -> IDENTIFICADOR ES especificacion_tipo ';'\n"); }
            | error '\n'  {yyerrok;}
            ;

varias_declaracion_tipo : varias_declaracion_tipo declaracion_tipo { printf("varias_declaracion_tipo -> varias_declaracion_tipo declaracion_tipo \n"); }
                        | declaracion_tipo
                        ;

declaraciones_tipos : TIPOS varias_declaracion_tipo FIN | /*Cadena vacia*/
;


varias_referencias : varias_referencias REF 
                   | 
                   ;

especificacion_tipo : varias_referencias tipo_basico { printf("espec_tipo -> refs tipo_basico\n"); }
;

tipo_basico : IDENTIFICADOR { printf("tipo basico -> IDENTIFICADOR\n"); }
            | tipo_escalar { printf("tipo basico -> tipo escalar\n"); }
            | tipo_enumerado { printf("tipo basico -> tipo_enum\n"); }
            | tipo_estructurado { printf("tipo basico -> tipo estructurado\n"); }
            ;

tipo_escalar : ENTERO { printf("tipo_escalar -> ENTERO\n"); } 
             | REAL { printf("tipo_escalar -> REAL\n"); } 
             | CARACTER { printf("tipo_escalar -> CARACTER\n"); } 
             | CADENA { printf("tipo_escalar -> CADENA\n"); } 
             | FICHERO { printf("tipo_escalar -> FICHERO\n"); } 
             | EXCEPCION  { printf("tipo_escalar -> EXCEPCION\n"); }
             | error '\n'  {yyerrok;}
;

tipo_enumerado : ARRAY DE especificacion_tipo { printf("array -> ARRAY DE espec_tipo\n"); }
               | HASH DE especificacion_tipo { printf("array -> HASH DE espec_tipo\n"); }
               | CONJUNTO DE especificacion_tipo { printf("array -> CONJUNTO DE espec_tipo\n"); }
;

linea_campo : IDENTIFICADOR ES especificacion_tipo ';' { printf("declr_tipo -> ID ES espec_tipo\n"); }
            | error '\n'  {yyerrok;}
;

varias_linea_campo : varias_linea_campo linea_campo { printf("lista_declr_tipos -> declr_tipo\n"); }
                   | linea_campo
                   ;

tipo_estructurado : ESTRUCTURA PRINCIPIO varias_linea_campo FIN { printf("ESTRUCTURA PRINCIPIO varias_linea_campo FIN\n"); }
                  | UNION PRINCIPIO varias_linea_campo FIN { printf("UNION PRINCIPIO varias_linea_campo FIN\n"); }
;

/*****************************/
/* declaracion de constantes */
/*****************************/

declaracion_constante : IDENTIFICADOR ES tipo_basico '=' constante ';' { printf("IDENTIFICADOR ES tipo_basico '=' constante ';'\n"); }
            | error '\n'  {yyerrok;}
            ;

varias_declaracion_constante : varias_declaracion_constante declaracion_constante { printf("varias_declaracion_constante -> varias_declaracion_constante declaracion_constante\n"); }
                             | declaracion_constante
                             ;

declaraciones_constantes : CONSTANTES varias_declaracion_constante FIN | /*Cadena vacia*/
;


constante : CTC_ENTERA { printf("constante -> CTC_ENTERA\n"); }
          | CTC_REAL { printf("constante -> CTC_REAL\n"); }
          | CTC_CARACTER { printf("constante -> CTC_CARACTER\n"); }
          | CTC_CADENA { printf("constante -> CTC_CADENA\n"); }
          | constante_enumerada { printf("constante -> constante_enumerada\n"); }
          | constante_estructurada { printf("constante -> constante_estructurada\n"); }
;


varias_constante : avarias_costante
                ;
avarias_costante : avarias_costante ',' constante { printf("avarias_constante -> avarias_costante ',' constante \n"); }
                   | constante { printf("avarias_constante -> constante \n"); }
                   ;


varios_elemento_hash : avarios_hashs { printf("varios_elemento_hash -> avarios_hashs\n"); }
                     ; 
avarios_hashs : avarios_hashs ',' elemento_hash { printf("avarios_hashs -> avarios_hashs ',' elemento_hash\n"); } 
              | elemento_hash { printf("avarios_hashs -> elemento_hash\n"); } 
              ;

constante_enumerada : '(' varias_constante ')' { printf("constante_enumerada -> '(' varias_constante ')'\n"); }
                    | '(' varios_elemento_hash ')' { printf("constante_enumerada -> '(' varios_elemento_hash ')'\n"); }
                    | '(' ')' { printf("constante_enumerada -> '(' ')'\n"); }
;


elemento_hash : CTC_CADENA FLECHA_DCHA constante { printf("CTC_CADENA -> constante\n"); }
              ;


campo_constante: IDENTIFICADOR '=' constante
               | IDENTIFICADOR EQ constante
;

varios_campo_constante : varios_campo_constante ',' campo_constante { printf("varios_campo_constante ',' campo_constante \n"); }
                       | campo_constante { printf("varios_campo_constante -> campo_constante \n"); }
                       ;

constante_estructurada : '{' varios_campo_constante '}' { printf("constante_estructurada -> '{' varios_campo_constante '}' \n"); }
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
                      | error '\n' { yyerrok; } 
                      ;


varias_declaracion_variables : varias_declaracion_variables declaracion_variables { printf("varias_declaracion_variables -> varias_declaracion_variables declaracion_variables\n"); }
                             | declaracion_variables
                             ;

declaraciones_variables : VARIABLES varias_declaracion_variables FIN { printf("declaraciones_variables -> VARIABLES varias_declaracion_variables FIN\n"); } | /*Cadena vacia*/
;


/****************************/
/* declaracion de funciones */
/****************************/

declaracion_funcion : FUNCION IDENTIFICADOR FLECHA_DCHA tipo_salida
                      cuerpo_funcion { printf("declaracion_funcion ->  FUNCION IDENTIFICADOR FLECHA_DCHA tipo_salida cuerpo_funcion\n"); }
                    | FUNCION IDENTIFICADOR lista_parametros FLECHA_DCHA tipo_salida
                      cuerpo_funcion { printf("declaracion_funcion ->  FUNCION IDENTIFICADOR lista_parametros FLECHA_DCHA tipo_salida cuerpo_funcion\n"); }
                    ;


varios_parametros : varios_parametros parametros ';'
                  | 
                  ;

lista_parametros : '(' varios_parametros parametros ')'
;


varias_expresion_constante_por_coma_mas : varias_expresion_constante_por_coma_mas ',' expresion_constante
                                        | expresion_constante
                                        ;

parametros : varios_identificadores_por_coma_mas ':' especificacion_tipo
            | varios_identificadores_por_coma_mas ':' especificacion_tipo '=' varias_expresion_constante_por_coma_mas
            ;


tipo_salida : especificacion_tipo | NADA
;

varias_declaracion_funcion : varias_declaracion_funcion declaracion_funcion
                           |
                           ;

cuerpo_funcion : declaraciones_constantes
                 declaraciones_variables
                 varias_declaracion_funcion
                 bloque_instrucciones
               ;

/*
declaraciones_constantes : regla | //nada ;
declaraciones_variables : regla | //nada ;
*/

varias_instrucciones : varias_instrucciones instruccion { printf("varias_instrucciones ->  varias_instrucciones instruccion"); }
                     | instruccion { printf("varias_instrucciones -> instruccion"); }
                     ;

bloque_instrucciones : PRINCIPIO varias_instrucciones FIN { printf("bloque_instrucciones ->  PRINCIPIO instrucciones FIN"); }
;

/*****************/
/* instrucciones */
/*****************/

instruccion_expresion : expresion_funcional ';' { printf("expresion_funcional ';'\n"); } 
                      | asignacion ';' { printf("expresion_funcional ';'\n"); } 
                      | error '\n' {yyerrok;}

instruccion : instruccion_expresion { printf("instruccion -> instruccion_expresion\n"); }
            | instruccion_bifurcacion { printf("instruccion -> instruccion_bifurcacion\n"); }
            | instruccion_bucle { printf("instruccion -> instruccion_bucle\n"); }
            | instruccion_salto { printf("instruccion -> instruccion_salto\n"); }
            | instruccion_destino_salto { printf("instruccion -> instruccion_destino_salto\n"); }
            | instruccion_devolver { printf("instruccion -> instruccion_devolver\n"); }
            | instruccion_vacia { printf("instruccion -> instruccion_vacia\n"); }
            | instruccion_lanzamiento_excepcion { printf("instruccion -> instruccion_lanzamiento_excepcion\n"); }
            | instruccion_captura_excepcion { printf("instruccion -> instruccion_captura_excepcion\n"); }
;

asignacion : expresion_indexada operador_asignacion expresion { printf("asignacion -> expresion_indexada operador_asignacion expresion\n"); } 
;

operador_asignacion : '='   { printf("operador_asignacion -> '='\n"); } 
                    | "=+"  { printf("operador_asignacion -> '=+'\n"); } 
                    | "=-"  { printf("operador_asignacion -> '=-'\n"); } 
                    | "=*"  { printf("operador_asignacion -> '=*'\n"); } 
                    | "=/"  { printf("operador_asignacion -> '=/'\n"); } 
                    | "=%"  { printf("operador_asignacion ->  =%% \n"); } 
                    | "=**" { printf("operador_asignacion -> '=**'\n"); } 
                    | "=<-" { printf("operador_asignacion -> '=<-'\n"); } 
                    | "=->" { printf("operador_asignacion -> '=->'\n"); } 
                    | "=&"  { printf("operador_asignacion -> '=&'\n"); } 
                    | "=@"  { printf("operador_asignacion -> '=@'\n"); } 
                    | "=|"  { printf("operador_asignacion -> '=|'\n"); } 
                    | error '\n' {yyerrok;}
;

otros_casos : SI ENCAMBIO '(' expresion ')' accion { printf("otros_casos -> SI ENCAMBIO '(' expresion ')' accion\n"); } 
;

v_otros_casos : v_otros_casos otros_casos
              |
              ;

instruccion_bifurcacion : SI expresion accion v_otros_casos FIN
                        | SI expresion accion v_otros_casos SINO accion FIN
;


accion : instruccion | bloque_instrucciones
;

//separados por coma +
v_asignacion : v_asignacion ',' asignacion
              | asignacion
              ;

instruccion_bucle : MIENTRAS '(' expresion ')' accion {printf("instruccion_bucle ->  MIENTRAS '(' expresion ')' accion\n"); }
                  | MIENTRAS '(' ')' accion {printf("instruccion_bucle ->  MIENTRAS '(' ')' accion\n"); }
                  | HACER accion MIENTRAS '(' expresion ')' ';' {printf("instruccion_bucle ->  HACER accion MIENTRAS '(' expresion ')' ';'\n"); }
                  | PARA '(' v_asignacion ';' expresion ';' v_asignacion ')' accion {printf("PARA '(' v_asignacion ';' expresion ';' v_asignacion ')' accion\n"); }
                  | PARA CADA IDENTIFICADOR '(' expresion ')' accion {printf("instruccion_bucle ->  PARA CADA IDENTIFICADOR '(' expresion ')' accion\n"); }
                  ;


instruccion_salto : SALTAR IDENTIFICADOR ';' { printf("instruccion_salto -> SALTAR IDENTIFICADOR ';'\n"); }
                  | CONTINUAR ';'  { printf("instruccion_salto -> CONTINUAR ';'\n"); }
                  | ESCAPE ';'  { printf("instruccion_salto -> ESCAPE ';'\n"); }
;

instruccion_destino_salto : ETIQUETA IDENTIFICADOR ';' { printf("instruccion_destino_salto -> ETIQUETA IDENTIFICADOR ';'\n"); }
                          ;

instruccion_devolver : DEVOLVER ';'  { printf("instruccion_devolver -> DEVOLVER ';'\n"); }
                     | DEVOLVER expresion ';' { printf("instruccion_devolver -> DEVOLVER expresion ';'\n"); }
                     ;

instruccion_vacia : ';' { printf("instruccion_vacia -> ';'\n"); }
;

instruccion_lanzamiento_excepcion : LANZA EXCEPCION IDENTIFICADOR ';'
                                  ; 

instruccion_captura_excepcion : EJECUTA bloque_instrucciones clausulas { printf("instruccion_captura_excepcion -> EJECUTA bloque_instrucciones clausulas\n"); }
;

clausulas : clausulas_excepcion 
          | clausulas_excepcion clausula_defecto
          | clausula_defecto
;


v_clausula_excepcion_especifica : v_clausula_excepcion_especifica clausula_excepcion_especifica
                                |
                                ;

clausulas_excepcion : v_clausula_excepcion_especifica clausula_excepcion_general
;


clausula_excepcion_especifica : EXCEPCION IDENTIFICADOR bloque_instrucciones { printf("clausula_excepcion_especifica -> EXCEPCION IDENTIFICADOR bloque_instrucciones\n"); }
;

clausula_excepcion_general : OTRA EXCEPCION bloque_instrucciones { printf("clausula_excepcion_general -> OTRA EXCEPCION bloque_instrucciones\n"); }
;

clausula_defecto : DEFECTO bloque_instrucciones { printf("clausula_defecto -> DEFECTO bloque_instrucciones\n"); }
;

/***************/
/* expresiones */
/***************/

expresion_constante : CTC_ENTERA { printf("expresion_constante -> CTC_ENTERA\n"); }
                    | CTC_REAL { printf("expresion_constante -> CTC_REAL\n"); }
                    | CTC_CADENA { printf("expresion_constante -> CTC_CADENA\n"); }
                    | CTC_CARACTER { printf("expresion_constante -> CTC_CARACTER\n"); }
                    | error '\n' { yyerrok; }
;

expresion_indexada : expresion_basica { printf("expresion_indexada -> expresion_basica\n"); }
                   | expresion_indexada '.' expresion_basica { printf("expresion_indexada -> expresion_indexada '.' expresion_basica\n"); }
                   | expresion_indexada "^." expresion_basica { printf("expresion_indexada -> expresion_indexada '^.' expresion_basica\n"); }
                   | expresion_indexada indice { printf("expresion_indexada -> expresion_indexada indice\n"); }
                   | expresion_indexada "^." indice { printf("expresion_indexada -> expresion_indexada '^.' indice\n"); }
;

expresion_basica : IDENTIFICADOR { printf("expresion_basica -> IDENTIFICADOR\n"); }
                 | '(' expresion ')' { printf("expresion_basica -> '(' expresion ')'\n"); }
                 | '(' ')' { printf("expresion_basica -> '(' ')'\n"); }
                 | '^' expresion_basica { printf("expresion_basica -> '^' expresion_basica\n"); }
                 | '\\' expresion_basica { printf("expresion_basica -> '\\' expresion_basica\n"); }
;

indice : '[' expresion ']' | '{' expresion '}'
;

varias_expresion_por_coma_asterisco : varias_expresion { printf("varias_expresion_por_coma_asterisco -> varias_expresion\n"); }
                                    ;
varias_expresion : varias_expresion ',' expresion { printf("varias_expresion -> varias_expresion ',' expresion\n"); }
                | expresion { printf("varias_expresion -> expresion\n"); }
                ;

expresion_funcional : IDENTIFICADOR '(' varias_expresion_por_coma_asterisco ')' { printf("expresion_funcional -> IDENTIFICADOR '(' varias_expresion_por_coma_asterisco ')'\n"); }
                    | IDENTIFICADOR '(' ')' { printf("expresion_funcional -> IDENTIFICADOR '(' ')'\n"); }
;

expresion : expresion_logica 
          | expresion_logica SI expresion SINO expresion
          ;

expresion_logica : expresion OR expresion_or { printf("expresion lógica -> expresion_or\n"); }
                 | expresion_or
;

expresion_or : expresion_or AND expresion_and { printf("expresion_or -> expresion_and\n"); }
             | expresion_and
             ;

expresion_and : expresion_and EQ expresion_igual { printf("expresion_and -> expresion_igual\n"); }
              | expresion_igual
              ;

expresion_igual : '=' expresion_comparacion { printf("expresion_igual -> expresion_comparacion\n"); }
                | expresion_comparacion
                ;

expresion_comparacion : expresion_comparacion "==" expresion_orbin { printf("expresion_comparacion -> expresion_orbin\n"); }
                | expresion_comparacion "!=" expresion_orbin { printf("expresion_comparacion -> expresion_orbin\n"); }
                | expresion_orbin
                ;

expresion_orbin : expresion_orbin '|' expresion_xorbin { printf("expresion_orbin -> expresion_xorbin\n"); }   
                      | expresion_xorbin
                      ;

expresion_xorbin : expresion_xorbin '@' expresion_andbin { printf("expresion_xorbin -> expresion_andbin\n"); }              
                | expresion_andbin
                ;

expresion_andbin : expresion_andbin '&' expresion_desplazamiento { printf("expresion_andbin -> expresion_desplazamiento\n"); }
                 | expresion_desplazamiento
                 ;

expresion_desplazamiento: expresion_desplazamiento FLECHA_DCHA expresion_sumares { printf("expresion_desplazamiento -> expresion_sumares\n"); }
                        | expresion_desplazamiento FLECHA_IZDA  expresion_sumares { printf("expresion_desplazamiento -> expresion_sumares\n"); }
                        | expresion_sumares
                        ;

expresion_sumares : expresion_sumares '+' expresion_mult { printf("expresion_sumares -> expresion_mult\n"); }
                  | expresion_sumares '-' expresion_mult { printf("expresion_sumares -> expresion_mult\n"); }
                  |expresion_mult
                  ;

expresion_mult : expresion_mult '*' expresion_potencia { printf("expresion_mult -> expresion_potencia\n"); }
                  | expresion_potencia
                  ;

expresion_potencia : expresion_potencia "**" expresion_prefija { printf("expresion_potencia -> expresion_prefija\n"); }
               | expresion_prefija
               ;

expresion_prefija : expresion_prefija '~' operandos { printf("expresion_prefija -> operandos\n"); }
                   | expresion_prefija '-' operandos { printf("expresion_prefija -> operandos\n"); }
                   | expresion_prefija '!' operandos { printf("expresion_prefija -> operandos\n"); }
                   | expresion_prefija "tamano" operandos { printf("expresion_prefija -> operandos\n"); }
                   | operandos
                   ;

operandos :  operandos expresion_indexada { printf("operandos -> expresion_indexada\n"); }
                  | expresion_indexada
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
