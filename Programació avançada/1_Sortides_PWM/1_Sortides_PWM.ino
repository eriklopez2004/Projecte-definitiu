/*************************************************************************
**                                                                      **
**                          Roboraster                                  **
**      Programa variar intensitat leds/motors de forma automàtica      **
**                                                                      **
** Erik Lopez                                                           **
*************************************************************************/
//********** Includes ****************************************************
//********** Variables ***************************************************
int motorDret = 6;
int motorEsq = 5;
int veloDimmer = 500;
int intensitatLed = 0;
int incremenIntensitat = 50;

//********** Setup *******************************************************
void setup()
{
  pinMode(ledDret, OUTPUT);
  pinMode(ledEsq, OUTPUT);
  analogWrite(ledDret, intensitatLed);
  analogWrite(ledEsq, intensitatLed);
}

//********** Loop ********************************************************
void loop()
{
  analogWrite(ledDret, intensitatLed);
  analogWrite(ledEsq, intensitatLed);
  delay(veloDimmer);

  intensitatLed = intensitatLed + incremenIntensitat;
  if (intensitatLed >= 255)
  (
    intensitatLed = 0;
  )
}

//********** Funcions ****************************************************
