/* FUN_2c4cb9bc @ 0x2c4cb9bc */

undefined4 FUN_2c4cb9bc(int param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  byte *pbVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  byte *pbVar13;
  short *psVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int local_48;
  short *local_34;
  uint local_30;
  
  local_34 = *(short **)(param_1 + 0xc0);
  uVar3 = (ushort)*(byte *)(local_34 + 0x2b2);
  iVar10 = *(int *)(DAT_2c4cbb94 + 0x60);
  bVar1 = *(byte *)(param_1 + 0xb4);
  uVar8 = (uint)*(byte *)(param_1 + 0xb0);
  if (uVar8 != 0) {
    sVar4 = 0;
    local_48 = 0;
    local_30 = -(int)(local_34 + 0x100);
    uVar5 = DAT_2c4cbb98 & param_3;
    psVar14 = local_34 + bVar1;
    do {
      if (bVar1 != 0) {
        pbVar13 = (byte *)~local_30;
        psVar11 = local_34;
        do {
          while( true ) {
            pbVar6 = pbVar13 + local_30 + 1;
            pbVar13 = pbVar13 + 1;
            uVar8 = (uint)*pbVar13;
            if (uVar8 != 0xd) break;
            if (uVar5 != 0) {
              return 0x4002;
            }
            FUN_2c4d0d4c(param_1,param_2,DAT_2c4cbb9c,*(int *)(param_1 + 0xc0),
                         *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x564),pbVar6,local_48);
LAB_2c4cba1c:
            psVar11 = psVar11 + 1;
            if (psVar11 == psVar14) goto LAB_2c4cbab6;
          }
          if (uVar8 < 0xe) {
            sVar7 = 0;
            if (uVar8 != 0) goto LAB_2c4cbb02;
LAB_2c4cba1a:
            *psVar11 = sVar7;
            goto LAB_2c4cba1c;
          }
          if (1 < uVar8 - 0xe) {
LAB_2c4cbb02:
            if (((param_3 & 0x4300) == 0) || (local_48 != 0 || pbVar6 != (byte *)0x0)) {
              uVar16 = param_2[1];
              uVar9 = 0;
              uVar8 = *param_2;
              do {
                uVar15 = 0;
                uVar17 = uVar16;
                if (0 < (int)(2 - uVar16)) {
                  uVar15 = uVar8 << (2 - uVar16 & 0xff);
                  uVar8 = FUN_2c4d74d4(param_2 + 2);
                  *param_2 = uVar8;
                  uVar17 = param_2[1] + 0x20;
                }
                uVar16 = uVar17 - 2;
                param_2[1] = uVar16;
                uVar2 = *(ushort *)
                         (iVar10 + uVar9 * 8 + ((uVar8 >> (uVar16 & 0xff) | uVar15) & 3) * 2);
                uVar9 = (uint)(uVar2 >> 2);
              } while ((uVar2 & 1) == 0);
              if ((int)((uint)uVar2 << 0x1e) < 0) {
                param_2[1] = uVar17 - 1;
              }
              uVar3 = uVar3 + ((uVar2 >> 2) - 0x3c);
            }
            sVar7 = uVar3 - 100;
            goto LAB_2c4cba1a;
          }
          uVar16 = param_2[1];
          uVar9 = 0;
          uVar8 = *param_2;
          do {
            uVar15 = 0;
            uVar17 = uVar16;
            if (0 < (int)(2 - uVar16)) {
              uVar15 = uVar8 << (2 - uVar16 & 0xff);
              uVar8 = FUN_2c4d74d4(param_2 + 2);
              *param_2 = uVar8;
              uVar17 = param_2[1] + 0x20;
            }
            uVar16 = uVar17 - 2;
            param_2[1] = uVar16;
            uVar2 = *(ushort *)(iVar10 + uVar9 * 8 + ((uVar8 >> (uVar16 & 0xff) | uVar15) & 3) * 2);
            uVar9 = (uint)(uVar2 >> 2);
          } while ((uVar2 & 1) == 0);
          if ((int)((uint)uVar2 << 0x1e) < 0) {
            param_2[1] = uVar17 - 1;
          }
          psVar12 = psVar11 + 1;
          sVar4 = sVar4 + ((uVar2 >> 2) - 0x3c);
          *psVar11 = sVar4 + -100;
          psVar11 = psVar12;
        } while (psVar12 != psVar14);
LAB_2c4cbab6:
        uVar8 = (uint)*(byte *)(param_1 + 0xb0);
      }
      psVar14 = psVar14 + 0x10;
      local_34 = local_34 + 0x10;
      local_48 = local_48 + 1;
      local_30 = local_30 - 0x10;
    } while (local_48 < (int)uVar8);
  }
  return 0;
}

