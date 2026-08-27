/* FUN_2c5da66c @ 0x2c5da66c */

void FUN_2c5da66c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14) - iVar4;
  if (0 < iVar3) {
    iVar5 = 0;
    while( true ) {
      uVar1 = FUN_2c5d8490(*(undefined4 *)(iVar4 + iVar5 * 4));
      iVar4 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      uVar2 = FUN_2c5d8bd8(*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar4));
      FUN_2c604550(uVar1,uVar2);
      if (iVar3 >> 2 <= iVar5) break;
      iVar4 = *(int *)(param_1 + 0x10);
    }
  }
  return;
}

