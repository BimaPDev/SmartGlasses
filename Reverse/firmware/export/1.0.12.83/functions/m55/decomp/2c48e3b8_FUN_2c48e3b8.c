/* FUN_2c48e3b8 @ 0x2c48e3b8 */

/* WARNING: Removing unreachable block (ram,0x2c48e34c) */
/* WARNING: Removing unreachable block (ram,0x2c48e370) */
/* WARNING: Removing unreachable block (ram,0x2c48e39a) */
/* WARNING: Removing unreachable block (ram,0x2c48e3a2) */
/* WARNING: Removing unreachable block (ram,0x2c48e33c) */

int FUN_2c48e3b8(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *local_40;
  uint local_3c;
  uint local_38;
  undefined4 uStack_34;
  code *local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  char **ppcVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  iVar5 = FUN_2c66c4ec();
  puVar1 = DAT_2c48e3b0;
  uVar6 = iVar5 + 1;
  local_24 = *DAT_2c48e3ac;
  local_40 = (char *)0x0;
  local_3c = 0;
  local_38 = 0;
  uStack_34 = 0;
  local_30 = (code *)0x0;
  uStack_2c = 0;
  local_28 = 0;
  *DAT_2c48e3b0 = 0;
  puVar1[1] = 0;
  if ((param_1 == (char *)0x0) || (uVar6 == 0)) {
    if (param_1 == (char *)0x0) {
      iVar5 = 0;
      goto LAB_2c48e356;
    }
    uVar6 = 0;
  }
  else {
    local_30 = (code *)*DAT_2c48e3b4;
    uStack_2c = DAT_2c48e3b4[1];
    local_28 = DAT_2c48e3b4[2];
    local_40 = param_1;
    local_3c = uVar6;
    iVar5 = (*local_30)(0x28);
    if (iVar5 != 0) {
      FUN_2c674268(iVar5,(undefined1 *)(uint)(uVar6 == 0),0x28);
      ppcVar3 = (char **)0;
      if ((((local_40 != (char *)0x0) && (ppcVar3 = (char **)(uint)(uVar6 == 0), local_38 == 0)) &&
          (ppcVar3 = &local_40, 4 < local_3c)) &&
         (((ppcVar3 = &local_40, *local_40 == -0x11 && (ppcVar3 = &local_40, local_40[1] == -0x45))
          && (ppcVar3 = &local_40, local_40[2] == -0x41)))) {
        local_38 = 3;
        ppcVar3 = &local_40;
      }
      uVar2 = FUN_2c48d554(ppcVar3);
      iVar4 = FUN_2c48def0(iVar5,uVar2);
      if (iVar4 != 0) goto LAB_2c48e356;
      FUN_2c48dea0(iVar5);
    }
    uVar6 = local_38;
    if (local_3c <= local_38) {
      if (local_3c == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = local_3c - 1;
      }
    }
  }
  iVar5 = 0;
  *puVar1 = param_1;
  puVar1[1] = uVar6;
LAB_2c48e356:
  if (*DAT_2c48e3ac == local_24) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

