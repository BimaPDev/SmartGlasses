/* FUN_2c4e9cf0 @ 0x2c4e9cf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e9cf0(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_2c4e9504();
  iVar2 = FUN_2c4e9950();
  piVar1 = _LAB_2c4e9d3c;
  if (iVar2 == 0) {
    FUN_2c644080(*_LAB_2c4e9d38);
    return 0;
  }
  iVar2 = *_LAB_2c4e9d3c;
  *(undefined1 *)(iVar2 + 0x2a0) = param_1;
  uVar3 = func_0x2c4c2878(0,iVar2 + 0x14c,0x15c,piVar1,param_4);
  *(undefined4 *)(iVar2 + 0x148) = uVar3;
  uVar3 = FUN_2c4e9738();
  FUN_2c644080(*_LAB_2c4e9d38);
  return uVar3;
}

