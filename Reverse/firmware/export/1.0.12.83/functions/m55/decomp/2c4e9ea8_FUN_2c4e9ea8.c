/* FUN_2c4e9ea8 @ 0x2c4e9ea8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c4e9ea8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_2c4e9504();
  iVar2 = FUN_2c4e9950();
  if (iVar2 == 0) {
    FUN_2c644080(*_LAB_2c4e9ef0);
    return 0;
  }
  uVar1 = *param_1;
  iVar2 = *_LAB_2c4e9ef4;
  *(undefined1 *)(iVar2 + 0x11c) = uVar1;
  uVar3 = func_0x2c4c2878(0,iVar2 + 0x11c,1,uVar1,param_4);
  *(undefined4 *)(iVar2 + 0x118) = uVar3;
  uVar3 = FUN_2c4e9738();
  FUN_2c644080(*_LAB_2c4e9ef0);
  return uVar3;
}

