/* FUN_2c514d20 @ 0x2c514d20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c514d20(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_2c514ca4();
  iVar4 = *(int *)(param_1 + 4);
  func_0x2c516a88(iVar4 + 0x18);
  iVar2 = _LAB_2c514d40;
  *(int *)(iVar4 + 0x34) = _LAB_2c514d40;
  if (iVar2 == 0) {
    iVar4 = *(int *)(iVar4 + 0x38);
    iVar2 = _LAB_2c516348;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x38);
    iVar2 = registry_lookup(iVar2);
  }
  FUN_2c607df0();
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar4 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar4 + 0x52) << 0x1c)) {
      iVar3 = FUN_2c66c4ec(iVar2);
      iVar2 = FUN_2c62bebc(iVar2,iVar3 + 1);
      *(int *)(iVar4 + 0x24) = iVar2;
      if (iVar2 == 0) {
        return;
      }
      goto LAB_2c63877a;
    }
  }
  else {
    if (*(int *)(iVar4 + 0x24) == iVar2) goto LAB_2c638786;
    if ((*(int *)(iVar4 + 0x24) != 0) && (bVar1 = *(byte *)(iVar4 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar4 + 0x24) = bVar1 & 8;
    }
  }
  iVar3 = FUN_2c66c4ec(iVar2);
  iVar3 = lv_mem_alloc(iVar3 + 1);
  *(int *)(iVar4 + 0x24) = iVar3;
  if (iVar3 != 0) {
    FUN_2c6435c4(iVar3,iVar2);
    *(byte *)(iVar4 + 0x52) = *(byte *)(iVar4 + 0x52) & 0xf7;
    if (*(int *)(iVar4 + 0x24) != 0) {
LAB_2c63877a:
      FUN_2c637b3c(iVar4);
      return;
    }
  }
  return;
}

