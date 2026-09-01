/* FUN_1007bd5c @ 0x1007bd5c */

undefined4 FUN_1007bd5c(undefined4 param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c [3];
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 local_64 [6];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar17 = (DAT_1007c058 - DAT_1007c054) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_1007c05c | uVar17,DAT_1007c064,DAT_1007c060);
  puVar2 = DAT_1007c068;
  local_88[0] = 6;
  local_84 = DAT_1007c06c;
  uStack_80 = param_1;
  FUN_1011ea48(DAT_1007c068,0,0x220);
  *puVar2 = param_1;
  FUN_1007c0ec();
  FUN_1011fe86(1);
  FUN_1011fe96();
  FUN_100a5b78(DAT_1007c070 | uVar17,DAT_1007c064,PTR_s_bat_drv_get_config__1007c074);
  puVar3 = DAT_1007c080;
  puVar10 = local_64;
  puVar12 = (undefined4 *)PTR_DAT_1007c078;
  do {
    uVar5 = *puVar12;
    uVar9 = puVar12[1];
    puVar12 = puVar12 + 2;
    *puVar10 = uVar5;
    puVar10[1] = uVar9;
    puVar10 = puVar10 + 2;
  } while (puVar12 != (undefined4 *)(PTR_DAT_1007c078 + 0x38));
  *puVar10 = *puVar12;
  puVar10 = local_7c;
  puVar12 = (undefined4 *)PTR_DAT_1007c07c;
  do {
    puVar13 = puVar12;
    puVar11 = puVar10;
    uVar5 = puVar13[1];
    puVar12 = puVar13 + 2;
    *puVar11 = *puVar13;
    puVar11[1] = uVar5;
    puVar10 = puVar11 + 2;
  } while (puVar12 != (undefined4 *)(PTR_DAT_1007c07c + 0x10));
  uVar4 = *(undefined2 *)(puVar13 + 3);
  puVar11[2] = *puVar12;
  *(undefined2 *)(puVar11 + 3) = uVar4;
  *DAT_1007c080 = local_64[0];
  puVar3[1] = local_64[1];
  puVar3[2] = local_64[2];
  puVar3[3] = local_64[3];
  puVar3[4] = local_64[4];
  puVar3[5] = local_64[5];
  puVar3[6] = uStack_4c;
  puVar3[7] = uStack_48;
  puVar3[8] = local_44;
  puVar3[9] = uStack_40;
  puVar3[10] = uStack_3c;
  puVar3[0xb] = uStack_38;
  puVar3[0xc] = local_34;
  puVar3[0xd] = uStack_30;
  puVar3[0xe] = uStack_2c;
  puVar3[0xf] = local_7c[0];
  puVar3[0x10] = local_7c[1];
  puVar3[0x11] = local_7c[2];
  puVar3[0x12] = uStack_70;
  puVar3[0x13] = local_6c;
  *(undefined2 *)(puVar3 + 0x14) = local_68;
  *(undefined2 *)((int)puVar2 + 0x5a) = 0xcb2;
  puVar2[0x17] = 0xd16;
  *(undefined2 *)(puVar2 + 0x18) = 0x3c;
  FUN_1007ade4();
  *(undefined2 *)((int)puVar2 + 0x62) = 0x10;
  FUN_1007c21c();
  iVar6 = FUN_1007b028(param_1);
  if (iVar6 != 0) {
    FUN_100a5b78(DAT_1007c084 | uVar17,DAT_1007c064,DAT_1007c088);
    return 0xfffffffb;
  }
  FUN_10079b64(1);
  iVar6 = FUN_1011a99e();
  if (iVar6 << 0xe < 0) {
    FUN_1007c15c(0,0);
  }
  *(byte *)((int)puVar2 + 0x13d) = *(byte *)((int)puVar2 + 0x13d) | 1;
  uVar7 = FUN_1011fe46();
  uVar15 = DAT_1007c08c;
  uVar14 = uVar7 & 0x7fffffff;
  *(byte *)((int)puVar2 + 0x13e) =
       *(byte *)((int)puVar2 + 0x13e) & 0xdf | (byte)((uVar7 >> 0x1f) << 5);
  FUN_100a5b78(uVar15 | uVar17,DAT_1007c064,DAT_1007c090,uVar14);
  if (4999 < uVar14) {
    FUN_100a5b78(DAT_1007c094 | uVar17,DAT_1007c064,DAT_1007c098);
    uVar14 = 0;
  }
  uVar9 = DAT_1007c0e8;
  uVar5 = DAT_1007c064;
  uVar15 = *(byte *)((int)puVar2 + 0x13e) & 0x20;
  uVar4 = (undefined2)uVar14;
  if ((*(byte *)((int)puVar2 + 0x13e) & 0x20) != 0) {
    if (uVar14 != 0) {
      *(undefined2 *)((int)puVar2 + 0x15e) = uVar4;
      goto LAB_1007becc;
    }
    uVar15 = 0;
  }
  uVar7 = uVar17 | DAT_1007c0e4;
  do {
    iVar6 = FUN_1011fe22();
    uVar16 = uVar15 + 1;
    FUN_100a5b78(uVar7,uVar5,uVar9,uVar15,iVar6);
    uVar15 = uVar16;
  } while (uVar16 != 4);
  iVar8 = FUN_1013d02e(uVar14 - iVar6);
  if (199 < iVar8) {
    uVar4 = (undefined2)iVar6;
  }
  *(undefined2 *)((int)puVar2 + 0x15e) = uVar4;
