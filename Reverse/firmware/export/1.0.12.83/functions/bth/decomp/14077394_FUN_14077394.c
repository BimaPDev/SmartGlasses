/* FUN_14077394 @ 0x14077394 */

void FUN_14077394(void)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort uVar9;
  ushort uVar10;
  
  iVar1 = DAT_14077618;
  FUN_140e5148(*(undefined4 *)(DAT_14077618 + 4),0xffffffff);
  pbVar3 = (byte *)FUN_140759b8(0xb0);
  if (pbVar3 != (byte *)0x0) {
    uVar10 = 0;
    FUN_140e5658(pbVar3,0,0xb0);
    uVar2 = DAT_14077630;
    uVar4 = 0;
    uVar9 = 0;
    pbVar7 = (byte *)(iVar1 + 0x20);
LAB_140773f2:
    do {
      if ((int)((uint)*pbVar7 << 0x1f) < 0) {
        uVar6 = (*pbVar7 & 0xf) >> 1;
        if (uVar6 == 1) {
          uVar6 = (uint)*pbVar3;
          uVar9 = uVar9 + 1 & 0xff;
          if (uVar6 < 6) {
            pbVar8 = pbVar7 + 0x14;
            *(uint *)(pbVar3 + uVar6 * 8 + 8) =
                 (uint)pbVar7[0xc] << 8 | (uint)*(ushort *)(pbVar7 + 8) << 0x10 | (uint)pbVar7[0xd];
            *(uint *)(pbVar3 + uVar6 * 8 + 0xc) =
                 (uint)pbVar7[3] << 0x10 | (uint)pbVar7[2] << 0x18 | (uint)pbVar7[7] << 8;
            *pbVar3 = *pbVar3 + 1;
            pbVar7 = pbVar8;
            if ((byte *)(iVar1 + 0x214) == pbVar8) break;
            goto LAB_140773f2;
          }
        }
        else if (uVar6 == 2) {
          uVar4 = uVar4 + 1 & 0xff;
          if (*pbVar3 == 0) {
            uVar6 = (uint)*(ushort *)(pbVar7 + 10);
LAB_14077700:
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,uVar2,*(undefined2 *)(pbVar7 + 8),uVar6);
          }
          uVar5 = 0;
          uVar6 = (uint)*(ushort *)(pbVar7 + 10);
          while (uVar6 != *(uint *)(pbVar3 + uVar5 * 8 + 8) >> 0x10) {
            uVar5 = uVar5 + 1;
            if (uVar5 == *pbVar3) goto LAB_14077700;
          }
          *(uint *)(pbVar3 + uVar5 * 8 + 0xc) =
               *(uint *)(pbVar3 + uVar5 * 8 + 0xc) |
               (int)(uint)*(ushort *)(pbVar7 + 8) >> 4 & 0xf0U | *(ushort *)(pbVar7 + 8) & 0xf;
        }
        else if (uVar6 == 3) {
          uVar6 = (uint)pbVar3[1];
          uVar10 = uVar10 + 1 & 0xff;
          if (uVar6 < 6) {
            *(uint *)(pbVar3 + uVar6 * 0xc + 0x38) =
                 (uint)pbVar7[0xc] << 8 | (uint)*(ushort *)(pbVar7 + 8) << 0x10 | (uint)pbVar7[0xd];
            *(uint *)(pbVar3 + uVar6 * 0xc + 0x3c) =
                 (uint)pbVar7[3] << 0x10 | (uint)pbVar7[2] << 0x18 | (uint)(*pbVar7 >> 5) |
                 (uint)pbVar7[7] << 8;
            pbVar8 = pbVar3 + uVar6 * 0xc + 0x40;
            pbVar8[0] = 0;
            pbVar8[1] = 0;
            pbVar8[2] = 0;
            pbVar8[3] = 0;
            pbVar3[1] = pbVar3[1] + 1;
          }
        }
      }
      pbVar7 = pbVar7 + 0x14;
    } while ((byte *)(iVar1 + 0x214) != pbVar7);
    uVar4 = uVar4 | uVar9 << 8;
    *(ushort *)(pbVar3 + 6) = uVar4;
    *(ushort *)(pbVar3 + 4) = uVar10 << 8;
    pbVar3[3] = 0;
    if (*pbVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x47,DAT_14077720,uVar4,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 0xc)
                   ,*(undefined4 *)(pbVar3 + 0x10),*(undefined4 *)(pbVar3 + 0x14),
                   *(undefined4 *)(pbVar3 + 0x18),*(undefined4 *)(pbVar3 + 0x1c));
    }
    if (pbVar3[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x47,DAT_14077714,*(undefined2 *)(pbVar3 + 4),*(undefined4 *)(pbVar3 + 0x38),
                   *(undefined4 *)(pbVar3 + 0x3c),*(undefined4 *)(pbVar3 + 0x40),
                   *(undefined4 *)(pbVar3 + 0x44),*(undefined4 *)(pbVar3 + 0x48),
                   *(undefined4 *)(pbVar3 + 0x4c));
    }
    if (pbVar3[2] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x47,DAT_14077628,pbVar3[3],*(undefined4 *)(pbVar3 + 0x80),
                   *(undefined4 *)(pbVar3 + 0x84),*(undefined4 *)(pbVar3 + 0x88),
                   *(undefined4 *)(pbVar3 + 0x8c),*(undefined4 *)(pbVar3 + 0x90),
                   *(undefined4 *)(pbVar3 + 0x94));
    }
    FUN_14075b28(pbVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x47,DAT_1407761c,*(undefined2 *)(iVar1 + 0x224),*(undefined2 *)(iVar1 + 0x226),
               *(undefined2 *)(iVar1 + 0x228),*(undefined2 *)(iVar1 + 0x22a),
               *(undefined2 *)(iVar1 + 0x22c),0,0);
}

