/* FUN_2c4dd724 @ 0x2c4dd724 */

void FUN_2c4dd724(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *local_20;
  int local_1c;
  int iStack_18;
  
  local_1c = *DAT_2c4dd7ec;
  local_20 = param_1;
  iStack_18 = param_3;
  iVar1 = FUN_2c4dd5fa(param_1,*(undefined4 *)(param_4 + 8),param_3,0);
  if (iVar1 != 0) {
    puVar2 = param_2 + param_3 + -4;
    local_20 = param_2;
    FUN_2c4dd620(param_1,&local_20,puVar2,param_4);
    FUN_2c4dd684(param_1,&local_20,puVar2,param_4);
    FUN_2c4dd644();
    FUN_2c4dd6f8(param_1,&local_20,puVar2,param_4);
    FUN_2c4dd6cc(param_1,&local_20,puVar2,param_4);
    FUN_2c4dd694(param_1,&local_20,puVar2,param_4);
    if (*(int *)(param_4 + 0x1c) != 0) {
      iVar1 = FUN_2c66de7c(local_20,(int)puVar2 - (int)local_20,*(int *)(param_4 + 0x1c),
                           **(undefined4 **)(param_4 + 0x28));
      local_20 = local_20 + iVar1;
      if (puVar2 < local_20) {
        local_20 = puVar2;
      }
    }
    if ((*(char *)(param_4 + 0x20) != '\0') || (puVar2 == local_20)) {
      *local_20 = 10;
      local_20 = local_20 + 1;
    }
    puVar2 = local_20 + 1;
    *local_20 = 0;
    local_20 = puVar2;
    FUN_2c4dd5ca(param_1,param_2,puVar2 + (-1 - (int)param_2),*(undefined4 *)(param_4 + 8));
  }
  if (*DAT_2c4dd7ec != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

