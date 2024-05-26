/*************************************************************************
**                                                                      **
**                          Roboraster                                  **
**                     Control motors CNY70                             **
**                                                                      **
** Erik Lopez                                                           **
*************************************************************************/
//********** Includes ****************************************************
//********** Variables ***************************************************
const int motorDret = 5;
const int motorEsq = 6;
const int sensorDret = A3;
const int sensorEsq = A5;
int estatDret = 0;
int estatEsq = 0;

//********** Setup *******************************************************
void setup()
{
  Serial.begin(9600);

  pinMode(motorDret, OUTPUT);
  pinMode(motorEsq, OUTPUT);
  digitalWrite(motorDret, LOW);
  digitalWrite(motorEsq, LOW);
  pinMode(sensorDret, INPUT);
  pinMode(sensorEsq, INPUT);
}

//********** Loop ********************************************************
void loop()
{
  estatDret = digitalRead(sensorDret);
  estatEsq = digitalRead(sensorEsq);
  Serial.print(estatDret);
  Serial.print("      ");
  Serial.println(estatEsq);
  

  if (estatDret == 0)  // 0 representa blanc
  {
    digitalWrite(motorDret, HIGH);
  }
  else
  {
    digitalWrite(motorDret, LOW);
    if else 
    {
    digitalWrite(motorEsq, );
    }
  }

  if (estatEsq == 0)
  {
    digitalWrite(motorEsq, HIGH);
  }
  else
  {
    digitalWrite(motorEsq, LOW);
    if else
    {
    digitalWrite(motorDret,);
    }
  }
}

//********** Funcions ****************************************************