LAB_1007becc:
  FUN_100a5b78(DAT_1007c09c | uVar17,DAT_1007c064,DAT_1007c0a0,*(undefined2 *)((int)puVar2 + 0x15e))
  ;
  iVar6 = FUN_1011a86a();
  if (iVar6 == 0) {
    FUN_100a5b78(DAT_1007c0a4 | uVar17,DAT_1007c064,DAT_1007c0a8);
    if (*(ushort *)((int)puVar2 + 0x15e) < 0xd16) {
      FUN_100a5b78(DAT_1007c0ac | uVar17,DAT_1007c064,DAT_1007c0b0,0xd16,
                   *(ushort *)((int)puVar2 + 0x15e));
      do {
        FUN_10056794();
      } while( true );
    }
    FUN_1007c15c(1);
    *(undefined1 *)((int)puVar2 + 0x13f) = 0;
  }
  else {
    FUN_100a5b78(DAT_1007c0b8 | uVar17,DAT_1007c064,DAT_1007c0bc);
    if ((*(ushort *)((int)puVar2 + 0x15e) < 0xcb3) &&
       (*(byte *)((int)puVar2 + 0x13e) = *(byte *)((int)puVar2 + 0x13e) | 0x10,
       *(ushort *)((int)puVar2 + 0x15e) < 0xbb9)) {
      FUN_100a5b78(DAT_1007c0c0 | uVar17,DAT_1007c064,DAT_1007c0c4);
      FUN_1007c6e0(0x1e);
      iVar6 = FUN_1011fe16();
      FUN_1007bc4c();
      iVar8 = FUN_1011fe16();
      FUN_100a5b78(uVar17 | 0x9600031,DAT_1007c064,DAT_1007c0c8,iVar8 - iVar6);
    }
    uVar1 = *(ushort *)((int)puVar2 + 0x15e);
    if (uVar1 < 0xcb3) {
      FUN_100a5b78(DAT_1007c0cc | uVar17,DAT_1007c064,DAT_1007c0d0);
      *(byte *)((int)puVar2 + 0x13e) = *(byte *)((int)puVar2 + 0x13e) | 2;
      FUN_1007c6e0(0x46);
    }
    else {
      uVar5 = FUN_1007c5fc(*(undefined1 *)((int)puVar2 + 9));
      FUN_100a5b78(DAT_1007c0d4 | uVar17,DAT_1007c064,DAT_1007c0d8,uVar1,uVar5);
      FUN_1011fee0(*(undefined1 *)((int)puVar2 + 9));
    }
    FUN_1007c15c(0);
    *(undefined1 *)((int)puVar2 + 0x13f) = 1;
  }
  iVar6 = FUN_100560c0(local_88);
  if (iVar6 == 0) {
    FUN_100a5b78(DAT_1007c0dc | uVar17,DAT_1007c064,DAT_1007c0e0);
    FUN_10079b64(0);
    uVar5 = 0;
  }
  else {
    FUN_100a5b78(uVar17 | 0x9700011,DAT_1007c064,DAT_1007c0b4);
    uVar5 = 0xfffffffa;
  }
  return uVar5;
}

