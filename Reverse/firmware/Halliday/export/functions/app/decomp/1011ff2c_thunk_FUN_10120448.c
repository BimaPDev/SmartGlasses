/* thunk_FUN_10120448 @ 0x1011ff2c */

undefined1 thunk_FUN_10120448(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_10;
  undefined1 uStack_c;
  undefined1 auStack_b [3];
  
  auStack_b._1_2_ = (undefined2)((uint)param_2 >> 0x10);
  _uStack_c = CONCAT31(CONCAT21(auStack_b._1_2_,(char)param_2),0xf);
  uStack_10 = param_1;
  FUN_101200fc(param_1,1);
  FUN_10120148(param_1,&uStack_c,2,0);
  FUN_10120314(param_1,(int)&uStack_10 + 3,1,0);
  FUN_101200fc(param_1,0);
  return uStack_10._3_1_;
}

