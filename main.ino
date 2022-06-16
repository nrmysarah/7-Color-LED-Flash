int Led  =  5;
void setup  ( )
{
  pinMode (Led, OUTPUT)  ; 
}

void loop  ( )  
{
  digitalWrite   (Led, HIGH)  ;  
  delay (4000)  ; 
  digitalWrite   (Led, LOW)  ;  
  delay (1000)  ;  

}
