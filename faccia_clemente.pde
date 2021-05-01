boolean parla ;
String[] s;
String TRUE = "true";
void setup() {
  size(1000, 1000);
   
}

void draw() {
 
    

s = loadStrings("parla.txt");
  if(s[0].equals("true")){
  // print(s[0]);
   parla();
 }
 else
 zitto();
}

void zitto(){
  frameRate(6);
  parla = (frameCount % 3 == 0);
  background(0);
  stroke(0);
  strokeWeight(2);
  fill(#FFB9B9);
  ellipseMode(CENTER);
  ellipse(width/2, height/2, width, height);
  fill(255);
  ellipse(width/2-200, height/2-200, 200, 200);
  ellipse(width/2+200, height/2-200, 200, 200);
  fill(0);
  ellipse(width/2-200, height/2-200, 50, 50);
  ellipse(width/2+200, height/2-200, 50, 50);
  fill(0);
  strokeWeight(6);
  line(width/2-200,height/2+200,width/2+200,height/2+200);
}

void parla(){
  frameRate(6);
  parla = (frameCount % 3 == 0);
  background(0);
  stroke(0);
  strokeWeight(2);
  fill(#FFB9B9);
  ellipseMode(CENTER);
  ellipse(width/2, height/2, width, height);
  fill(255);
  ellipse(width/2-200, height/2-200, 200, 200);
  ellipse(width/2+200, height/2-200, 200, 200);
  fill(0);
  ellipse(width/2-200, height/2-200, 50, 50);
  ellipse(width/2+200, height/2-200, 50, 50);
  if(parla==true){
    fill(255,0,0,128);
    ellipse(width/2,height/2+200,300,100);
  }
  else{
    fill(255,0,0,128);
    ellipse(width/2,height/2+200,200,50);
  }
}
