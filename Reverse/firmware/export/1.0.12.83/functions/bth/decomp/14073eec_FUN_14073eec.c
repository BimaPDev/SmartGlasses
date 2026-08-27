/* FUN_14073eec @ 0x14073eec */

bool FUN_14073eec(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  short *psVar9;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14073fcc;
  uVar7 = (param_1 + 3U & 0xfffffffc) + 4;
  if (uVar7 < 0xc) {
    uVar7 = 0xc;
  }
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    *DAT_14073fcc = 0x14073f0e;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar4 = param_2 + 3;
  while( true ) {
    psVar6 = *(short **)(DAT_14073fd0 + ((param_2 & 3) + 6) * 4);
    if (psVar6 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14073fd8,0x101,DAT_14073fd4);
    }
    psVar8 = (short *)0x0;
    do {
      while( true ) {
        if (*psVar6 != -0x5aa6) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_14073fd8,0x107,DAT_14073fd4);
        }
        uVar5 = (uint)(ushort)psVar6[1];
        psVar9 = psVar8;
        if ((uVar5 < uVar7) || ((uVar5 < uVar7 + 0xc && (*(int *)(psVar6 + 4) == 0)))) break;
        psVar9 = psVar6;
        if ((psVar8 != (short *)0x0) && (psVar9 = psVar8, uVar5 < (ushort)psVar8[1])) {
          psVar9 = psVar6;
        }
        psVar6 = *(short **)(psVar6 + 2);
        psVar8 = psVar9;
        if (psVar6 == (short *)0x0) goto LAB_14073f7e;
      }
      psVar6 = *(short **)(psVar6 + 2);
    } while (psVar6 != (short *)0x0);
    if ((psVar8 != (short *)0x0) || (uVar4 == param_2)) break;
    param_2 = param_2 + 1;
  }
LAB_14073f7e:
  if (iVar3 == 0) {
    *DAT_14073fcc = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  return psVar9 != (short *)0x0;
}

