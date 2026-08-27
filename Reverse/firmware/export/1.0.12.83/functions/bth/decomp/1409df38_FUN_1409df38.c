/* FUN_1409df38 @ 0x1409df38 */

undefined4 FUN_1409df38(byte *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
  
  uVar13 = DAT_1409e1d0;
  if ((*(int *)(param_1 + 8) != 1) && (uVar13 = DAT_1409e194, *(int *)(param_1 + 8) == 2)) {
    uVar13 = DAT_1409e198;
  }
  uVar11 = DAT_1409e1a0;
  if (param_1[0x10] < 6) {
    uVar11 = *(uint *)(DAT_1409e19c + (uint)param_1[0x10] * 4);
  }
  FUN_1402a6e8(4,0x101,DAT_1409e1ac,DAT_1409e1a8,DAT_1409e1a4,uVar13,param_1[6],uVar11);
  puVar1 = DAT_1409e1b4;
  uVar7 = (uint)param_1[5];
  uVar10 = (uint)param_1[4];
  uVar2 = (uint)param_1[3];
  uVar13 = (uint)param_1[2];
  uVar8 = (uint)param_1[1];
  uVar11 = (uint)*param_1;
  FUN_1402a6e8(4,0x104,DAT_1409e1ac,DAT_1409e1a8,DAT_1409e1b0,uVar11,uVar8,uVar13,uVar2,uVar10,uVar7
              );
  uVar3 = FUN_1409e86c(*puVar1);
  if (5 < uVar3) {
    uVar9 = 0x109;
    uVar14 = DAT_1409e1cc;
    goto LAB_1409e0d8;
  }
  iVar4 = FUN_1409e874(*puVar1);
  if (iVar4 != 0) {
    FUN_1409e7e0(*puVar1,param_1);
    return 1;
  }
  iVar4 = FUN_1409e7c0(*puVar1);
  if (((*(byte *)(iVar4 + 6) == param_1[6]) && (*(int *)(param_1 + 8) == *(int *)(iVar4 + 8))) &&
     (*(byte *)(iVar4 + 0x10) == param_1[0x10])) {
LAB_1409e0fa:
    uVar14 = 1;
  }
  else {
    iVar4 = FUN_1409e90c(*puVar1,param_1);
    if (iVar4 == 0) {
LAB_1409e00e:
      iVar4 = FUN_1409e7c0(*puVar1);
      uVar11 = DAT_1409e1d0;
      if ((*(int *)(iVar4 + 8) != 1) && (uVar11 = DAT_1409e194, *(int *)(iVar4 + 8) == 2)) {
        uVar11 = DAT_1409e198;
      }
      uVar8 = (uint)*(byte *)(iVar4 + 6);
      uVar13 = DAT_1409e1a0;
      if (*(byte *)(iVar4 + 0x10) < 6) {
        uVar13 = *(uint *)(DAT_1409e19c + (uint)*(byte *)(iVar4 + 0x10) * 4);
      }
      FUN_1402a6e8(4,0x12f,DAT_1409e1ac,DAT_1409e1a8,DAT_1409e1c4,uVar11,uVar8,uVar13);
      cVar6 = *(char *)(iVar4 + 0x10);
      if (cVar6 == '\x03') {
        if (param_1[0x10] != 4) goto LAB_1409e060;
LAB_1409e112:
        FUN_1409dec8(param_1);
        goto LAB_1409e0fa;
      }
      if (cVar6 == '\x04') {
        if (param_1[0x10] == 4) {
          uVar9 = 0x13b;
          uVar14 = DAT_1409e1e4;
LAB_1409e0d8:
          FUN_1402a6e8(4,uVar9,DAT_1409e1ac,DAT_1409e1a8,uVar14,uVar11,uVar8,uVar13,uVar2,uVar10,
                       uVar7);
          return 0;
        }
LAB_1409e060:
        if ((*(code **)(iVar4 + 0x14) == (code *)0x0) || (param_1[6] == *(byte *)(iVar4 + 6)))
        goto LAB_1409e088;
        iVar5 = (**(code **)(iVar4 + 0x14))();
        if (iVar5 == 0) {
          FUN_1409dec8(param_1);
          return 0;
        }
        if (param_1[0x10] == 4) {
          FUN_1402a6e8(4,0x14b,DAT_1409e1ac,DAT_1409e1a8,DAT_1409e1e8,uVar11,uVar8,uVar13);
          goto LAB_1409e112;
        }
        cVar6 = *(char *)(iVar4 + 0x10);
      }
      if (cVar6 == '\x01') {
        bVar12 = param_1[0x10];
      }
      else {
        if (cVar6 != '\x05') goto LAB_1409e088;
        bVar12 = param_1[0x10] & 0xfb;
      }
      if (((bVar12 != 1) || (*(code **)(iVar4 + 0x14) == (code *)0x0)) ||
         (iVar5 = (**(code **)(iVar4 + 0x14))(*(undefined1 *)(iVar4 + 6)), iVar5 != 0)) {
LAB_1409e088:
        FUN_1409e888(*puVar1,DAT_1409e1c0,param_1);
        FUN_1409e7e0(*puVar1,param_1);
        FUN_1409de08(iVar4,*(undefined4 *)(param_1 + 0xc));
        FUN_1402a6e8(4,0x16f,DAT_1409e1ac,DAT_1409e1a8,DAT_1409e1c8);
        FUN_1409de74(*puVar1);
        return 1;
      }
      uVar14 = DAT_1409e1dc;
      if (param_1[0x11] == 0) {
        uVar14 = DAT_1409e1d8;
      }
      FUN_1402a6e8(4,0x158,DAT_1409e1ac,DAT_1409e1a8,DAT_1409e1e0,uVar14,uVar8,uVar13);
      if (param_1[0x11] == 0) {
        return 0;
      }
      FUN_1409dec8(param_1);
    }
    else {
      uVar14 = DAT_1409e1b8;
      if (*(int *)(param_1 + 0xc) == 3) {
        if (param_1[0x10] != 3) {
          uVar14 = DAT_1409e1d4;
        }
LAB_1409dff0:
        FUN_1402a6e8(4,0x125,DAT_1409e1ac,DAT_1409e1a8,DAT_1409e1bc,uVar14);
        FUN_1409e888(*puVar1,DAT_1409e1c0,param_1);
        goto LAB_1409e00e;
      }
      if (param_1[0x10] == 3) goto LAB_1409dff0;
    }
    uVar14 = 2;
  }
  return uVar14;
}

