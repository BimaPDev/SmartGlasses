/* FUN_2c638730 @ 0x2c638730 */

void FUN_2c638730(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  FUN_2c607df0();
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x52) << 0x1c)) {
      iVar2 = FUN_2c66c4ec(param_2);
      iVar2 = FUN_2c62bebc(param_2,iVar2 + 1);
      *(int *)(param_1 + 0x24) = iVar2;
      if (iVar2 == 0) {
        return;
      }
      goto LAB_2c63877a;
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) == param_2) goto LAB_2c638786;
    if ((*(int *)(param_1 + 0x24) != 0) && (bVar1 = *(byte *)(param_1 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(param_1 + 0x24) = bVar1 & 8;
    }
  }
  iVar2 = FUN_2c66c4ec(param_2);
  iVar2 = lv_mem_alloc(iVar2 + 1);
  *(int *)(param_1 + 0x24) = iVar2;
  if (iVar2 != 0) {
    FUN_2c6435c4(iVar2,param_2);
    *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xf7;
    if (*(int *)(param_1 + 0x24) != 0) {
LAB_2c63877a:
      FUN_2c637b3c(param_1);
      return;
    }
  }
  return;
}

