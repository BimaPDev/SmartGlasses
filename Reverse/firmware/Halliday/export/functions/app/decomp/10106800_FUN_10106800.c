/* FUN_10106800 @ 0x10106800 */

int FUN_10106800(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  uint uVar20;
  
  iVar13 = 0;
  iVar9 = *(int *)(*param_1 + 0x10);
  puVar11 = (undefined1 *)param_1[0x31];
  puVar14 = (undefined1 *)param_1[0x32];
  iVar15 = param_1[3];
  do {
    iVar13 = iVar13 + 1;
    iVar7 = FUN_100f8c80(iVar15,iVar13);
    if (iVar7 != 0) {
      return iVar7;
    }
    if (puVar14 < puVar11 + 4) {
      return 0x15;
    }
    iVar17 = *(int *)(iVar15 + 0x58);
    iVar7 = iVar13 * 0x20 + -0x20;
    iVar8 = iVar17 + iVar7;
    *(undefined4 *)(iVar8 + 8) = 0;
    *(undefined4 *)(iVar8 + 0xc) = 0;
    bVar4 = puVar11[1];
    uVar10 = (uint)CONCAT11(*puVar11,bVar4);
    *(ushort *)(iVar8 + 4) = CONCAT11(*puVar11,bVar4);
    uVar6 = puVar11[2];
    uVar5 = puVar11[3];
    *(uint *)(iVar17 + iVar7) = (uint)CONCAT11(uVar6,uVar5);
    if (iVar9 <= (int)(uint)CONCAT11(uVar6,uVar5)) {
      return 0x15;
    }
    if ((bVar4 & 1) == 0) {
      iVar18 = 4;
      iVar17 = 6;
      iVar7 = 10;
      iVar16 = 2;
    }
    else {
      iVar18 = 6;
      iVar17 = 8;
      iVar7 = 0xc;
      iVar16 = 4;
    }
    uVar12 = uVar10 & 8;
    if ((((bVar4 & 8) == 0) && (iVar18 = iVar17, (bVar4 & 0x40) == 0)) &&
       (iVar18 = iVar7, (bVar4 & 0x80) == 0)) {
      iVar18 = iVar16;
    }
    if (puVar14 < puVar11 + 4 + iVar18) {
      return 0x15;
    }
    if ((int)(uVar10 << 0x1e) < 0) {
      if ((bVar4 & 1) == 0) {
        puVar19 = puVar11 + 6;
        *(int *)(iVar8 + 8) = (int)(char)puVar11[4];
        *(int *)(iVar8 + 0xc) = (int)(char)puVar11[5];
      }
      else {
        puVar19 = puVar11 + 8;
        *(int *)(iVar8 + 8) = (int)CONCAT11(puVar11[4],puVar11[5]);
        *(int *)(iVar8 + 0xc) = (int)CONCAT11(puVar11[6],puVar11[7]);
      }
LAB_101068ce:
      puVar11 = puVar19;
      if ((bVar4 & 8) != 0) goto LAB_101068d2;
LAB_1010693a:
      uVar20 = uVar12;
      if ((int)(uVar10 << 0x19) < 0) {
        puVar19 = puVar11 + 2;
        puVar1 = puVar11 + 3;
        iVar17 = (int)CONCAT11(*puVar11,puVar11[1]) << 2;
        puVar11 = puVar11 + 4;
        iVar7 = (int)CONCAT11(*puVar19,*puVar1) << 2;
      }
      else if ((int)(uVar10 << 0x18) < 0) {
        puVar19 = puVar11 + 6;
        puVar1 = puVar11 + 4;
        puVar2 = puVar11 + 5;
        puVar3 = puVar11 + 7;
        iVar17 = (int)CONCAT11(*puVar11,puVar11[1]) << 2;
        uVar12 = (int)CONCAT11(puVar11[2],puVar11[3]) << 2;
        puVar11 = puVar11 + 8;
        iVar7 = (int)CONCAT11(*puVar19,*puVar3) << 2;
        uVar20 = (int)CONCAT11(*puVar1,*puVar2) << 2;
      }
      else {
        iVar17 = 0x10000;
        iVar7 = iVar17;
      }
    }
    else {
      if ((bVar4 & 1) == 0) {
        puVar19 = puVar11 + 6;
        *(uint *)(iVar8 + 8) = (uint)(byte)puVar11[4];
        *(uint *)(iVar8 + 0xc) = (uint)(byte)puVar11[5];
        goto LAB_101068ce;
      }
      puVar19 = puVar11 + 8;
      *(uint *)(iVar8 + 8) = (uint)CONCAT11(puVar11[4],puVar11[5]);
      *(uint *)(iVar8 + 0xc) = (uint)CONCAT11(puVar11[6],puVar11[7]);
      puVar11 = puVar19;
      if ((bVar4 & 8) == 0) goto LAB_1010693a;
LAB_101068d2:
      uVar12 = 0;
      puVar11 = puVar19 + 2;
      iVar17 = (int)CONCAT11(*puVar19,puVar19[1]) << 2;
      iVar7 = iVar17;
      uVar20 = 0;
    }
    *(int *)(iVar8 + 0x10) = iVar17;
    *(uint *)(iVar8 + 0x14) = uVar20;
    *(uint *)(iVar8 + 0x18) = uVar12;
    *(int *)(iVar8 + 0x1c) = iVar7;
    if (-1 < (int)(uVar10 << 0x1a)) {
      *(int *)(iVar15 + 0x54) = iVar13;
      iVar9 = FUN_100fadac(param_1[6]);
      param_1[0x29] = (int)(puVar11 + (iVar9 - (int)puVar14));
      param_1[0x31] = (int)puVar11;
      return 0;
    }
  } while( true );
}

