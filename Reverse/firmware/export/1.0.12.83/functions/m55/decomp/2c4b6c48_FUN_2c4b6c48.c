/* FUN_2c4b6c48 @ 0x2c4b6c48 */

/* WARNING: Removing unreachable block (ram,0x2c4b6122) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b6c48(void)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  *DAT_2c4b6c7c = 0;
  FUN_2c4b63e8();
  FUN_2c6444fc(1);
  FUN_2c4b6170(0);
  FUN_2c674678(0);
  FUN_2c4b6058(1,0);
  puVar3 = _LAB_2c4b6168;
  iVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *_LAB_2c4b6168 = 0x2c4b6116;
    puVar3[1] = unaff_lr;
  }
  puVar4 = _LAB_2c4b616c;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar1 = *_LAB_2c4b616c;
  *_LAB_2c4b616c = uVar1 & 0xfffb;
  if (iVar5 == 0) {
    *_LAB_2c4b6168 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar5);
  }
  if ((uVar1 & 0xfffb) == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c674520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_LAB_2c674524)(*puVar4 != 0);
    return;
  }
  return;
}

