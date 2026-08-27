/* FUN_2c619a30 @ 0x2c619a30 */

void FUN_2c619a30(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    return;
  }
  uVar2 = (*(byte *)(param_1 + 0x62) & 7) >> 1;
  if (uVar2 == 1) {
    FUN_2c604550(iVar1,0);
    FUN_2c627ea0(*(undefined4 *)(param_1 + 0x2c),0);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  else {
    if (uVar2 == 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (uVar2 != 0) goto LAB_2c619a4e;
    }
    FUN_2c604550(iVar1,uVar3);
    FUN_2c627ea0(*(undefined4 *)(param_1 + 0x2c),1);
    iVar1 = *(int *)(param_1 + 0x30);
  }
LAB_2c619a4e:
  FUN_2c608730(iVar1);
  FUN_2c608730(*(undefined4 *)(param_1 + 0x2c));
  FUN_2c608c7c(*(undefined4 *)(param_1 + 0x30));
  iVar1 = FUN_2c607440(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x30));
    return;
  }
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x30),1);
  return;
}

