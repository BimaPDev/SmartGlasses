/* FUN_2c4b4d78 @ 0x2c4b4d78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4b4d78(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _LAB_2c4b4e0c;
  FUN_2c648600(_LAB_2c4b4e10,param_1,param_2,param_3,param_4);
  FUN_2c498c40();
  uVar1 = _LAB_2c4b4e18;
  if (*(int *)(iVar2 + 0x4b018) == iVar2) {
    if (param_1 < 0) {
      param_1 = param_1 + 1;
    }
    iVar2 = param_2 * 0x140 + (param_1 >> 1) + _LAB_2c4b4e14;
  }
  else {
    if (param_1 < 0) {
      param_1 = param_1 + 1;
    }
    iVar2 = iVar2 + param_2 * 0x140 + (param_1 >> 1);
  }
  if (param_4 != 0) {
    iVar3 = 0;
    if (param_3 < 0) {
      param_3 = param_3 + 1;
    }
    do {
      iVar3 = iVar3 + 1;
      FUN_2c6743a8(uVar1,1,param_3 >> 1,iVar2);
      iVar2 = iVar2 + 0x140;
      FUN_2c6444fc(0xf);
    } while (iVar3 != param_4);
  }
  FUN_2c644080(*(undefined4 *)(_LAB_2c498c68 + 0x38));
  return 0;
}

