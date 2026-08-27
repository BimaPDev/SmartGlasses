/* FUN_2c528ff8 @ 0x2c528ff8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c528ff8(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar4;
  int iVar5;
  undefined4 uVar3;
  
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c529040,0x13f,_LAB_2c52903c,_LAB_2c529038);
  }
  uVar3 = _LAB_2c529034;
  if (param_2 == 0) {
    uVar3 = _LAB_2c529030;
  }
  iVar2 = registry_lookup(uVar3);
  FUN_2c607df0();
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar5 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar5 + 0x52) << 0x1c)) {
      iVar4 = FUN_2c66c4ec(iVar2);
      iVar2 = FUN_2c62bebc(iVar2,iVar4 + 1);
      *(int *)(iVar5 + 0x24) = iVar2;
      goto joined_r0x2c6387a2;
    }
  }
  else {
    if (*(int *)(iVar5 + 0x24) == iVar2) goto LAB_2c638786;
    if ((*(int *)(iVar5 + 0x24) != 0) && (bVar1 = *(byte *)(iVar5 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar5 + 0x24) = bVar1 & 8;
    }
  }
  iVar4 = FUN_2c66c4ec(iVar2);
  iVar4 = lv_mem_alloc(iVar4 + 1);
  *(int *)(iVar5 + 0x24) = iVar4;
  if (iVar4 == 0) {
    return;
  }
  FUN_2c6435c4(iVar4,iVar2);
  iVar2 = *(int *)(iVar5 + 0x24);
  *(byte *)(iVar5 + 0x52) = *(byte *)(iVar5 + 0x52) & 0xf7;
joined_r0x2c6387a2:
  if (iVar2 == 0) {
    return;
  }
  FUN_2c637b3c(iVar5);
  return;
}

