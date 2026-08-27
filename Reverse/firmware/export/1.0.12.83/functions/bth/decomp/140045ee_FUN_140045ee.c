/* FUN_140045ee @ 0x140045ee */

undefined4 FUN_140045ee(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_14005e70(0x13,param_1);
  if (iVar1 == 0) {
    FUN_14003c3c(*(undefined4 *)(DAT_14004614 + 0x14));
    return 0;
  }
  FUN_14003c38(param_1);
  return 0;
}

