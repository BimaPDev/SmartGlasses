/* FUN_2c4b6698 @ 0x2c4b6698 */

/* WARNING: Removing unreachable block (ram,0x2c4b65c6) */
/* WARNING: Removing unreachable block (ram,0x2c4b65de) */
/* WARNING: Removing unreachable block (ram,0x2c4b65e2) */
/* WARNING: Removing unreachable block (ram,0x2c4b65e6) */

void FUN_2c4b6698(uint param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_lr;
  
  if (0xf < param_1) {
    return;
  }
  bVar3 = (byte)param_1;
  if (param_1 == 1) {
    iVar6 = FUN_2c674568();
    puVar4 = DAT_2c4b65fc;
    if (iVar6 != 0) {
      iVar6 = *DAT_2c4b65f8;
      iVar7 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar7 = getBasePriority();
      }
      if (iVar7 != 0x40) {
        *DAT_2c4b65fc = 0x2c4b6576;
        puVar4[1] = unaff_lr;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
      *DAT_2c4b6600 = 1;
      FUN_2c673e88(0x106c,&stack0xfffffff2);
      FUN_2c673d68(0x106c);
      if (iVar7 == 0) {
        *DAT_2c4b65fc = 0xffffffff;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar7);
      }
      if (*DAT_2c4b65f8 == iVar6) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
  else if ((param_1 == 2) || (param_1 == 4)) {
    *DAT_2c4b66f0 = bVar3 | *DAT_2c4b66f0;
    return;
  }
  pbVar5 = DAT_2c4b66f0;
  bVar1 = *DAT_2c4b66f0;
  if ((bVar1 & 0xf9) != 0) {
    *DAT_2c4b66f0 = bVar3 | bVar1;
    return;
  }
  FUN_2c4b6608(1);
  FUN_2c673a08(bVar1 & 0xf9,1);
  *pbVar5 = bVar3 | *pbVar5;
  return;
}

