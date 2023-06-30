int par[]={2,4,6,8};
int impar[]={3,5,7,9};

void setup() {
 
  for(int x=2;x<=9;x++)
  {
    pinMode(x,OUTPUT);
  }  
}

void loop() {

for(int y=0;y<=3;y=y+1)
  {
    digitalWrite(par[y],1);
    delay(200);
  }

for(int z=0;z<=3;z=z+1)
  {
    digitalWrite(impar[z],1);
    delay(200); 
  } 

for (int w=0;w<=3;w=w+1)
  {
  digitalWrite (par[w],0);
  digitalWrite (impar[w],0);  
  }

delay(200);
}
