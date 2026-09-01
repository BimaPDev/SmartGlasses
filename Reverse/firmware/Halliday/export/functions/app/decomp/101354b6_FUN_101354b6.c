/* FUN_101354b6 @ 0x101354b6 */

undefined4 FUN_101354b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [88];
  undefined1 auStack_c0 [176];
  
  iVar1 = FUN_1011d5a4(auStack_118,param_1,auStack_c0);
  if (((iVar1 == 0) || (iVar1 = FUN_1011d5fa(auStack_118,param_2,param_3), iVar1 == 0)) ||
     (iVar1 = FUN_1011d6d2(param_4,auStack_118), iVar1 == 0)) {
    uVar2 = 0xfffffffb;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

