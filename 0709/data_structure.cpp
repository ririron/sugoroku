class area_cell{
  int *point; //cellの座標
  int *up_c;　//上のcellの座標
  int *down_c; //下のcellの座標
  int *left_c; //左のcellの座標
  int *right_c; //右のcellの座標
  int player_flag; //どのプレイヤーの領地かのフラグ
}

class player{
  int *point; //プレイヤーの座標
  int move_num; //移動回数
  int own_area; //自分の保持している面積
}
