/* FUN_2c5dfc54 @ 0x2c5dfc54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5dfc54(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_d8;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  uint local_b8;
  int local_b4;
  int local_a0;
  code *local_9c;
  undefined4 local_94;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_7c;
  undefined4 local_74;
  int local_6c;
  undefined4 local_64;
  int local_5c;
  int local_14;
  
  local_14 = *_LAB_2c5dfda0;
  FUN_2c674268(&local_a0,0,0x8c,0);
  iVar2 = FUN_2c5df5f4(param_1,*(undefined1 *)(param_1 + 0x4c),&local_a0);
  if (iVar2 == 0) goto LAB_2c5dfc7e;
  FUN_2c62e7b4(&local_e4);
  local_cc = param_2;
  if (*(char *)(param_1 + 0x4c) == '\v') {
    local_c8 = *(undefined4 *)(param_1 + 0x50);
    local_d8 = _LAB_2c5dfda4;
    local_b8 = 0;
    local_e0 = local_a0;
    local_e4 = *(undefined4 *)(param_2 + 4);
    if (local_9c != (code *)0x0) goto LAB_2c5dfcc2;
LAB_2c5dfd70:
    uStack_c0 = 0;
  }
  else {
    local_b8 = (uint)*(ushort *)(param_1 + 0x4e);
    local_e4 = *(undefined4 *)(param_2 + 4);
    local_c8 = *(undefined4 *)(param_1 + 0x50);
    local_d8 = _LAB_2c5dfda4;
    local_e0 = local_a0;
    if (*(char *)(param_1 + 0x4c) == '\n') {
      FUN_2c606d00(local_e4,0x140,0);
      FUN_2c606d0c(*(undefined4 *)(param_2 + 4),0x140,0);
    }
    if (local_9c == (code *)0x0) goto LAB_2c5dfd70;
LAB_2c5dfcc2:
    uStack_c0 = (*local_9c)(*(undefined4 *)(param_2 + 4));
  }
  if (*(char *)(param_1 + 0x4a) == '\0') {
    if (*(char *)(param_2 + 0x24) == '\0') {
      cVar1 = *(char *)(param_1 + 0x4c);
      local_6c = local_5c;
      goto joined_r0x2c5dfd06;
    }
    cVar1 = *(char *)(param_1 + 0x4c);
    uStack_c0 = local_74;
joined_r0x2c5dfd26:
    if (cVar1 == '\n') {
      local_b4 = -local_88;
      local_64 = uStack_c0;
joined_r0x2c5dfd96:
      uStack_c0 = local_64;
      if (local_6c != 0) {
        local_e0 = local_6c;
      }
    }
  }
  else {
    if (*(char *)(param_2 + 0x24) != '\0') {
      cVar1 = *(char *)(param_1 + 0x4c);
      uStack_c0 = local_94;
      local_6c = local_8c;
      goto joined_r0x2c5dfd26;
    }
    cVar1 = *(char *)(param_1 + 0x4c);
    local_64 = local_84;
    local_6c = local_7c;
joined_r0x2c5dfd06:
    if (cVar1 == '\n') goto joined_r0x2c5dfd96;
  }
  local_c4 = uStack_c0;
  FUN_2c62e8ec(&local_e4);
  *(undefined1 *)(param_2 + 0x25) = 1;
LAB_2c5dfc7e:
  if (*_LAB_2c5dfda0 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

