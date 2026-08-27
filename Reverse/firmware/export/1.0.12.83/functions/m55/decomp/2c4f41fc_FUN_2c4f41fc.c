/* FUN_2c4f41fc @ 0x2c4f41fc */

void FUN_2c4f41fc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 short param_6,undefined2 param_7)

{
  int iVar1;
  int local_44;
  int local_40;
  undefined1 local_2d;
  int local_2c;
  int local_28;
  int local_24;
  
  local_24 = *DAT_2c4f42a0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x20);
  iVar1 = FUN_2c4f26f4(param_1,&local_44);
  if (iVar1 == 0) {
    local_2d = *(undefined1 *)((int)param_2 + 0x17);
    local_2c = param_2[6];
    local_28 = param_2[7];
    iVar1 = FUN_2c4f3220(param_1,&local_44,param_3,param_4,param_5,param_6,param_7);
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_2 + 0x17) = 1;
      param_2[6] = local_44;
      param_2[7] = local_40;
      if ((((*param_2 == *(int *)(param_1 + 0x20)) ||
           (param_2[1] == *(int *)(param_1 + 0x24) || *param_2 == *(int *)(param_1 + 0x24))) ||
          (*(int *)(param_1 + 0x20) == param_2[1])) && (param_6 == 0)) {
        *(int *)(param_1 + 0x20) = local_44;
        *(int *)(param_1 + 0x24) = local_40;
      }
    }
  }
  if (*DAT_2c4f42a0 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

