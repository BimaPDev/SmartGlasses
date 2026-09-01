/* thunk_FUN_101204b6 @ 0x101208d4 */

undefined4 thunk_FUN_101204b6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  _uStack_18 = CONCAT22((short)((uint)param_1 >> 0x10),0x9f);
  uStack_14 = 0;
  uStack_10 = param_3;
  FUN_1007e054();
  FUN_101200fc(param_1,1);
  FUN_10120148(param_1,&uStack_18,2,0);
  FUN_10120314(param_1,&uStack_14,4,0);
  FUN_101200fc(param_1,0);
  return uStack_14;
}

