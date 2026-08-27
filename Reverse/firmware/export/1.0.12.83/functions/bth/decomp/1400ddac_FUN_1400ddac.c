/* FUN_1400ddac @ 0x1400ddac */

void FUN_1400ddac(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte *psVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  sbyte *psVar9;
  int *piVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  sbyte *psVar16;
  sbyte *psVar17;
  short *psVar18;
  short *psVar19;
  byte *pbVar20;
  int *local_48;
  int *local_3c;
  uint local_38;
  
  uVar12 = (uint)*(byte *)(param_1 + 6);
  if (uVar12 != 0) {
    if (*(byte *)(param_1 + 5) != 0) {
      uVar14 = 0;
      psVar16 = (sbyte *)(param_1 + 0x94);
      psVar5 = psVar16 + *(byte *)(param_1 + 5);
      psVar18 = (short *)(param_1 + 100);
      psVar19 = psVar18;
      psVar17 = psVar16;
      do {
        do {
          psVar9 = psVar16 + 1;
          *psVar18 = (short)(1 << *psVar16) + -1;
          psVar18 = psVar18 + 1;
          psVar16 = psVar9;
        } while (psVar5 != psVar9);
        uVar14 = uVar14 + 1;
        psVar16 = psVar17 + 8;
        psVar18 = psVar19 + 8;
        psVar5 = psVar5 + 8;
        psVar19 = psVar18;
        psVar17 = psVar16;
      } while (uVar14 != uVar12);
    }
    bVar1 = *(byte *)(param_1 + 4);
    if (bVar1 != 0) {
      local_3c = (int *)(param_1 + 0xa4);
      local_38 = 0;
      do {
        uVar14 = (uint)*(byte *)(param_1 + 5);
        pbVar20 = (byte *)(param_1 + 0x94 + uVar14);
        local_48 = local_3c;
        puVar15 = (ushort *)(param_1 + 100);
        do {
          if (uVar14 != 0) {
            pbVar11 = pbVar20 + -uVar14;
            puVar6 = puVar15;
            piVar10 = local_48;
            do {
              while( true ) {
                uVar4 = *puVar6;
                if (uVar4 == 0) break;
                uVar3 = *(ushort *)(param_1 + 8);
                bVar2 = *pbVar11;
                iVar13 = *(int *)(param_1 * -3 + -0x22c + (int)pbVar11 * 4);
                *(ushort *)(param_1 + 8) = uVar3 + bVar2;
                iVar7 = bVar2 - 1;
                switch(uVar3 & 7) {
                case 1:
                  switch(iVar7) {
                  case 0:
                    uVar8 = ((*param_2 & 0x7f) >> 6) * 0x8000 + 0x4000;
                    break;
                  case 1:
                    uVar8 = ((*param_2 & 0x7f) >> 5) * 0x8000 + 0x4000;
                    break;
                  case 2:
                    uVar8 = ((*param_2 & 0x7f) >> 4) * 0x8000 + 0x4000;
                    break;
                  case 3:
                    uVar8 = ((*param_2 & 0x7f) >> 3) * 0x8000 + 0x4000;
                    break;
                  case 4:
                    uVar8 = ((*param_2 & 0x7f) >> 2) * 0x8000 + 0x4000;
                    break;
                  case 5:
                    uVar8 = ((*param_2 & 0x7f) >> 1) * 0x8000 + 0x4000;
                    break;
                  case 6:
                    uVar8 = (*param_2 & 0x7f) * 0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 7:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x7f) << 0x18) >> 0x17) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 8:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x7f) << 0x18) >> 0x16) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 9:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x7f) << 0x18) >> 0x15) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 10:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x7f) << 0x18) >> 0x14) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xb:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x7f) << 0x18) >> 0x13) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xc:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x7f) << 0x18) >> 0x12) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xd:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x7f) << 0x18) >> 0x11) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xe:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x7f) << 0x18) >> 0x10) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xf:
                    uVar8 = ((param_2[2] & 0xffff80) << 8 | (uint)param_2[1] << 0x10 |
                            (*param_2 & 0x7f) << 0x18) + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  default:
                    uVar8 = 0x4000;
                  }
                  break;
                case 2:
                  switch(iVar7) {
                  case 0:
                    uVar8 = ((*param_2 & 0x3f) >> 5) * 0x8000 + 0x4000;
                    break;
                  case 1:
                    uVar8 = ((*param_2 & 0x3f) >> 4) * 0x8000 + 0x4000;
                    break;
                  case 2:
                    uVar8 = ((*param_2 & 0x3f) >> 3) * 0x8000 + 0x4000;
                    break;
                  case 3:
                    uVar8 = ((*param_2 & 0x3f) >> 2) * 0x8000 + 0x4000;
                    break;
                  case 4:
                    uVar8 = ((*param_2 & 0x3f) >> 1) * 0x8000 + 0x4000;
                    break;
                  case 5:
                    uVar8 = (*param_2 & 0x3f) * 0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 6:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x3f) << 0x18) >> 0x17) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 7:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x3f) << 0x18) >> 0x16) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 8:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x3f) << 0x18) >> 0x15) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 9:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x3f) << 0x18) >> 0x14) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 10:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x3f) << 0x18) >> 0x13) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xb:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x3f) << 0x18) >> 0x12) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xc:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x3f) << 0x18) >> 0x11) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xd:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x3f) << 0x18) >> 0x10) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xe:
                    uVar8 = ((param_2[2] & 0xffff80) << 8 | (uint)param_2[1] << 0x10 |
                            (*param_2 & 0x3f) << 0x18) + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xf:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 0x3f) << 0x18) >> 0xe) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  default:
                    uVar8 = 0x4000;
                  }
                  break;
                case 3:
                  switch(iVar7) {
                  case 0:
                    uVar8 = ((*param_2 & 0x1f) >> 4) * 0x8000 + 0x4000;
                    break;
                  case 1:
                    uVar8 = ((*param_2 & 0x1f) >> 3) * 0x8000 + 0x4000;
                    break;
                  case 2:
                    uVar8 = ((*param_2 & 0x1f) >> 2) * 0x8000 + 0x4000;
                    break;
                  case 3:
                    uVar8 = ((*param_2 & 0x1f) >> 1) * 0x8000 + 0x4000;
                    break;
                  case 4:
                    uVar8 = (*param_2 & 0x1f) * 0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 5:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x1f) << 0x18) >> 0x17) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 6:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x1f) << 0x18) >> 0x16) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 7:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x1f) << 0x18) >> 0x15) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 8:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x1f) << 0x18) >> 0x14) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 9:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x1f) << 0x18) >> 0x13) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 10:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x1f) << 0x18) >> 0x12) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xb:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x1f) << 0x18) >> 0x11) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xc:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0x1f) << 0x18) >> 0x10) *
                            0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xd:
                    uVar8 = ((param_2[2] & 0xffff80) << 8 | (uint)param_2[1] << 0x10 |
                            (*param_2 & 0x1f) << 0x18) + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xe:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 0x1f) << 0x18) >> 0xe) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xf:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 0x1f) << 0x18) >> 0xd) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  default:
                    uVar8 = 0x4000;
                  }
                  break;
                case 4:
                  switch(iVar7) {
                  case 0:
                    uVar8 = ((*param_2 & 0xf) >> 3) * 0x8000 + 0x4000;
                    break;
                  case 1:
                    uVar8 = ((*param_2 & 0xf) >> 2) * 0x8000 + 0x4000;
                    break;
                  case 2:
                    uVar8 = ((*param_2 & 0xf) >> 1) * 0x8000 + 0x4000;
                    break;
                  case 3:
                    uVar8 = (*param_2 & 0xf) * 0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 4:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0xf) << 0x18) >> 0x17) * 0x8000
                            + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 5:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0xf) << 0x18) >> 0x16) * 0x8000
                            + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 6:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0xf) << 0x18) >> 0x15) * 0x8000
                            + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 7:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0xf) << 0x18) >> 0x14) * 0x8000
                            + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 8:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0xf) << 0x18) >> 0x13) * 0x8000
                            + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 9:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0xf) << 0x18) >> 0x12) * 0x8000
                            + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 10:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0xf) << 0x18) >> 0x11) * 0x8000
                            + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xb:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 0xf) << 0x18) >> 0x10) * 0x8000
                            + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xc:
                    uVar8 = ((param_2[2] & 0xffff80) << 8 | (uint)param_2[1] << 0x10 |
                            (*param_2 & 0xf) << 0x18) + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xd:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 0xf) << 0x18) >> 0xe) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xe:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 0xf) << 0x18) >> 0xd) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xf:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 0xf) << 0x18) >> 0xc) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  default:
                    uVar8 = 0x4000;
                  }
                  break;
                case 5:
                  switch(iVar7) {
                  case 0:
                    uVar8 = ((*param_2 & 7) >> 2) * 0x8000 + 0x4000;
                    break;
                  case 1:
                    uVar8 = ((*param_2 & 7) >> 1) * 0x8000 + 0x4000;
                    break;
                  case 2:
                    uVar8 = (*param_2 & 7) * 0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 3:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 7) << 0x18) >> 0x17) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 4:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 7) << 0x18) >> 0x16) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 5:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 7) << 0x18) >> 0x15) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 6:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 7) << 0x18) >> 0x14) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 7:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 7) << 0x18) >> 0x13) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 8:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 7) << 0x18) >> 0x12) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 9:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 7) << 0x18) >> 0x11) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 10:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 7) << 0x18) >> 0x10) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xb:
                    uVar8 = ((param_2[2] & 0xffff80) << 8 | (uint)param_2[1] << 0x10 |
                            (*param_2 & 7) << 0x18) + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xc:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 7) << 0x18) >> 0xe) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xd:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 7) << 0x18) >> 0xd) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xe:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 7) << 0x18) >> 0xc) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xf:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 7) << 0x18) >> 0xb) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  default:
                    uVar8 = 0x4000;
                  }
                  break;
                case 6:
                  switch(iVar7) {
                  case 0:
                    uVar8 = ((*param_2 & 3) >> 1) * 0x8000 + 0x4000;
                    break;
                  case 1:
                    uVar8 = (*param_2 & 3) * 0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 2:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 3) << 0x18) >> 0x17) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 3:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 3) << 0x18) >> 0x16) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 4:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 3) << 0x18) >> 0x15) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 5:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 3) << 0x18) >> 0x14) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 6:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 3) << 0x18) >> 0x13) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 7:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 3) << 0x18) >> 0x12) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 8:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 3) << 0x18) >> 0x11) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 9:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 3) << 0x18) >> 0x10) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 10:
                    uVar8 = ((param_2[2] & 0xffff80) << 8 | (uint)param_2[1] << 0x10 |
                            (*param_2 & 3) << 0x18) + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xb:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 3) << 0x18) >> 0xe) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xc:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 3) << 0x18) >> 0xd) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xd:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 3) << 0x18) >> 0xc) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xe:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 3) << 0x18) >> 0xb) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xf:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 3) << 0x18) >> 10) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  default:
                    uVar8 = 0x4000;
                  }
                  break;
                case 7:
                  switch(iVar7) {
                  case 0:
                    uVar8 = (*param_2 & 1) * 0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 1:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 1) << 0x18) >> 0x17) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 2:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 1) << 0x18) >> 0x16) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 3:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 1) << 0x18) >> 0x15) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 4:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 1) << 0x18) >> 0x14) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 5:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 1) << 0x18) >> 0x13) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 6:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 1) << 0x18) >> 0x12) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 7:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 1) << 0x18) >> 0x11) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 8:
                    uVar8 = (((uint)param_2[1] << 0x10 | (*param_2 & 1) << 0x18) >> 0x10) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 9:
                    uVar8 = ((param_2[2] & 0xffff80) << 8 | (uint)param_2[1] << 0x10 |
                            (*param_2 & 1) << 0x18) + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 10:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 1) << 0x18) >> 0xe) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xb:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 1) << 0x18) >> 0xd) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xc:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 1) << 0x18) >> 0xc) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xd:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 1) << 0x18) >> 0xb) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xe:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 1) << 0x18) >> 10) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  case 0xf:
                    uVar8 = (((uint)param_2[2] << 8 | (uint)param_2[1] << 0x10 |
                             (*param_2 & 1) << 0x18) >> 9) * 0x8000 + 0x4000;
                    param_2 = param_2 + 2;
                    break;
                  default:
                    uVar8 = 0x4000;
                  }
                  break;
                default:
                  switch(bVar2) {
                  case 1:
                    uVar8 = (uint)(*param_2 >> 7) * 0x8000 + 0x4000;
                    break;
                  case 2:
                    uVar8 = (uint)(*param_2 >> 6) * 0x8000 + 0x4000;
                    break;
                  case 3:
                    uVar8 = (uint)(*param_2 >> 5) * 0x8000 + 0x4000;
                    break;
                  case 4:
                    uVar8 = (uint)(*param_2 >> 4) * 0x8000 + 0x4000;
                    break;
                  case 5:
                    uVar8 = (uint)(*param_2 >> 3) * 0x8000 + 0x4000;
                    break;
                  case 6:
                    uVar8 = (uint)(*param_2 >> 2) * 0x8000 + 0x4000;
                    break;
                  case 7:
                    uVar8 = (uint)(*param_2 >> 1) * 0x8000 + 0x4000;
                    break;
                  case 8:
                    uVar8 = (uint)*param_2 * 0x8000 + 0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 9:
                    uVar8 = (((uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18) >> 0x17) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 10:
                    uVar8 = (((uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18) >> 0x16) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xb:
                    uVar8 = (((uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18) >> 0x15) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xc:
                    uVar8 = (((uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18) >> 0x14) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xd:
                    uVar8 = (((uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18) >> 0x13) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xe:
                    uVar8 = (((uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18) >> 0x12) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0xf:
                    uVar8 = (((uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18) >> 0x11) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 1;
                    break;
                  case 0x10:
                    uVar8 = (((uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18) >> 0x10) * 0x8000 +
                            0x4000;
                    param_2 = param_2 + 2;
                    break;
                  default:
                    uVar8 = 0x4000;
                  }
                }
                pbVar11 = pbVar11 + 1;
                *piVar10 = (iVar13 >> 1) * ((uVar8 / uVar4) * 2 + -0x8000);
                piVar10 = piVar10 + 1;
                puVar6 = puVar6 + 1;
                if (pbVar20 == pbVar11) goto LAB_1400dffa;
              }
              pbVar11 = pbVar11 + 1;
              *piVar10 = 0;
              piVar10 = piVar10 + 1;
              puVar6 = puVar6 + 1;
            } while (pbVar20 != pbVar11);
          }
LAB_1400dffa:
          puVar15 = puVar15 + 8;
          local_48 = local_48 + 8;
          pbVar20 = pbVar20 + 8;
        } while ((ushort *)(param_1 + 100) + uVar12 * 8 != puVar15);
        local_3c = local_3c + 0x10;
        local_38 = local_38 + 1;
      } while (bVar1 != local_38);
    }
  }
  return;
}

