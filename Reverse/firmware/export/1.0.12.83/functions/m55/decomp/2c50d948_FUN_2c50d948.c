/* FUN_2c50d948 @ 0x2c50d948 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50d948(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_DAT_2c50d9c8,0x1f,_DAT_2c50d9c4,_DAT_2c50d9cc);
  }
  iVar2 = FUN_2c63f82c();
  iVar3 = FUN_2c63736c(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 1) {
    iVar2 = registry_lookup(_LAB_2c50d9d0);
  }
  else {
    uVar4 = _LAB_2c50d9b8;
    if (iVar2 != 2) {
      uVar4 = _LAB_2c50d9bc;
    }
    iVar2 = registry_lookup(uVar4);
  }
  if ((iVar2 == 0) || (iVar2 == iVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_DAT_2c50d9c8,0x33,_DAT_2c50d9c4,_DAT_2c50d9c0);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  FUN_2c607df0();
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar3 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar3 + 0x52) << 0x1c)) {
      iVar5 = FUN_2c66c4ec(iVar2);
      iVar2 = FUN_2c62bebc(iVar2,iVar5 + 1);
      *(int *)(iVar3 + 0x24) = iVar2;
      goto joined_r0x2c6387a2;
    }
  }
  else {
    if (*(int *)(iVar3 + 0x24) == iVar2) goto LAB_2c638786;
    if ((*(int *)(iVar3 + 0x24) != 0) && (bVar1 = *(byte *)(iVar3 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar3 + 0x24) = bVar1 & 8;
    }
  }
  iVar5 = FUN_2c66c4ec(iVar2);
  iVar5 = lv_mem_alloc(iVar5 + 1);
  *(int *)(iVar3 + 0x24) = iVar5;
  if (iVar5 == 0) {
    return;
  }
  FUN_2c6435c4(iVar5,iVar2);
  iVar2 = *(int *)(iVar3 + 0x24);
  *(byte *)(iVar3 + 0x52) = *(byte *)(iVar3 + 0x52) & 0xf7;
joined_r0x2c6387a2:
  if (iVar2 == 0) {
    return;
  }
  FUN_2c637b3c(iVar3);
  return;
}

