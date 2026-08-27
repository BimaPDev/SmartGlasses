/* FUN_2c5b2c1c @ 0x2c5b2c1c */

void FUN_2c5b2c1c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = func_0x2c5afda4(param_1 + 0x44);
  if (iVar2 == 0) {
    iVar2 = FUN_2c5b3834(param_1 + 8);
  }
  else {
    FUN_2c5b0cb4(param_1 + 0x44);
    iVar2 = FUN_2c5b3834(param_1 + 8);
  }
  if (iVar2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5b341c,0x166,DAT_2c5b3418,DAT_2c5b3414);
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    return;
  }
  if ((*(int *)(iVar2 + 4) != 0) && (iVar5 = *(int *)(*(int *)(iVar2 + 4) + 0x10), iVar5 != 0)) {
    uVar3 = registry_lookup(*(undefined4 *)(iVar2 + 0x18));
    FUN_2c638730(iVar5,uVar3);
  }
  if ((*(int *)(iVar2 + 8) != 0) && (iVar5 = *(int *)(*(int *)(iVar2 + 8) + 0x18), iVar5 != 0)) {
    uVar3 = registry_lookup(0x4042);
    FUN_2c638730(iVar5,uVar3);
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    return;
  }
  iVar5 = registry_lookup(0x4043);
  FUN_2c607df0();
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar2 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar2 + 0x52) << 0x1c)) {
      iVar4 = FUN_2c66c4ec(iVar5);
      iVar5 = FUN_2c62bebc(iVar5,iVar4 + 1);
      *(int *)(iVar2 + 0x24) = iVar5;
      goto joined_r0x2c6387a2;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x24) == iVar5) goto LAB_2c638786;
    if ((*(int *)(iVar2 + 0x24) != 0) && (bVar1 = *(byte *)(iVar2 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar2 + 0x24) = bVar1 & 8;
    }
  }
  iVar4 = FUN_2c66c4ec(iVar5);
  iVar4 = lv_mem_alloc(iVar4 + 1);
  *(int *)(iVar2 + 0x24) = iVar4;
  if (iVar4 == 0) {
    return;
  }
  FUN_2c6435c4(iVar4,iVar5);
  iVar5 = *(int *)(iVar2 + 0x24);
  *(byte *)(iVar2 + 0x52) = *(byte *)(iVar2 + 0x52) & 0xf7;
joined_r0x2c6387a2:
  if (iVar5 == 0) {
    return;
  }
  FUN_2c637b3c(iVar2);
  return;
}

