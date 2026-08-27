/* FUN_14021f6c @ 0x14021f6c */

undefined4 FUN_14021f6c(int param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  short *psVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  short *local_4c;
  short *local_44;
  uint local_38;
  int local_34;
  
  iVar13 = *(int *)(DAT_14022100 + 0x60);
  local_44 = *(short **)(param_1 + 0xc0);
  uVar7 = (ushort)*(byte *)(local_44 + 0x2b2);
  uVar3 = (uint)*(byte *)(param_1 + 0xb0);
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (uVar3 != 0) {
    local_38 = -(int)(local_44 + 0x100);
    sVar9 = 0;
    local_4c = local_44 + bVar1;
    local_34 = 0;
    do {
      if (bVar1 != 0) {
        pbVar12 = (byte *)~local_38;
        psVar11 = local_44;
        do {
          pbVar4 = pbVar12 + local_38 + 1;
          pbVar12 = pbVar12 + 1;
          uVar3 = (uint)*pbVar12;
          if (uVar3 == 0xd) {
            return 0x2003;
          }
          if (uVar3 < 0xe) {
            sVar8 = 0;
            if (uVar3 == 0) goto LAB_14021fde;
LAB_1402208a:
            if (((param_3 & 0x4300) == 0) || (local_34 != 0 || pbVar4 != (byte *)0x0)) {
              uVar3 = *param_2;
              uVar5 = param_2[1];
              uVar10 = 0;
              while( true ) {
                uVar14 = uVar3 << (2 - uVar5 & 0xff);
                if ((int)(2 - uVar5) < 1) {
                  uVar14 = 0;
                  uVar6 = uVar5;
                }
                else {
                  uVar3 = FUN_1401c128(param_2 + 2);
                  *param_2 = uVar3;
                  uVar6 = param_2[1] + 0x20;
                }
                uVar5 = uVar6 - 2;
                param_2[1] = uVar5;
                uVar2 = *(ushort *)
                         (iVar13 + uVar10 * 8 + ((uVar3 >> (uVar5 & 0xff) | uVar14) & 3) * 2);
                if ((int)((uint)uVar2 << 0x1f) < 0) break;
                uVar10 = (uint)(uVar2 >> 2);
              }
              if ((int)((uint)uVar2 << 0x1e) < 0) {
                param_2[1] = uVar6 - 1;
              }
              uVar7 = uVar7 + ((uVar2 >> 2) - 0x3c);
            }
            *psVar11 = uVar7 - 100;
          }
          else {
            if (1 < uVar3 - 0xe) goto LAB_1402208a;
            uVar3 = *param_2;
            uVar5 = param_2[1];
            uVar10 = 0;
            while( true ) {
              uVar14 = uVar3 << (2 - uVar5 & 0xff);
              if ((int)(2 - uVar5) < 1) {
                uVar14 = 0;
                uVar6 = uVar5;
              }
              else {
                uVar3 = FUN_1401c128(param_2 + 2);
                *param_2 = uVar3;
                uVar6 = param_2[1] + 0x20;
              }
              uVar5 = uVar6 - 2;
              param_2[1] = uVar5;
              uVar2 = *(ushort *)
                       (iVar13 + uVar10 * 8 + ((uVar3 >> (uVar5 & 0xff) | uVar14) & 3) * 2);
              if ((int)((uint)uVar2 << 0x1f) < 0) break;
              uVar10 = (uint)(uVar2 >> 2);
            }
            if ((int)((uint)uVar2 << 0x1e) < 0) {
              param_2[1] = uVar6 - 1;
            }
            sVar9 = sVar9 + ((uVar2 >> 2) - 0x3c);
            sVar8 = sVar9 + -100;
LAB_14021fde:
            *psVar11 = sVar8;
          }
          psVar11 = psVar11 + 1;
        } while (local_4c != psVar11);
        uVar3 = (uint)*(byte *)(param_1 + 0xb0);
      }
      local_44 = local_44 + 0x10;
      local_34 = local_34 + 1;
      local_4c = local_4c + 0x10;
      local_38 = local_38 - 0x10;
    } while (local_34 < (int)uVar3);
  }
  return 0;
}

