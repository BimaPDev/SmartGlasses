/* FUN_10120448 @ 0x10120448 */

undefined1 FUN_10120448(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_10;
  undefined1 local_c;
  undefined1 local_b [3];
  
  local_b._1_2_ = (undefined2)((uint)param_2 >> 0x10);
  _local_c = CONCAT31(CONCAT21(local_b._1_2_,(char)param_2),0xf);
  uStack_10 = param_1;
  FUN_101200fc(param_1,1);
  FUN_10120148(param_1,&local_c,2,0);
  FUN_10120314(param_1,(int)&uStack_10 + 3,1,0);
  FUN_101200fc(param_1,0);
  return uStack_10._3_1_;
}

