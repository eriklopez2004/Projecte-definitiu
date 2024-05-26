/*************************************************************************
**                                                                      **
**                          Roboraster                                  **
**                      Roboraster avaçat                               **
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
int perdut = 0;
int perdutperdut = 0;

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
  Serial.print(estatEsq);
  Serial.print("      ");
  Serial.println(estatDret);
  

  if (estatDret == 0 && estatEsq == 0)  // 0 representa blanc
  {
    digitalWrite(motorDret, HIGH);
    digitalWrite(motorEsq, HIGH);
    perdut = 0;
  }
  else if (estatEsq == 0 && estatDret == 1)  
  {
    digitalWrite(motorDret, LOW);
    digitalWrite(motorEsq, HIGH);
    perdut = 1;
  }
  else if (estatEsq == 1 && estatDret == 0)
  {
    digitalWrite(motorDret, HIGH);
    digitalWrite(motorEsq,LOW);
    perdut = 2;
  }
  else 
  {
    if (perdut == 1)
    {
    digitalWrite(motorDret, LOW);
    digitalWrite(motorEsq, HIGH);
    }

    else if (perdut == 2)
    {
    digitalWrite(motorDret, HIGH);
    digitalWrite(motorEsq,LOW);
    }
  }
}
