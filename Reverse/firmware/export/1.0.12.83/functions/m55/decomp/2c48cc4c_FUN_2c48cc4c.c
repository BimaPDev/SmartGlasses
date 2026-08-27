/* FUN_2c48cc4c @ 0x2c48cc4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48cc4c(byte param_1,undefined4 param_2,ushort param_3)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 unaff_lr;
  
  iVar9 = _LAB_2c48cde4;
  puVar5 = _LAB_2c48cdd8;
  puVar2 = _LAB_2c48cdb4;
  uVar12 = (uint)param_1;
  if (uVar12 - 0x47 < 0x50) {
    if (0x3fc < param_3) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x17e,_LAB_2c48cdc8,_LAB_2c48cdc0,_LAB_2c48cde0,uVar12,param_3,_LAB_2c48cddc);
    }
    iVar14 = 0x10;
    while( true ) {
      iVar6 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar6 = getBasePriority();
      }
      if (iVar6 != 0x40) {
        *puVar5 = 0x2c48cc92;
        puVar5[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      uVar8 = *puVar2;
      iVar7 = iVar9 + uVar8 * 0x400;
      uVar10 = uVar8 + 1;
      iVar13 = uVar8 * 0x400;
      uVar11 = uVar10 & 0xf;
      if (*(char *)(iVar7 + 1) == '\0') break;
      if (-1 < (int)-uVar10) {
        uVar11 = -(-uVar10 & 0xf);
      }
      *puVar2 = uVar11;
      if (iVar6 == 0) {
        *puVar5 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar6);
      }
      iVar14 = iVar14 + -1;
      if (iVar14 == 0) {
        *_LAB_2c48cdb8 = *_LAB_2c48cdb8 + 1;
LAB_2c48ccdc:
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x19e,_LAB_2c48cdc8,_LAB_2c48cdc0,_LAB_2c48cdbc,uVar12);
      }
    }
    *(undefined1 *)(iVar7 + 1) = 1;
    uVar11 = uVar10 & 0xf;
    if (-1 < (int)-uVar10) {
      uVar11 = -(-uVar10 & 0xf);
    }
    *puVar2 = uVar11;
    if (iVar6 == 0) {
      *_LAB_2c48cdd8 = 0xffffffff;
    }
    piVar3 = _LAB_2c48cdb8;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar6);
    }
    *_LAB_2c48cdb8 = *_LAB_2c48cdb8 + 1;
    piVar4 = _LAB_2c48cdc4;
    if ((int)uVar8 < 0) goto LAB_2c48ccdc;
    iVar14 = *_LAB_2c48cdc4;
    *(byte *)(iVar9 + iVar13) = param_1;
    *(ushort *)(iVar13 + iVar9 + 0x3fe) = param_3;
    *piVar4 = iVar14 + 1;
    FUN_2c674668(iVar13 + 2 + iVar9,param_2);
    FUN_2c644100(*_LAB_2c48cdd4,1);
    iVar9 = *piVar4;
    if (iVar9 != *piVar3) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1a4,_LAB_2c48cdc8,_LAB_2c48cdc0,_LAB_2c48cdcc,*piVar3,iVar9);
    }
  }
  return;
}

