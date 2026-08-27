/* FUN_2c50ad88 @ 0x2c50ad88 */

void FUN_2c50ad88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x3c),1);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x60),1);
  }
  iVar1 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x25) * 0x24 + 0x3c);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_2c606abc(iVar1,1);
    uVar2 = *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x25) * 0x24 + 0x3c);
  }
  FUN_2c50ec60(param_1 + 0x2ec,uVar2);
  FUN_2c50ec60(param_1 + 0x388,
               *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x25) * 0x24 + 0x44));
  bVar3 = *(char *)(param_1 + 0x24) == '\0';
  *(bool *)(param_1 + 0x24) = bVar3;
  *(bool *)(param_1 + 0x25) = !bVar3;
  return;
}

