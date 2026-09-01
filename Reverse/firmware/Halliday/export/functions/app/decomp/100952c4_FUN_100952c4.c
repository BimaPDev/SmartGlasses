/* FUN_100952c4 @ 0x100952c4 */

void FUN_100952c4(undefined4 param_1,byte *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  char cVar16;
  int local_48;
  uint local_2c [2];
  
  uVar4 = (*(code *)*DAT_10095560)();
  iVar13 = (uVar4 + 1) * 4;
  puVar5 = (undefined4 *)FUN_10094254(iVar13,DAT_10095564);
  iVar13 = FUN_10094254(iVar13,DAT_10095564);
  local_2c[0] = 0;
  for (puVar15 = puVar5; iVar3 = DAT_1009556c, puVar5 + uVar4 != puVar15; puVar15 = puVar15 + 1) {
    uVar6 = (*(code *)*DAT_10095568)(param_1,local_2c);
    *puVar15 = uVar6;
  }
  uVar14 = 0;
  local_48 = -1;
  puVar5[uVar4] = 0;
  local_2c[0] = 0;
  do {
    uVar10 = local_2c[0];
    if (uVar4 <= local_2c[0]) {
      uVar10 = 0;
      *(undefined4 *)(iVar13 + uVar14 * 4) = 0;
      for (local_2c[0] = 0; local_2c[0] < uVar4; local_2c[0] = local_2c[0] + 1) {
        puVar5[local_2c[0]] = 0;
      }
      for (; uVar10 < uVar14; uVar10 = uVar10 + 1) {
        puVar5[uVar10] = *(undefined4 *)(iVar13 + uVar10 * 4);
      }
      local_2c[0] = uVar10;
      FUN_10094268(iVar13,DAT_10095564);
      for (local_2c[0] = 0; uVar6 = DAT_10095564, local_2c[0] < uVar4; local_2c[0] = local_2c[0] + 1
          ) {
        uVar14 = puVar5[local_2c[0]];
        if (uVar14 < 0x80) {
          *param_2 = (byte)uVar14;
          pbVar12 = param_2 + 1;
        }
        else if (uVar14 < 0x800) {
          *param_2 = (byte)(uVar14 >> 6) | 0xc0;
          param_2[1] = (byte)puVar5[local_2c[0]] & 0x3f | 0x80;
          pbVar12 = param_2 + 2;
        }
        else if (uVar14 < 0x10000) {
          *param_2 = (byte)(uVar14 >> 0xc) | 0xe0;
          param_2[1] = (byte)((uint)(puVar5[local_2c[0]] << 0x14) >> 0x1a) | 0x80;
          param_2[2] = (byte)puVar5[local_2c[0]] & 0x3f | 0x80;
          pbVar12 = param_2 + 3;
        }
        else {
          pbVar12 = param_2;
          if (uVar14 < 0x110000) {
            *param_2 = (byte)(uVar14 >> 0x12) | 0xf0;
            pbVar12 = param_2 + 4;
            param_2[1] = (byte)((uint)(puVar5[local_2c[0]] << 0xe) >> 0x1a) | 0x80;
            param_2[2] = (byte)((uint)(puVar5[local_2c[0]] << 0x14) >> 0x1a) | 0x80;
            param_2[3] = (byte)puVar5[local_2c[0]] & 0x3f | 0x80;
          }
        }
        param_2 = pbVar12;
      }
      *param_2 = 0;
      FUN_10094268(puVar5,uVar6);
      return;
    }
    uVar11 = puVar5[local_2c[0]];
    iVar7 = FUN_10095200(uVar11 & 0xffff);
    uVar1 = *(ushort *)(puVar5 + uVar10 + 1);
    iVar8 = FUN_10095200((uint)uVar1);
    if ((uVar11 & 0xffff) - 0x64b < 8) {
      *(uint *)(iVar13 + uVar14 * 4) = uVar11;
      local_2c[0] = local_2c[0] + 1;
      iVar7 = local_48;
    }
    else {
      if (uVar1 - 0x64b < 8) {
        iVar8 = FUN_10095200(*(undefined2 *)(puVar5 + uVar10 + 2));
      }
      if (iVar7 != -1) {
        if ((uVar10 == 0) || (local_48 == -1)) {
          cVar9 = '\0';
        }
        else {
          cVar9 = *(char *)(local_48 * 10 + iVar3 + 8);
        }
        if ((uVar4 - 1 == uVar10) || (iVar8 == -1)) {
          cVar16 = '\0';
        }
        else {
          cVar16 = *(char *)(iVar8 * 10 + iVar3 + 7);
        }
        if ((*(char *)(iVar3 + iVar7 * 10) == '\"') && (iVar8 != -1)) {
          cVar2 = *(char *)(iVar3 + iVar8 * 10);
          if (cVar2 == '\0') {
            iVar7 = 0xfef5;
          }
          else if (cVar2 == '\x01') {
            iVar7 = 0xfef7;
          }
          else if (cVar2 == '\x03') {
            iVar7 = 0xfef9;
          }
          else {
            if (cVar2 != '\x05') goto LAB_10095472;
            iVar7 = 0xfefb;
          }
          if (cVar9 != '\0') {
            iVar7 = iVar7 + 1;
          }
          *(int *)(iVar13 + uVar14 * 4) = iVar7;
          iVar7 = -1;
          local_2c[0] = local_2c[0] + 2;
          goto LAB_100953b8;
        }
LAB_10095472:
        iVar8 = iVar7 * 10 + iVar3;
        uVar11 = (uint)*(ushort *)(iVar8 + 2);
        if (cVar9 == '\0') {
          if (cVar16 == '\0') {
            iVar8 = (int)*(char *)(iVar8 + 6);
          }
          else {
            iVar8 = (int)*(char *)(iVar8 + 4);
          }
        }
        else {
          if (cVar16 == '\0') goto LAB_100953da;
          iVar8 = (int)*(char *)(iVar8 + 5);
        }
        uVar11 = uVar11 + iVar8;
      }
LAB_100953da:
      *(uint *)(iVar13 + uVar14 * 4) = uVar11;
      local_2c[0] = local_2c[0] + 1;
    }
LAB_100953b8:
    uVar14 = uVar14 + 1;
    local_48 = iVar7;
  } while( true );
}

