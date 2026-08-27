/* FUN_2c64ed20 @ 0x2c64ed20 */

undefined4
FUN_2c64ed20(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  local_18 = param_1;
  uStack_14 = param_2;
  iStack_10 = param_3;
  FUN_2c64ec84(&local_18,param_5);
  uVar1 = 0;
  while ((param_3 != 0 && (param_3 = param_3 + -1, uVar1 <= param_4))) {
    uVar1 = FUN_2c64e740(&local_18,param_4);
  }
  return local_18;
}

