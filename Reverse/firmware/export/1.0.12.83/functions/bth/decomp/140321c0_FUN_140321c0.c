/* FUN_140321c0 @ 0x140321c0 */

void FUN_140321c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  uint uVar9;
  ushort *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  ushort *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ushort *puVar17;
  int iVar18;
  undefined4 uVar19;
  ushort local_50;
  ushort local_4e;
  ushort local_4c [16];
  int local_2c;
  
  uVar5 = DAT_14032388;
  puVar17 = DAT_14032364;
  local_2c = *DAT_14032350;
  local_50 = 0;
  uVar19 = *(undefined4 *)(DAT_14032354 + 0x80);
  uVar15 = *(undefined4 *)(DAT_14032354 + 0x84);
  uVar16 = *(undefined4 *)(DAT_14032358 + 0x24);
  uVar11 = *(undefined4 *)(DAT_14032358 + 0x218);
  uVar12 = *(undefined4 *)(DAT_14032380 + 0xc00);
  puVar10 = &local_4e;
  FUN_1402a6e8(4,0x325,DAT_14032360,DAT_1403235c,DAT_14032384,DAT_14032388);
  uVar6 = DAT_1403238c;
  uVar4 = DAT_14032360;
  uVar3 = DAT_1403235c;
  uVar7 = 0xc6;
  puVar14 = puVar10;
  while( true ) {
    FUN_1402e1fc(uVar7 & 0xfff | 0x2000,&local_50);
    uVar9 = (uint)local_50;
    puVar14 = puVar14 + 1;
    *puVar14 = local_50;
    FUN_1402a6e8(4,0x329,uVar4,uVar3,uVar6,*puVar17,uVar9);
    if (puVar14 == local_4c + 0xf) break;
    uVar7 = puVar17[1];
    puVar17 = puVar17 + 1;
  }
  FUN_1402e1fc(0x2038,&local_4e);
  local_4e = local_4e & 0xff0f | 0xb0;
  FUN_1402e37c(0x2038);
  FUN_1402e37c(0x2062,0xb54);
  iVar18 = DAT_1403236c;
  FUN_1402a6e8(4,0x332,DAT_14032360,DAT_1403235c,DAT_14032368,uVar5,uVar9);
  iVar13 = iVar18 + 0x30;
  uVar8 = 0x6880;
  uVar7 = 0xc6;
  for (; FUN_1402e37c(uVar7 & 0xfff | 0x2000,uVar8), iVar2 = DAT_14032358, iVar1 = DAT_14032354,
      iVar13 != iVar18; iVar18 = iVar18 + 4) {
    uVar7 = *(ushort *)(iVar18 + 4);
    uVar8 = *(undefined2 *)(iVar18 + 6);
  }
  *(undefined4 *)(DAT_14032354 + 0x80) = DAT_14032370;
  puVar14 = DAT_14032378;
  *(undefined4 *)(iVar1 + 0x84) = DAT_14032374;
  *(undefined4 *)(iVar2 + 0x24) = DAT_1403237c;
  *(undefined4 *)(iVar2 + 0x218) = 0x583;
  FUN_140378e4();
  uVar7 = 0xc6;
  while( true ) {
    puVar10 = puVar10 + 1;
    FUN_1402e37c(uVar7 & 0xfff | 0x2000,*puVar10);
    iVar18 = DAT_14032354;
    if (puVar10 == local_4c + 0xf) break;
    uVar7 = *puVar14;
    puVar14 = puVar14 + 1;
  }
  *(undefined4 *)(DAT_14032354 + 0x80) = uVar19;
  *(undefined4 *)(iVar18 + 0x84) = uVar15;
  *(undefined4 *)(iVar18 + 0x10024) = uVar16;
  iVar13 = DAT_14032380;
  *(undefined4 *)(iVar18 + 0x10218) = uVar11;
  *(undefined4 *)(iVar13 + 0xc00) = uVar12;
  if (*DAT_14032350 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

