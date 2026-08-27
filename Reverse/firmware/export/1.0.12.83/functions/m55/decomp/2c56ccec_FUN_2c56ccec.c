/* FUN_2c56ccec @ 0x2c56ccec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56ccec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_2c60438c();
  }
  uVar1 = _LAB_2c56cd30;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar5 = *(int *)(param_1 + 0x7c);
  if (iVar6 != iVar5) {
    iVar4 = iVar6 + 0x10;
    iVar2 = iVar6;
    do {
      *(undefined4 *)(iVar4 + -0x10) = uVar1;
      iVar3 = iVar2 + 0x2c;
      bVar7 = iVar4 != *(int *)(iVar2 + 8);
      iVar4 = iVar4 + 0x2c;
      if (bVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar2 = iVar3;
    } while (iVar5 != iVar3);
    *(int *)(param_1 + 0x7c) = iVar6;
  }
  return;
}

