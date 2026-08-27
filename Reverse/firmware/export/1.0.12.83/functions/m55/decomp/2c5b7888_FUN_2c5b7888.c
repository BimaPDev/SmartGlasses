/* FUN_2c5b7888 @ 0x2c5b7888 */

void FUN_2c5b7888(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(char *)(param_1 + 0x14) = (char)param_2;
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (param_2 == 1) {
    uVar4 = 0x4041;
  }
  else if (param_2 == 2) {
    uVar4 = 0x4039;
  }
  else {
    uVar4 = 0x4040;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  iVar2 = registry_lookup();
  FUN_2c607df0();
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar5 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar5 + 0x52) << 0x1c)) {
      iVar3 = FUN_2c66c4ec(iVar2);
      iVar2 = FUN_2c62bebc(iVar2,iVar3 + 1);
      *(int *)(iVar5 + 0x24) = iVar2;
      if (iVar2 == 0) {
        return;
      }
      goto LAB_2c63877a;
    }
  }
  else {
    if (*(int *)(iVar5 + 0x24) == iVar2) goto LAB_2c638786;
    if ((*(int *)(iVar5 + 0x24) != 0) && (bVar1 = *(byte *)(iVar5 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar5 + 0x24) = bVar1 & 8;
    }
  }
  iVar3 = FUN_2c66c4ec(iVar2);
  iVar3 = lv_mem_alloc(iVar3 + 1);
  *(int *)(iVar5 + 0x24) = iVar3;
  if (iVar3 != 0) {
    FUN_2c6435c4(iVar3,iVar2);
    *(byte *)(iVar5 + 0x52) = *(byte *)(iVar5 + 0x52) & 0xf7;
    if (*(int *)(iVar5 + 0x24) != 0) {
LAB_2c63877a:
      FUN_2c637b3c(iVar5);
      return;
    }
  }
  return;
}

