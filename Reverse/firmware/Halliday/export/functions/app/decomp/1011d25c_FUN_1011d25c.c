/* FUN_1011d25c @ 0x1011d25c */

bool FUN_1011d25c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 *local_58 [2];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [36];
  
  local_58[1] = auStack_30;
  local_58[0] = auStack_50;
  iVar1 = FUN_1011d1fe(param_2,local_58[0],local_58[1],param_3);
  FUN_1011d05c(param_1,param_3 + 0x44,local_58[iVar1 == 0],0,
               (int)(short)(*(short *)(param_3 + 2) + 1),param_3);
  iVar1 = FUN_1011cf46(param_1,param_3);
  return iVar1 == 0;
}

