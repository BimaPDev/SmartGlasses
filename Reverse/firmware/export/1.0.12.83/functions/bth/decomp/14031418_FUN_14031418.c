/* FUN_14031418 @ 0x14031418 */

void FUN_14031418(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  
  uVar6 = DAT_14031514;
  piVar5 = DAT_14031510;
  iVar3 = DAT_14031508;
  iVar2 = DAT_14031504;
  uVar7 = 0;
  iVar11 = *DAT_14031500;
  psVar9 = (short *)(iVar11 + -2);
  psVar12 = (short *)(*DAT_14031510 + -2);
  do {
    uVar8 = (uint)((ulonglong)uVar6 * (ulonglong)uVar7 >> 0x22);
    uVar1 = (uVar7 + uVar8 * -6) * 5;
    uVar10 = 0x1f << (uVar1 & 0xff);
    psVar9 = psVar9 + 1;
    uVar7 = uVar7 + 1;
    *(uint *)(iVar2 + uVar8 * 4) =
         (int)*psVar9 << (uVar1 & 0xff) | *(uint *)(iVar2 + uVar8 * 4) & ~uVar10;
    psVar12 = psVar12 + 1;
    *(uint *)(iVar3 + uVar8 * 4) =
         (int)*psVar12 << (uVar1 & 0xff) | *(uint *)(iVar3 + uVar8 * 4) & ~uVar10;
    iVar4 = DAT_1403150c;
  } while (uVar7 != 0x1e);
  *(uint *)(DAT_1403150c + 0xa8) =
       (int)*(short *)(iVar11 + 0x3c) | *(uint *)(DAT_1403150c + 0xa8) & 0xffffffe0;
  *(uint *)(iVar4 + 0xa8) =
       *(uint *)(iVar4 + 0xa8) & 0xfffffc1f | (int)*(short *)(*piVar5 + 0x3c) << 5;
  FUN_140db700(*DAT_14031500);
  FUN_140db700(*piVar5);
  return;
}

