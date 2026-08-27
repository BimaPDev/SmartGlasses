/* FUN_2c6585fe @ 0x2c6585fe */

int FUN_2c6585fe(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  int iVar5;
  bool bVar6;
  int aiStack_1c [4];
  
  iVar1 = thunk_FUN_2c66fcc8(*(undefined4 *)(param_1 + 0x20));
  iVar4 = *(int *)(param_1 + 0x20);
  iVar5 = *DAT_2c66dde4;
  aiStack_1c[3] = unaff_r4;
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x18) == 0)) {
    FUN_2c668868(iVar5);
  }
  if (iVar4 == DAT_2c66dde8) {
    iVar4 = *(int *)(iVar5 + 4);
  }
  else if (iVar4 == DAT_2c66ddec) {
    iVar4 = *(int *)(iVar5 + 8);
  }
  else if (iVar4 == DAT_2c66ddf0) {
    iVar4 = *(int *)(iVar5 + 0xc);
  }
  aiStack_1c[1] = aiStack_1c[3];
  iVar2 = iVar5;
  aiStack_1c[0] = iVar1;
  if ((-1 < *(int *)(iVar4 + 100) << 0x1f) && (-1 < (int)((uint)*(ushort *)(iVar4 + 0xc) << 0x16)))
  {
    FUN_2c6694a8(*(undefined4 *)(iVar4 + 0x58));
  }
  if (iVar1 != -1) {
    iVar2 = FUN_2c66df3c(iVar5,aiStack_1c,iVar1,iVar4 + 0x5c,iVar2);
    if (iVar2 == -1) {
      *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) | 0x40;
    }
    else {
      do {
        bVar6 = iVar2 == 0;
        iVar2 = iVar2 + -1;
        if (bVar6) goto LAB_2c66dd50;
        iVar3 = FUN_2c66dbec(iVar5,*(undefined1 *)((int)aiStack_1c + iVar2),iVar4);
      } while (iVar3 != -1);
    }
  }
  iVar1 = -1;
LAB_2c66dd50:
  if ((-1 < *(int *)(iVar4 + 100) << 0x1f) && (-1 < (int)((uint)*(ushort *)(iVar4 + 0xc) << 0x16)))
  {
    FUN_2c6694ac(*(undefined4 *)(iVar4 + 0x58));
  }
  return iVar1;
}

