/* FUN_2c619aa4 @ 0x2c619aa4 */

void FUN_2c619aa4(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_2c604458(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x24));
  }
  if (param_2 == 0) {
    FUN_2c62c9e8(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  else {
    piVar2 = (int *)FUN_2c62c938();
    *piVar2 = param_2;
    *(char *)(param_1 + 0x60) = *(char *)(param_1 + 0x60) + '\x01';
    FUN_2c604458(param_2,*(undefined4 *)(param_1 + 0x28));
  }
  *(int *)(param_1 + 0x2c) = param_2;
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      FUN_2c606b80(*(int *)(param_1 + 0x50),1);
    }
    else {
      FUN_2c606b6c();
    }
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    if ((*(byte *)(param_1 + 0x60) < 2) && (-1 < (int)((uint)*(byte *)(param_1 + 0x62) << 0x1c))) {
      uVar3 = *(undefined4 *)(param_1 + 0x34);
      goto LAB_2c619b48;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x34);
  }
  else {
    if ((int)((uint)*(byte *)(param_1 + 0x62) << 0x1f) < 0) {
      if ((int)((uint)*(byte *)(param_1 + 0x62) << 0x1c) < 0) {
        FUN_2c606abc(*(undefined4 *)(param_1 + 0x48),1);
        lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x48),2);
        goto LAB_2c619b08;
      }
      lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x48),1);
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x48),2);
      bVar1 = *(byte *)(param_1 + 0x60);
      uVar3 = *(undefined4 *)(param_1 + 0x34);
    }
    else {
LAB_2c619b08:
      bVar1 = *(byte *)(param_1 + 0x60);
      uVar3 = *(undefined4 *)(param_1 + 0x34);
    }
    if (bVar1 < 2) {
LAB_2c619b48:
      lv_obj_add_flag_invalidate(uVar3,1);
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x34),2);
      goto LAB_2c619b20;
    }
  }
  FUN_2c606abc(uVar3,1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x34),2);
LAB_2c619b20:
  FUN_2c602340(param_1,0x1c,0);
  FUN_2c619a30(param_1);
  return;
}

