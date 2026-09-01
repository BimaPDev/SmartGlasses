/* FUN_100997e0 @ 0x100997e0 */

void FUN_100997e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((int)((uint)*(byte *)(param_1 + 0x70) << 0x1d) < 0) {
    FUN_1012bec6(*(undefined4 *)(param_1 + 0x2c));
    iVar1 = (*(code *)*DAT_10099858)();
    if (iVar1 != 0) {
      uVar2 = FUN_100997b0(param_1);
      iVar3 = FUN_1011ea10();
      iVar4 = FUN_100942d8(iVar3 * iVar1 + 1);
      iVar6 = iVar4;
      for (iVar5 = 0; iVar1 != iVar5; iVar5 = iVar5 + 1) {
        thunk_FUN_1011ea40(iVar6,uVar2,iVar3);
        iVar6 = iVar6 + iVar3;
      }
      *(undefined1 *)(iVar4 + iVar3 * iVar1) = 0;
      FUN_10097998(*(undefined4 *)(param_1 + 0x2c),iVar4);
      FUN_10094444(iVar4);
      FUN_10099478(param_1);
      return;
    }
  }
  return;
}

