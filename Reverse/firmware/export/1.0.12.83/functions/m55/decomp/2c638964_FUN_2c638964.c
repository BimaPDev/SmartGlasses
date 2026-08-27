/* FUN_2c638964 @ 0x2c638964 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c638964(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x4c) = 0xff;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0xffff;
  *(undefined4 *)(param_2 + 0x48) = 0xffff;
  *(byte *)(param_2 + 0x52) = *(byte *)(param_2 + 0x52) & 0xa0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined2 *)(param_2 + 0x4e) = 0;
  *(undefined2 *)(param_2 + 0x50) = 0;
  FUN_2c606abc(param_2,2);
  FUN_2c6388dc(param_2,0);
  iVar3 = _LAB_2c6389bc;
  FUN_2c607df0();
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_2 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(param_2 + 0x52) << 0x1c)) {
      iVar2 = FUN_2c66c4ec(iVar3);
      iVar3 = FUN_2c62bebc(iVar3,iVar2 + 1);
      *(int *)(param_2 + 0x24) = iVar3;
      if (iVar3 == 0) {
        return;
      }
      goto LAB_2c63877a;
    }
  }
  else {
    if (*(int *)(param_2 + 0x24) == iVar3) goto LAB_2c638786;
    if ((*(int *)(param_2 + 0x24) != 0) && (bVar1 = *(byte *)(param_2 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(param_2 + 0x24) = bVar1 & 8;
    }
  }
  iVar2 = FUN_2c66c4ec(iVar3);
  iVar2 = lv_mem_alloc(iVar2 + 1);
  *(int *)(param_2 + 0x24) = iVar2;
  if (iVar2 != 0) {
    FUN_2c6435c4(iVar2,iVar3);
    *(byte *)(param_2 + 0x52) = *(byte *)(param_2 + 0x52) & 0xf7;
    if (*(int *)(param_2 + 0x24) != 0) {
LAB_2c63877a:
      FUN_2c637b3c(param_2);
      return;
    }
  }
  return;
}

