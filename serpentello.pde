

Serpente serpentello;
int scl = 20;

PVector food;

void setup() {
  size(600, 600);
  serpentello = new Serpente();
  frameRate(10);
  pickLocation();
}

void pickLocation() {
  int cols = width/scl;
  int rows = height/scl;
  food = new PVector(floor(random(cols)), floor(random(rows)));
  food.mult(scl);
}

void mousePressed() {
  serpentello.total++;
}

void draw() {
  background(51);

  if (serpentello.eat(food)) {
    pickLocation();
  }
  serpentello.death();
  serpentello.update();
  serpentello.show();


  fill(255, 0, 0);
  rect(food.x, food.y, scl, scl);
}





void keyPressed() {
  if (keyCode == UP) {
    serpentello.dir(0, -1);
  } else if (keyCode == DOWN) {
    serpentello.dir(0, 1);
  } else if (keyCode == RIGHT) {
    serpentello.dir(1, 0);
  } else if (keyCode == LEFT) {
    serpentello.dir(-1, 0);
  }
}
