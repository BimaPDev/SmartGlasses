/* FUN_2c5d17cc @ 0x2c5d17cc */

void FUN_2c5d17cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    lv_obj_add_flag_invalidate(*(undefined4 *)(iVar1 + 4),1,param_3,param_4,param_4);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_2c62be1c();
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      if (*(int *)(iVar1 + 0xc) != 0) {
        FUN_2c6043d8();
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
    }
    func_0x2c5d16dc(iVar1);
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) | 1;
      return;
    }
  }
  return;
}

