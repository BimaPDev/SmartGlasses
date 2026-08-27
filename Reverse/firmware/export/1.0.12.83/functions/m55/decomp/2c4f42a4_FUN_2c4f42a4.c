/* FUN_2c4f42a4 @ 0x2c4f42a4 */

int FUN_2c4f42a4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54 [3];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *puStack_38;
  undefined1 auStack_34 [22];
  undefined1 local_1e;
  int local_14;
  
  local_14 = *DAT_2c4f4384;
  iVar1 = FUN_2c4f1060();
  if (iVar1 == 0) {
    FUN_2c674268(*(undefined4 *)(param_1 + 100),0,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x2c));
    iVar1 = *(int *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x54) = 0;
    uVar2 = *(uint *)(iVar1 + 0x20);
    uVar3 = *(int *)(iVar1 + 0x2c) << 3;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    *(uint *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x20);
    iVar1 = FUN_2c4f26f4(param_1,auStack_34);
    if (iVar1 == 0) {
      local_6c = 0x20000;
      local_68 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c);
      local_64 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x20);
      local_60 = *(undefined4 *)(param_1 + 0x6c);
      local_5c = *(undefined4 *)(param_1 + 0x70);
      local_58 = *(undefined4 *)(param_1 + 0x74);
      local_40 = DAT_2c4f438c;
      puStack_38 = &local_6c;
      local_44 = DAT_2c4f4388;
      local_54[2] = DAT_2c4f4394;
      local_3c = DAT_2c4f4390;
      local_48 = iVar1;
      iVar1 = FUN_2c4f384c(param_1,auStack_34,local_54 + 2,3);
      if (iVar1 == 0) {
        local_1e = 0;
        iVar1 = FUN_2c4f384c(param_1,auStack_34,0,0);
        if (iVar1 == 0) {
          local_54[1] = 1;
          local_54[0] = iVar1;
          iVar1 = FUN_2c4f1b28(param_1,auStack_34,local_54,0xffffffff,0xffffffff,0,0,0);
        }
      }
    }
    FUN_2c4f101c(param_1);
  }
  if (*DAT_2c4f4384 == local_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

