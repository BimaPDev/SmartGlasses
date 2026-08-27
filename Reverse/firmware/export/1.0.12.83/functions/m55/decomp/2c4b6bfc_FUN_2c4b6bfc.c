/* FUN_2c4b6bfc @ 0x2c4b6bfc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b6bfc(void)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar3 = DAT_2c4b6c40;
  iVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *DAT_2c4b6c40 = 0x2c4b6c0a;
    puVar3[1] = unaff_lr;
  }
  puVar4 = DAT_2c4b6c44;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar1 = *DAT_2c4b6c44;
  *DAT_2c4b6c44 = uVar1 | 4;
  if (iVar5 == 0) {
    *DAT_2c4b6c40 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar5);
  }
  if (uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x2c674520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_LAB_2c674524)(*puVar4 != 0);
  return;
}

