/* FUN_101231f4 @ 0x101231f4 */

undefined4 FUN_101231f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_3;
  uVar1 = FUN_10084444(&local_c);
  if ((int)uVar1 < 0) {
    uVar3 = 0xb;
  }
  else {
    iVar2 = FUN_10086338(uVar1 & 0xff,100,param_2);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

