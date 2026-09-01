/* FUN_100bab48 @ 0x100bab48 */

undefined4 FUN_100bab48(void)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  code *pcVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 local_24;
  undefined4 *puVar14;
  
  puVar3 = DAT_100baddc;
  bVar1 = (byte)*DAT_100baddc;
  uVar15 = bVar1 & 0x40;
  if ((bVar1 & 0x40) == 0) {
    FUN_1011ea48(DAT_100baddc,uVar15,0x1f0);
    local_24 = (uint)CONCAT12(0x26,(ushort)uVar15 | 0x6403);
    FUN_1007186c(&local_24);
    local_24 = CONCAT31(local_24._1_3_,(char)uVar15);
    iVar9 = thunk_FUN_1009efa0(DAT_100bade0,&local_24,1);
    if ((iVar9 == 1) && (uVar12 = (local_24 & 0xff) - 0x30 & 0xff, uVar12 < 4)) {
      uVar15 = uVar12;
    }
    uVar12 = (DAT_100bade8 - DAT_100bade4) * 0x20 & 0xff00;
    FUN_100a5b78(uVar12 | 0x4200031,DAT_100badf0,DAT_100badec,uVar15);
    puVar7 = DAT_100bae70;
    if (uVar15 != 0) {
      FUN_10079b64(1);
      uVar16 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar16 = getBasePriority();
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if ((bVar2) && (uVar10 = getBasePriority(), uVar10 == 0 || 0x20 < uVar10)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_10114a38();
      puVar4 = DAT_100badf8;
      puVar13 = DAT_100badf4;
      do {
        puVar14 = puVar13 + 1;
        *puVar13 = 2;
        pcVar5 = DAT_100badfc;
        puVar13 = puVar14;
      } while (puVar14 != puVar4);
      uVar10 = (*DAT_100badfc)(0);
      pcVar6 = DAT_100bae08;
      puVar3 = DAT_100bae04;
      if (*(int *)(DAT_100bae00 + 0x34) == DAT_100bae00 + -0xcdda3f4) {
        uVar10 = uVar10 & 0xffff8fff | 0x3000;
      }
      else {
        uVar10 = uVar10 | 3;
      }
      *DAT_100bae04 = uVar10;
      (*pcVar6)(0);
      FUN_1011598c(3000);
      uVar10 = (*pcVar5)(0);
      *puVar3 = uVar10;
      FUN_10119dc2(DAT_100bae0c,uVar10);
      FUN_101150e0();
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar16);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_1011aab8(0);
      FUN_100727ac(uVar15 - 1);
      FUN_100a5b78(DAT_100bae10 | uVar12,DAT_100badf0,DAT_100bae14,uVar15 - 1);
      FUN_1012d93a();
      do {
        FUN_1011dbc8(1000);
      } while( true );
    }
    uVar17 = *DAT_100bae70;
    uVar10 = uVar17 & 0x1f;
    FUN_100a5b78(DAT_100bae18 | uVar12,DAT_100bae20,DAT_100bae1c,uVar10,uVar17);
    iVar9 = thunk_FUN_1009efa0(DAT_100bae24,&local_24,4);
    puVar8 = DAT_100bae74;
    uVar15 = DAT_100bae60;
    if (iVar9 == 4) {
      *DAT_100bae74 = local_24 & 0x1f;
      uVar15 = local_24 & 0x1f | uVar17 & 0xffffffe0;
      *puVar7 = uVar15;
      FUN_1011598c(300);
      FUN_100a5b78(DAT_100bae28 | uVar12,DAT_100bae20,DAT_100bae2c,*puVar8,uVar15);
    }
    else {
      *DAT_100bae74 = uVar10;
      FUN_100a5b78(uVar15 | uVar12,DAT_100bae20,DAT_100bae64,uVar10,uVar17);
      local_24 = *puVar8;
      thunk_FUN_1007375c(DAT_100bae24,&local_24,4);
      FUN_1012d1ae(DAT_100bae24);
    }
    if (bVar1 >> 7 == 0) {
      FUN_101145f4(DAT_100bae34,DAT_100bae30,0x400,0xc,0);
      FUN_10113564(DAT_100bae34,DAT_100bae38);
    }
    thunk_FUN_101146e4(DAT_100bae40,DAT_100bae3c);
    uVar11 = DAT_100bae40;
    uVar16 = DAT_100bae34;
    *(byte *)((int)puVar3 + 0x18e) = *(byte *)((int)puVar3 + 0x18e) & 0xfc;
    FUN_1011dc20(uVar16,uVar11,1000);
    uVar11 = DAT_100bae48;
    uVar16 = DAT_100bae44;
    *(byte *)((int)puVar3 + 0x18e) = *(byte *)((int)puVar3 + 0x18e) | 4;
    FUN_10061c18(uVar11,uVar16,0);
    FUN_10061c80(DAT_100bae48,DAT_100bae4c);
    iVar9 = FUN_100ba830();
    FUN_10131a0a(iVar9 == 1);
    FUN_100bb29c();
    ((byte *)((int)puVar3 + 2))[0] = 0;
    ((byte *)((int)puVar3 + 2))[1] = 0;
    FUN_100d9204();
    FUN_100d9368();
    FUN_100d9350();
    FUN_100d935c();
    FUN_100d93a0();
    FUN_100d9394();
    FUN_100d9388();
    uVar16 = FUN_100bb188();
    uVar11 = FUN_100bb190();
    iVar9 = FUN_100d9224(DAT_100bae50,uVar16,uVar11);
    uVar11 = DAT_100bae6c;
    uVar16 = DAT_100bae5c;
    if (iVar9 < 0) {
      FUN_100a5b78(DAT_100bae54 | uVar12,DAT_100bae5c,DAT_100bae58);
      return 0xfffffff3;
    }
    *puVar3 = DAT_100bae68 | (uint)(bVar1 >> 7) << 7 | *puVar3 & 0xff3f;
    FUN_100a5b78(uVar12 | 0x5b00031,uVar16,uVar11);
  }
  return 0;
}

