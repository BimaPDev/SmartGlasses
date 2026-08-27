/* FUN_2c5b7060 @ 0x2c5b7060 */

void FUN_2c5b7060(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_2c602400();
  FUN_2c621084(param_1);
  iVar3 = FUN_2c62107c();
  FUN_2c607df0();
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar2 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar2 + 0x52) << 0x1c)) {
      iVar4 = FUN_2c66c4ec(iVar3);
      iVar3 = FUN_2c62bebc(iVar3,iVar4 + 1);
      *(int *)(iVar2 + 0x24) = iVar3;
      if (iVar3 == 0) {
        return;
      }
      goto LAB_2c63877a;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x24) == iVar3) goto LAB_2c638786;
    if ((*(int *)(iVar2 + 0x24) != 0) && (bVar1 = *(byte *)(iVar2 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar2 + 0x24) = bVar1 & 8;
    }
  }
  iVar4 = FUN_2c66c4ec(iVar3);
  iVar4 = lv_mem_alloc(iVar4 + 1);
  *(int *)(iVar2 + 0x24) = iVar4;
  if (iVar4 != 0) {
    FUN_2c6435c4(iVar4,iVar3);
    *(byte *)(iVar2 + 0x52) = *(byte *)(iVar2 + 0x52) & 0xf7;
    if (*(int *)(iVar2 + 0x24) != 0) {
LAB_2c63877a:
      FUN_2c637b3c(iVar2);
      return;
    }
  }
  return;
}

