/* FUN_100e083c @ 0x100e083c */

undefined4 FUN_100e083c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = DAT_100e0870;
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_10119c46(&uStack_14,4,param_2,param_4,param_1);
  FUN_1011e9f0(param_1,uVar1);
  iVar2 = FUN_1011ea10(uVar1);
  *(undefined1 *)(param_1 + iVar2) = 0x5f;
  FUN_1011e9f0(param_1 + iVar2 + 1,&uStack_14);
  return 0;
}

