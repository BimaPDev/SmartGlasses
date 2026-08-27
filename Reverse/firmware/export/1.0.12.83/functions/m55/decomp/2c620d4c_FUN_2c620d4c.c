/* FUN_2c620d4c @ 0x2c620d4c */

void FUN_2c620d4c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 0xc);
  switch(*(undefined1 *)(iVar3 + 0x14)) {
  case 1:
    FUN_2c62a470();
    iVar2 = FUN_2c62a47c();
    uVar1 = 0;
    if (0 < iVar2 + -1) {
      uVar1 = FUN_2c62e500();
    }
    *(undefined2 *)(iVar3 + 0x34) = uVar1;
    FUN_2c62a470();
    iVar2 = FUN_2c62a4a0();
    uVar1 = 0;
    if (0 < iVar2 + -1) {
      uVar1 = FUN_2c62e500();
    }
    *(undefined2 *)(iVar3 + 0x36) = uVar1;
    break;
  case 2:
    iVar2 = FUN_2c62e500(0,0xb);
    *(uint *)(iVar3 + 0x38) = (uint)*(byte *)(DAT_2c620e0c + iVar2);
    break;
  case 3:
    iVar2 = *(int *)(iVar3 + 0xc);
    if (iVar2 < *(int *)(iVar3 + 0x10)) {
      iVar4 = FUN_2c62e500(0,*(int *)(iVar3 + 0x10) - iVar2);
      iVar2 = iVar2 + iVar4;
    }
    *(int *)(iVar3 + 0x3c) = iVar2;
    break;
  case 4:
    iVar2 = *(int *)(iVar3 + 0xc);
    if (iVar2 < *(int *)(iVar3 + 0x10)) {
      iVar4 = FUN_2c62e500(0,*(int *)(iVar3 + 0x10) - iVar2);
      iVar2 = iVar2 + iVar4;
    }
    *(short *)(iVar3 + 0x40) = (short)iVar2;
  }
  iVar2 = FUN_2c62e500(0,100);
  uVar5 = *(undefined4 *)(iVar3 + 0x48);
  iVar4 = *(int *)(iVar3 + 4);
  *(bool *)(iVar3 + 0x42) = 0x31 < iVar2;
  if (iVar4 < *(int *)(iVar3 + 8)) {
    iVar3 = FUN_2c62e500(0,*(int *)(iVar3 + 8) - iVar4);
    iVar4 = iVar4 + iVar3;
  }
  FUN_2c62be58(uVar5,iVar4);
  return;
}

