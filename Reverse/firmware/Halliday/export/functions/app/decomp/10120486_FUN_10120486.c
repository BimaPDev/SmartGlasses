/* FUN_10120486 @ 0x10120486 */

void FUN_10120486(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_c;
  undefined1 local_b [2];
  undefined1 uStack_9;
  
  _local_c = CONCAT31((uint3)(byte)param_2,0x1f);
  uVar1 = _local_c;
  uStack_9 = (undefined1)((uint)param_2 >> 0x18);
  _local_c = CONCAT12((char)param_3,(short)uVar1);
  FUN_101200fc(param_1,1,param_3,0x1f,param_1);
  FUN_10120148(param_1,&local_c,3,0);
  FUN_101200fc(param_1,0);
  return;
}

