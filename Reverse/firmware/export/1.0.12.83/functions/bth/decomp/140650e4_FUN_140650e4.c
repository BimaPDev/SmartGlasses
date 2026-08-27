/* FUN_140650e4 @ 0x140650e4 */

void FUN_140650e4(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  ushort uVar10;
  undefined2 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  ushort uVar17;
  int local_38;
  undefined1 local_34 [2];
  undefined2 local_32;
  int local_2c;
  
  local_2c = *DAT_14065354;
  piVar8 = (int *)FUN_14066108(*(undefined1 *)(param_2 + 0x13));
  cVar1 = *(char *)(param_2 + 0x11);
  switch(param_3) {
  case 2:
    sVar7 = FUN_1406d258(param_1,param_2);
    *(short *)(param_2 + 0x2c) = sVar7 + -1;
    if (*(char *)(param_2 + 0x33) == '\x01') {
      *(short *)(param_2 + 0x2c) = sVar7 + -3;
      bVar6 = true;
    }
    else {
      bVar6 = true;
    }
    goto LAB_140652b6;
  case 3:
    if (*(int *)(param_2 + 0x28) != 0) {
      FUN_1407373c(*(undefined4 *)(param_2 + 0x20),*(undefined2 *)(param_2 + 0x2c));
    }
    if (cVar1 != '\x03') goto switchD_14065110_caseD_5;
    break;
  case 4:
  case 8:
    break;
  default:
    goto switchD_14065110_caseD_5;
  case 6:
    bVar6 = false;
LAB_140652b6:
    if (param_4 == 0) {
      uVar12 = (uint)*(byte *)(param_2 + 0x33);
      if ((*(byte *)(param_2 + 0x32) < uVar12) &&
         (uVar10 = *(ushort *)(param_2 + 0x2c), uVar10 != 0)) {
        if (1 < uVar12) {
          if (uVar10 < 5) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 - 4;
          }
        }
        iVar14 = param_2 + (uint)*(byte *)(param_2 + 0x32) * 4;
        *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) & 0xfd;
        uVar17 = *(ushort *)(iVar14 + 0x38);
        if (uVar10 <= uVar17) {
          uVar17 = uVar10;
        }
        (**(code **)(*piVar8 + 8))
                  (param_1,*(undefined1 *)(param_2 + 0x13),*(undefined2 *)(param_2 + 0x14),
                   *(undefined2 *)(param_2 + 0x16),*(undefined2 *)(iVar14 + 0x36),uVar17);
      }
      else {
        iVar14 = *(int *)(param_2 + 0x20);
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_14065424,0xd2,DAT_14065420);
        }
        if (uVar12 == 1) {
          if (cVar1 == '\x03') {
            local_34[0] = 0x1b;
          }
          else {
            local_34[0] = 0x1d;
          }
          local_32 = *(undefined2 *)(param_2 + 0x36);
        }
        else {
          local_34[0] = 0x23;
        }
        if (*(int *)(param_2 + 0x28) == 0) {
          FUN_14073a58(param_2 + 0x20);
          uVar10 = *(ushort *)(param_2 + 0x2e);
          if (iVar14 == 0) {
            uVar17 = 0;
          }
          else {
            uVar10 = uVar10 - *(short *)(iVar14 + 4);
            uVar17 = *(ushort *)(iVar14 + 8);
          }
          if (uVar17 < uVar10) {
            iVar15 = FUN_140737d0(iVar14,&local_38,7);
            if (iVar15 != 0) {
              param_4 = 0x11;
              break;
            }
            FUN_140735a8(iVar14);
            iVar14 = local_38;
          }
          iVar15 = *(int *)(param_2 + 0x20);
          while (iVar15 != 0) {
            iVar15 = FUN_14073a58(param_2 + 0x20);
            if (iVar15 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = *(undefined2 *)(iVar15 + 4);
            }
            if (iVar14 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = (uint)*(ushort *)(iVar14 + 4) + (uint)*(ushort *)(iVar14 + 6) + 0x30 + iVar14;
            }
            FUN_14073968(iVar15,iVar9);
            FUN_1407373c(iVar14,uVar11);
            FUN_140735a8(iVar15);
            iVar15 = *(int *)(param_2 + 0x20);
          }
        }
        if (bVar6) {
          if (*(ushort *)(param_2 + 0x2c) < *(ushort *)(param_2 + 0x2e)) {
            *(ushort *)(param_2 + 0x2c) = *(ushort *)(param_2 + 0x2e) - *(ushort *)(param_2 + 0x2c);
            FUN_14073790(iVar14);
          }
          else {
            *(undefined2 *)(param_2 + 0x2c) = 0;
          }
        }
        uVar16 = DAT_14065358;
        if (cVar1 == '\x03') {
          uVar16 = 0;
        }
        param_4 = FUN_1406d0c0(param_1,param_2,local_34,iVar14,uVar16);
        if (*(int *)(param_2 + 0x28) == 0) {
          FUN_140735a8(iVar14);
        }
