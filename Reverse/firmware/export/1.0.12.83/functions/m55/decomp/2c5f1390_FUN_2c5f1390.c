/* FUN_2c5f1390 @ 0x2c5f1390 */

void FUN_2c5f1390(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_2c637344();
  lv_obj_add_flag_invalidate(iVar2,1);
  FUN_2c606e38(iVar2,*(undefined4 *)(param_1 + 0x2c),0);
  FUN_2c6070bc(iVar2,0x2064);
  FUN_2c6388dc(iVar2,0);
  FUN_2c606e20(iVar2,0xff00ff00,0);
  FUN_2c607df0();
  if (param_2 == 0) {
    param_2 = *(int *)(iVar2 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar2 + 0x52) << 0x1c)) {
      iVar3 = FUN_2c66c4ec(param_2);
      iVar3 = FUN_2c62bebc(param_2,iVar3 + 1);
      *(int *)(iVar2 + 0x24) = iVar3;
      if (iVar3 == 0) {
        return;
      }
      goto LAB_2c63877a;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x24) == param_2) goto LAB_2c638786;
    if ((*(int *)(iVar2 + 0x24) != 0) && (bVar1 = *(byte *)(iVar2 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar2 + 0x24) = bVar1 & 8;
    }
  }
  iVar3 = FUN_2c66c4ec(param_2);
  iVar3 = lv_mem_alloc(iVar3 + 1);
  *(int *)(iVar2 + 0x24) = iVar3;
  if (iVar3 != 0) {
    FUN_2c6435c4(iVar3,param_2);
    *(byte *)(iVar2 + 0x52) = *(byte *)(iVar2 + 0x52) & 0xf7;
    if (*(int *)(iVar2 + 0x24) != 0) {
LAB_2c63877a:
      FUN_2c637b3c(iVar2);
      return;
    }
  }
  return;
}

