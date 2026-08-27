/* FUN_14073fdc @ 0x14073fdc */

void FUN_14073fdc(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  short *psVar9;
  short *psVar10;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14074148;
  uVar8 = (param_1 + 3U & 0xfffffffc) + 4;
  if (uVar8 < 0xc) {
    uVar8 = 0xc;
  }
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    *DAT_14074148 = 0x14074002;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar5 = param_2;
  while( true ) {
    psVar7 = *(short **)(DAT_14074164 + ((uVar5 & 3) + 6) * 4);
    if (psVar7 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14074154,0x157,DAT_1407414c);
    }
    psVar9 = (short *)0x0;
    do {
      while( true ) {
        if (*psVar7 != -0x5aa6) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_14074154,0x15c,DAT_1407414c);
        }
        uVar4 = (uint)(ushort)psVar7[1];
        if ((uVar4 < uVar8) || ((uVar4 < uVar8 + 0xc && (*(int *)(psVar7 + 4) == 0)))) break;
        psVar10 = psVar7;
        if ((psVar9 != (short *)0x0) && (psVar10 = psVar9, uVar4 < (ushort)psVar9[1])) {
          psVar10 = psVar7;
        }
        psVar7 = *(short **)(psVar7 + 2);
        psVar9 = psVar10;
        if (psVar7 == (short *)0x0) goto LAB_1407407c;
      }
      psVar7 = *(short **)(psVar7 + 2);
    } while (psVar7 != (short *)0x0);
    psVar10 = psVar9;
    if (psVar9 != (short *)0x0) break;
    if (param_2 + 3 == uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14074150,0x19d,DAT_1407414c,param_1,param_2);
    }
    uVar5 = uVar5 + 1;
  }
LAB_1407407c:
  uVar5 = (uint)(ushort)psVar10[1];
  if (uVar5 < uVar8 + 0xc) {
    uVar8 = uVar5;
  }
  if (uVar5 == uVar8) {
    if (*(int *)(psVar10 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14074154,0x1ac,DAT_1407414c);
    }
    iVar6 = *(int *)(psVar10 + 2);
    *(int *)(*(int *)(psVar10 + 4) + 4) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(psVar10 + 4);
    }
  }
  else {
    uVar5 = uVar5 - (uVar8 & 0xffff);
    psVar10[1] = (short)uVar5;
    psVar10 = (short *)((int)psVar10 + (uVar5 & 0xffff));
  }
  psVar10[1] = (short)uVar8;
  *psVar10 = -0x7cc8;
  if (iVar3 == 0) {
    *DAT_14074148 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  if (psVar10 + 2 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1407415c,DAT_14074158,0x1fe,iVar3);
  }
  if (((uint)psVar10 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14074160,DAT_14074158,psVar10 + 2);
  }
  return;
}

