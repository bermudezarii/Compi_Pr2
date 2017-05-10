

 

 

 

 

 

 

 

 

 

 

 

 

 
    
        
        
        
        
        
        
            
            
              
                
         main  ( ) {  char          
      oink [ 9 ] , * igpa ,       
    atinla =  getchar  ( ) , iocccwa     
    , apca = 'A' , owla = 'a' , umna = 26     
    ;  for  ( ; ( atinla + 1 ) && ( ! ( ( (     
    atinla - apca ) * ( apca + umna - atinla )     
    >= 0 ) + ( ( atinla - owla ) * ( owla + umna -     
  atinla ) >= 0 ) ) ) ;  putchar  ( atinla ) ,   
    atinla =  getchar  ( ) ) ;  for  ( ; atinla + 1 ;     
    ) {  for  ( igpa = oink , iocccwa = (     
    ( atinla -   apca ) * (   apca + umna -     
  atinla ) >= 0 )     ; ( ( ( (   
  atinla - apca       ) * ( apca +   
  umna - atinla   ) >= 0 )   + ( ( atinla -   
  owla ) * ( owla +   umna -   atinla ) >= 0 ) )   
  && "-Pig-"   "Lat-in"   "COb-fus"   
  "ca-tion!!" [   ( ( ( atinla -   apca ) * ( apca +   
  umna - atinla )   >= 0 ) ? atinla -   apca + owla :   
  atinla ) - owla   ] - '-' ) || ( ( igpa ==   oink ) && ! ( * (   
  igpa ++ ) = 'w' )   ) || !   ( * (   igpa   ++ ) = owla ) ; *   
  ( igpa ++ ) = ( (   (       atinla - apca   
  ) * ( apca +   umna   -     atinla ) >= 0 )   
  ? atinla -   apca   +   owla   : atinla ) ,   
  atinla =          getchar  ( ) )   
  ;  for  (   atinla = iocccwa ? ( (   ( atinla -   
  owla ) * ( owla +   umna - atinla ) >= 0   ) ? atinla -   
  owla + apca :   atinla ) :   atinla ; ( ( (   
  atinla - apca ) *   ( apca + umna -   atinla ) >= 0 ) + (   
  ( atinla - owla ) *   ( owla +   umna - atinla ) >=   
  0 ) ) ;  putchar  (     atinla ) , atinla   
  =  getchar  ( ) ) ;    for  ( * igpa = 0 ,   
  igpa = oink ; * igpa ;  putchar  (   
  * ( igpa ++ ) ) ) ;  for  ( ; ( atinla + 1 ) && ( ! ( ( (   
  atinla - apca ) * ( apca +   
  umna -     atinla ) >= 0   
  ) + ( (   atinla -   
  owla ) * ( owla + umna -   
  atinla ) >= 0 ) ) ) ;  putchar    
  ( atinla ) , atinla =   
   getchar  ( ) ) ; }   
  }   
  