switchD_14065110_caseD_5:
        if (param_4 != 0) break;
      }
      if (*DAT_14065354 == local_2c) {
        return;
      }
      goto LAB_1406541a;
    }
  }
  iVar14 = DAT_1406535c;
  iVar15 = *(int *)(param_2 + 0x28);
  while( true ) {
    while( true ) {
      FUN_1406d4d4(param_2);
      uVar12 = *(uint *)(param_2 + 0x28) & ~(1 << (param_1 & 0xff));
      *(uint *)(param_2 + 0x28) = uVar12;
      if (uVar12 == 0) break;
      uVar13 = (uint)*(byte *)(param_2 + 0x34);
      uVar12 = uVar13 & 1;
      if (iVar15 != 0) goto LAB_1406515c;
      if ((*(byte *)(param_2 + 0x34) & 1) != 0) goto LAB_14065170;
      FUN_1406cf54(param_1,param_2,0);
      iVar15 = *(int *)(param_2 + 0x28);
    }
    if (iVar15 == 0) break;
    uVar12 = 1;
    uVar13 = (uint)*(byte *)(param_2 + 0x34);
LAB_1406515c:
    if (-1 < (int)(uVar13 << 0x1d)) {
      iVar9 = FUN_14066098(*(undefined1 *)(param_2 + 0x13));
      if (iVar9 == 0) {
        (**(code **)*piVar8)
                  (param_1,*(undefined1 *)(param_2 + 0x13),*(undefined2 *)(param_2 + 0x16),param_4);
      }
      uVar13 = (uint)*(byte *)(param_2 + 0x34);
    }
    if ((uVar13 & 1) == 0) {
      param_4 = 0;
    }
    else {
      param_4 = 0x44;
    }
    if (uVar12 != 0) break;
    FUN_1406cf54(param_1,param_2,0);
    iVar15 = *(int *)(param_2 + 0x28);
    bVar3 = (byte)iVar15;
    bVar4 = (byte)((uint)iVar15 >> 8);
    bVar5 = (byte)((uint)iVar15 >> 0x10);
    bVar2 = (byte)((uint)iVar15 >> 0x18);
    param_1 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                       << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                    bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                      0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                      (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                       << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                    bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                      (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                       << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                    bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
    if (*(int *)(iVar14 + (param_1 + 0x22) * 4) != 0) {
      if (*DAT_14065354 == local_2c) {
        FUN_1406cdd0(param_1,param_2,0,0);
        return;
      }
      goto LAB_1406541a;
    }
    param_4 = 0x46;
  }
LAB_14065170:
  iVar14 = *(int *)(param_2 + 0x20);
  while (iVar14 != 0) {
    FUN_14073a58(param_2 + 0x20);
    FUN_140735a8();
    iVar14 = *(int *)(param_2 + 0x20);
  }
  iVar14 = FUN_14066098(*(undefined1 *)(param_2 + 0x13));
  if (iVar14 == 0) {
    uVar12 = param_1;
    if (iVar15 != 0) {
      uVar12 = 0xff;
    }
    (**(code **)*piVar8)
              (uVar12,*(undefined1 *)(param_2 + 0x13),*(undefined2 *)(param_2 + 0x16),param_4);
  }
  if (*DAT_14065354 == local_2c) {
    FUN_1406cf54(param_1,param_2,1,0);
    return;
  }
LAB_1406541a:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

