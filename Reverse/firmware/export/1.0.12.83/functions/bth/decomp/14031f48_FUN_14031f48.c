/* FUN_14031f48 @ 0x14031f48 */

void FUN_14031f48(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  undefined4 uVar12;
  ushort *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ushort *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ushort *puVar22;
  ushort local_9a;
  uint local_98;
  undefined4 local_94;
  ushort local_90 [50];
  int local_2c;
  
  puVar22 = DAT_14032144;
  local_2c = *DAT_14032108;
  local_9a = 0;
  uVar17 = *(undefined4 *)(DAT_14032134 + 0xc00);
  uVar18 = *(undefined4 *)(DAT_1403210c + 0x28);
  uVar19 = *(undefined4 *)(DAT_1403210c + 0x2c);
  uVar20 = *(undefined4 *)(DAT_14032110 + 0x58);
  uVar21 = *(undefined4 *)(DAT_14032110 + 0x60);
  uVar14 = *(undefined4 *)(DAT_14032110 + 100);
  uVar15 = *(undefined4 *)(DAT_1403210c + 0x334);
  uVar12 = *(undefined4 *)(DAT_1403210c + 0x248);
  puVar11 = (ushort *)((int)&local_94 + 2);
  FUN_1402a6e8(4,0x29b,DAT_14032118,DAT_14032114,DAT_14032140);
  uVar6 = DAT_14032148;
  uVar4 = DAT_14032118;
  uVar3 = DAT_14032114;
  uVar7 = 0xb4;
  puVar13 = puVar11;
  puVar16 = puVar22;
  while( true ) {
    FUN_1402e1fc(uVar7 & 0xfff | 0x2000,&local_9a);
    uVar9 = (uint)local_9a;
    puVar13 = puVar13 + 1;
    *puVar13 = local_9a;
    uVar10 = (uint)*puVar16;
    FUN_1402a6e8(4,0x29f,uVar4,uVar3,uVar6,uVar10,uVar9);
    puVar5 = DAT_14032120;
    if (puVar13 == local_90 + 0x14) break;
    uVar7 = puVar16[1];
    puVar16 = puVar16 + 1;
  }
  FUN_1402a6e8(4,0x2a4,DAT_14032118,DAT_14032114,DAT_1403211c,uVar10,uVar9);
  uVar8 = 0xbe17;
  uVar7 = 0xb4;
  puVar13 = puVar5;
  while( true ) {
    FUN_1402e37c(uVar7 & 0xfff | 0x2000,uVar8);
    iVar1 = DAT_1403210c;
    if (puVar5 + 0x2a == puVar13 + 2) break;
    uVar7 = *puVar13;
    uVar8 = puVar13[1];
    puVar13 = puVar13 + 2;
  }
  *(undefined4 *)(DAT_1403210c + 0x28) = DAT_14032124;
  *(undefined4 *)(iVar1 + 0x248) = DAT_14032128;
  *(undefined4 *)(iVar1 + 0x334) = DAT_1403212c;
  *(undefined4 *)(iVar1 + 0x2c) = 3;
  *(undefined4 *)(DAT_14032134 + 0xc00) = DAT_14032130;
  local_98 = *(uint *)(iVar1 + 0x334) & 0xff7fffff | 0x800000;
  *(uint *)(iVar1 + 0x334) = local_98;
  local_94 = *(uint *)(iVar1 + 0x250) & 0x7fffffff;
  *(uint *)(iVar1 + 0x250) = local_94;
  FUN_140371a8();
  FUN_1402a6e8(4,699,DAT_14032118,DAT_14032114,DAT_14032138);
  uVar7 = 0xb4;
  while( true ) {
    puVar11 = puVar11 + 1;
    FUN_1402e37c(uVar7 & 0xfff | 0x2000,*puVar11);
    iVar1 = DAT_1403210c;
    if (puVar11 == local_90 + 0x14) break;
    puVar22 = puVar22 + 1;
    uVar7 = *puVar22;
  }
  *(undefined4 *)(DAT_14032134 + 0xc00) = uVar17;
  iVar2 = DAT_14032110;
  *(undefined4 *)(iVar1 + 0x28) = uVar18;
  *(undefined4 *)(iVar1 + 0x2c) = uVar19;
  *(undefined4 *)(iVar2 + 0x58) = uVar20;
  *(undefined4 *)(iVar2 + 0x60) = uVar21;
  *(undefined4 *)(iVar2 + 100) = uVar14;
  *(undefined4 *)(iVar1 + 0x334) = uVar15;
  *(undefined4 *)(iVar1 + 0x248) = uVar12;
  if (*DAT_14032108 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

