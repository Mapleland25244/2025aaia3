// week08_5_pacaman_part1_arc_mouth_open_close
// File-Preference 字型放大
void setup(){
  size(400, 500);
}
int x = 200, y = 250;// 座標
float m = 0, dm = 0.05; // 嘴巴大小 vs 改變量
void draw(){
  background(0);
  fill(255, 255, 0); // 黃色
  //ellipse(x, y, 30, 30); // 小精靈
  arc(x, y, 30, 30, m, PI*2-m);
  m += dm;
  if(m > 1 || m < 0) dm = -dm; // 太大或太小，就負號
}
