/* FUN_2c5f67cc @ 0x2c5f67cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5f67cc(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5f6858,0x28,_LAB_2c5f6854,_LAB_2c5f6850);
  }
  FUN_2c62be74();
  FUN_2c62be4c(*(undefined4 *)(param_1 + 0x20));
  FUN_2c62be5c(*(undefined4 *)(param_1 + 0x20));
  uVar2 = FUN_2c63736c(*(undefined4 *)(param_1 + 8));
  iVar3 = FUN_2c66c4ec();
  iVar4 = FUN_2c62c45c(iVar3 + 1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5f6858,0x71,_LAB_2c5f6860,_LAB_2c5f685c);
  }
  FUN_2c674668(iVar4,uVar2,iVar3);
  iVar3 = _LAB_2c5f684c;
  *(int *)(*(int *)(param_1 + 8) + 0x10) = iVar4;
  iVar4 = *(int *)(param_1 + 8);
  FUN_2c607df0();
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar4 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar4 + 0x52) << 0x1c)) {
      iVar5 = FUN_2c66c4ec(iVar3);
      iVar3 = FUN_2c62bebc(iVar3,iVar5 + 1);
      *(int *)(iVar4 + 0x24) = iVar3;
      if (iVar3 == 0) {
        return;
      }
      goto LAB_2c63877a;
    }
  }
  else {
    if (*(int *)(iVar4 + 0x24) == iVar3) goto LAB_2c638786;
    if ((*(int *)(iVar4 + 0x24) != 0) && (bVar1 = *(byte *)(iVar4 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar4 + 0x24) = bVar1 & 8;
    }
  }
  iVar5 = FUN_2c66c4ec(iVar3);
  iVar5 = lv_mem_alloc(iVar5 + 1);
  *(int *)(iVar4 + 0x24) = iVar5;
  if (iVar5 != 0) {
    FUN_2c6435c4(iVar5,iVar3);
    *(byte *)(iVar4 + 0x52) = *(byte *)(iVar4 + 0x52) & 0xf7;
    if (*(int *)(iVar4 + 0x24) != 0) {
LAB_2c63877a:
      FUN_2c637b3c(iVar4);
      return;
    }
  }
  return;
}

