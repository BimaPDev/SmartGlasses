/* FUN_2c4b66f4 @ 0x2c4b66f4 */

/* WARNING: Removing unreachable block (ram,0x2c4b658a) */

void FUN_2c4b66f4(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 unaff_lr;
  ushort uStack_e;
  int iStack_c;
  
  if (0xf < param_1) {
    return;
  }
  if (param_1 == 1) {
    iVar3 = FUN_2c674568();
    puVar2 = DAT_2c4b65fc;
    if (iVar3 != 0) {
      iStack_c = *DAT_2c4b65f8;
      iVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar3 = getBasePriority();
      }
      if (iVar3 != 0x40) {
        *DAT_2c4b65fc = 0x2c4b6576;
        puVar2[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      *DAT_2c4b6600 = 0;
      FUN_2c673e88(0x106c,&uStack_e);
      if (*DAT_2c4b6604 == '\0') {
        uVar4 = 0xfebf;
      }
      else {
        uVar4 = 0xfeff;
      }
      uStack_e = uVar4 & uStack_e;
      FUN_2c673d68(0x106c);
      if (iVar3 == 0) {
        *DAT_2c4b65fc = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar3);
      }
      if (*DAT_2c4b65f8 == iStack_c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    uVar5 = *DAT_2c4b6748 & 0xfe;
    *DAT_2c4b6748 = (byte)uVar5;
  }
  else {
    uVar5 = (uint)*DAT_2c4b6748 & ~param_1;
    *DAT_2c4b6748 = (byte)uVar5;
    if (param_1 == 2) {
      return;
    }
    if (param_1 == 4) {
      return;
    }
  }
  if ((uVar5 & 0xfffffff9) != 0) {
    return;
  }
  FUN_2c6741f8(0,1);
  FUN_2c4b6608(0);
  return;
}

