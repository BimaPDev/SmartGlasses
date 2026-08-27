/* FUN_2c4d6528 @ 0x2c4d6528 */

/* WARNING: Instruction at (ram,0x2c4e65e0) overlaps instruction at (ram,0x2c4e65de)
    */

undefined4
FUN_2c4d6528(uint *param_1,uint *param_2,int param_3,undefined4 param_4,undefined1 param_5,
            undefined1 param_6,short param_7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  uint *puVar14;
  ushort uVar15;
  int iVar16;
  
  iVar9 = (int)param_7;
  if (param_2[9] == 0) {
    FUN_2c4d766c(param_2 + 2,param_2[1]);
  }
  else if (param_2[1] != 0) {
    FUN_2c4d7598(param_2 + 2,*param_2);
  }
  puVar14 = param_2 + 2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = FUN_2c4d76a8(puVar14);
  FUN_2c674268(param_1,0,0x118);
  *(undefined2 *)((int)param_1 + 0xf2) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x109) = 0xff;
  *(undefined1 *)((int)param_1 + 0x10f) = 0xf;
  FUN_2c674268(param_1 + 8,0,0xd1);
  *(undefined1 *)((int)param_1 + 0x22) = 0xf;
  *(undefined1 *)((int)param_1 + 0x112) = param_5;
  *(undefined1 *)((int)param_1 + 0x113) = param_6;
  *(undefined1 *)(param_1 + 0x45) = param_6;
  *(undefined1 *)((int)param_1 + 0x115) = param_6;
  if (iVar9 == 0) {
    uVar7 = param_2[1];
    uVar4 = 5 - uVar7;
    uVar10 = 0;
    if ((int)uVar4 < 1) {
      uVar4 = *param_2;
    }
    else {
      if (uVar4 != 0x20) {
        uVar10 = *param_2 << (uVar4 & 0xff);
      }
      uVar4 = FUN_2c4d74d4(puVar14);
      *param_2 = uVar4;
      uVar7 = param_2[1] + 0x20;
    }
    iVar16 = DAT_2c4d6ba0;
    uVar7 = uVar7 - 5;
    uVar13 = *(uint *)(DAT_2c4d6ba0 + 0x14);
    param_2[1] = uVar7;
    uVar10 = (uVar10 | uVar4 >> (uVar7 & 0xff)) & uVar13;
    if (uVar10 == 0x1f) {
      uVar10 = 6 - uVar7;
      if ((int)uVar10 < 1) {
        uVar10 = 0;
      }
      else {
        if (uVar10 == 0x20) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar4 << (uVar10 & 0xff);
        }
        uVar4 = FUN_2c4d74d4(puVar14);
        *param_2 = uVar4;
        uVar7 = param_2[1] + 0x20;
      }
      param_2[1] = uVar7 - 6;
      uVar10 = ((uVar10 | uVar4 >> (uVar7 - 6 & 0xff)) & *(uint *)(iVar16 + 0x18)) + 0x20;
    }
    *(short *)((int)param_1 + 0xf2) = (short)uVar10;
    uVar10 = FUN_2c4d4a60(param_2,(int)param_1 + 0x10f);
    param_1[0x3d] = uVar10;
    if ((uVar10 == 0) ||
       (((DAT_2c4d6b98 < uVar10 && (*(short *)((int)param_1 + 0xf2) != 0x27)) ||
        (DAT_2c4d6b9c < uVar10)))) {
      return 0x401;
    }
    uVar4 = param_2[1];
    uVar10 = 4 - uVar4;
    if ((int)uVar10 < 1) {
      uVar10 = *param_2;
      bVar8 = 0;
    }
    else {
      if (uVar10 == 0x20) {
        bVar8 = 0;
      }
      else {
        bVar8 = (byte)(*param_2 << (uVar10 & 0xff));
      }
      uVar10 = FUN_2c4d74d4(puVar14);
      *param_2 = uVar10;
      uVar4 = param_2[1] + 0x20;
    }
    param_2[1] = uVar4 - 4;
    iVar9 = (int)*(short *)((int)param_1 + 0xf2);
    bVar11 = (byte)*(undefined4 *)(iVar16 + 0x10);
    *(byte *)(param_1 + 0x42) = ((byte)(uVar10 >> (uVar4 - 4 & 0xff)) | bVar8) & bVar11;
    *(undefined1 *)((int)param_1 + 0x10d) = 0;
    *(undefined1 *)((int)param_1 + 0x10e) = 0;
    if (iVar9 == 5) {
      *(short *)(param_1 + 0x40) = *(short *)((int)param_1 + 0xf2);
      *(undefined1 *)((int)param_1 + 0x10d) = 1;
    }
    else {
      if (iVar9 != 0x1d) {
        *(undefined2 *)(param_1 + 0x40) = 0;
        goto LAB_2c4d65b0;
      }
      *(undefined1 *)((int)param_1 + 0x10d) = 1;
      *(undefined1 *)((int)param_1 + 0x10e) = 1;
      *(undefined2 *)(param_1 + 0x40) = 5;
    }
    uVar10 = FUN_2c4d4a60(param_2,param_1 + 0x44);
    param_1[0x41] = uVar10;
    uVar10 = param_2[1];
    uVar4 = 5 - uVar10;
    if ((int)uVar4 < 1) {
      uVar4 = *param_2;
      uVar7 = 0;
    }
    else {
      if (uVar4 == 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = *param_2 << (uVar4 & 0xff);
      }
      uVar4 = FUN_2c4d74d4(puVar14);
      *param_2 = uVar4;
      uVar10 = param_2[1] + 0x20;
    }
    uVar10 = uVar10 - 5;
    param_2[1] = uVar10;
    uVar13 = uVar13 & (uVar4 >> (uVar10 & 0xff) | uVar7);
    if (uVar13 == 0x1f) {
      uVar7 = 6 - uVar10;
      if ((int)uVar7 < 1) {
        uVar7 = 0;
      }
      else {
        if (uVar7 == 0x20) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar4 << (uVar7 & 0xff);
        }
        uVar4 = FUN_2c4d74d4(puVar14);
        *param_2 = uVar4;
        uVar10 = param_2[1] + 0x20;
      }
      uVar13 = *(uint *)(iVar16 + 0x18);
      param_2[1] = uVar10 - 6;
      uVar13 = ((uVar4 >> (uVar10 - 6 & 0xff) | uVar7) & uVar13) + 0x20;
    }
    sVar1 = (short)uVar13;
    *(short *)((int)param_1 + 0xf2) = sVar1;
    if (sVar1 == 2) goto LAB_2c4d662c;
    if (sVar1 != 0x16) {
      return 0x402;
    }
    uVar4 = param_2[1];
    uVar10 = 4 - uVar4;
    if ((int)uVar10 < 1) {
      uVar10 = *param_2;
      bVar8 = 0;
    }
    else {
      if (uVar10 == 0x20) {
        bVar8 = 0;
      }
      else {
        bVar8 = (byte)(*param_2 << (uVar10 & 0xff));
      }
      uVar10 = FUN_2c4d74d4(puVar14);
      *param_2 = uVar10;
      uVar4 = param_2[1] + 0x20;
    }
    param_2[1] = uVar4 - 4;
    iVar9 = (int)*(short *)((int)param_1 + 0xf2);
    *(byte *)((int)param_1 + 0x111) = ((byte)(uVar10 >> (uVar4 - 4 & 0xff)) | bVar8) & bVar11;
  }
  else {
    *(short *)((int)param_1 + 0xf2) = param_7;
  }
LAB_2c4d65b0:
  switch(iVar9) {
  case 2:
  case 6:
  case 0x11:
  case 0x14:
  case 0x16:
  case 0x17:
    iVar16 = DAT_2c4d6ba0;
    break;
  default:
    return 0x402;
  }
LAB_2c4d662c:
  uVar4 = param_2[1];
  uVar10 = 1 - uVar4;
  if ((int)uVar10 < 1) {
    uVar10 = *param_2;
    uVar7 = 0;
  }
  else {
    if (uVar10 == 0x20) {
      uVar7 = 0;
    }
    else {
      uVar7 = *param_2 << (uVar10 & 0xff);
    }
    uVar10 = FUN_2c4d74d4(puVar14);
    *param_2 = uVar10;
    uVar4 = param_2[1] + 0x20;
  }
  param_2[1] = uVar4 - 1;
  uVar13 = *(uint *)(iVar16 + 4);
  *param_1 = (uVar10 >> (uVar4 - 1 & 0xff) | uVar7) & uVar13;
  uVar10 = param_2[1];
  uVar4 = 1 - uVar10;
  if ((int)uVar4 < 1) {
    uVar4 = *param_2;
    uVar7 = 0;
  }
  else {
    if (uVar4 == 0x20) {
      uVar7 = 0;
    }
    else {
      uVar7 = *param_2 << (uVar4 & 0xff);
    }
    uVar4 = FUN_2c4d74d4(puVar14);
    *param_2 = uVar4;
    uVar10 = param_2[1] + 0x20;
  }
  param_2[1] = uVar10 - 1;
  uVar10 = (uVar4 >> (uVar10 - 1 & 0xff) | uVar7) & uVar13;
  param_1[1] = uVar10;
  if (uVar10 != 0) {
    uVar4 = param_2[1];
    uVar10 = 0xe - uVar4;
    if ((int)uVar10 < 1) {
      uVar10 = *param_2;
      uVar7 = 0;
    }
    else {
      if (uVar10 == 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = *param_2 << (uVar10 & 0xff);
      }
      uVar10 = FUN_2c4d74d4(puVar14);
      *param_2 = uVar10;
      uVar4 = param_2[1] + 0x20;
    }
    param_2[1] = uVar4 - 0xe;
    param_1[2] = (uVar10 >> (uVar4 - 0xe & 0xff) | uVar7) & *(uint *)(iVar16 + 0x38);
  }
  uVar4 = param_2[1];
  uVar10 = 1 - uVar4;
  if ((int)uVar10 < 1) {
    uVar10 = *param_2;
    uVar7 = 0;
  }
  else {
    if (uVar10 == 0x20) {
      uVar7 = 0;
    }
    else {
      uVar7 = *param_2 << (uVar10 & 0xff);
    }
    uVar10 = FUN_2c4d74d4(puVar14);
    *param_2 = uVar10;
    uVar4 = param_2[1] + 0x20;
  }
  param_2[1] = uVar4 - 1;
  uVar10 = (uVar10 >> (uVar4 - 1 & 0xff) | uVar7) & uVar13;
  param_1[3] = uVar10;
  if ((char)param_1[0x42] == '\0') {
    uVar10 = FUN_2c4d4b5c(param_1 + 8,param_2,uVar2);
  }
  pcVar6 = (code *)(int)*(short *)((int)param_1 + 0xf2);
  if ((pcVar6 == (code *)&BusFault) || (pcVar6 == (code *)&DAT_00000006)) {
    uVar4 = param_2[1];
    uVar10 = 3 - uVar4;
    if ((int)uVar10 < 1) {
      uVar10 = *param_2;
      uVar7 = 0;
    }
    else {
      if (uVar10 == 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = *param_2 << (uVar10 & 0xff);
      }
      uVar10 = FUN_2c4d74d4(puVar14);
      *param_2 = uVar10;
      uVar4 = param_2[1] + 0x20;
    }
    param_2[1] = uVar4 - 3;
    uVar10 = (uVar10 >> (uVar4 - 3 & 0xff) | uVar7) & *(uint *)(iVar16 + 0xc);
    pcVar6 = (code *)(int)*(short *)((int)param_1 + 0xf2);
    param_1[5] = uVar10;
  }
  bVar8 = (byte)uVar13;
  if (param_1[3] != 0) {
    if (pcVar6 == (code *)0x16) {
      uVar10 = param_2[1];
      uVar4 = 5 - uVar10;
      if ((int)uVar4 < 1) {
        uVar4 = *param_2;
        uVar7 = 0;
      }
      else {
        if (uVar4 == 0x20) {
          uVar7 = 0;
        }
        else {
          uVar7 = *param_2 << (uVar4 & 0xff);
        }
        uVar4 = FUN_2c4d74d4(puVar14);
        *param_2 = uVar4;
        uVar10 = param_2[1] + 0x20;
      }
      param_2[1] = uVar10 - 5;
      param_1[6] = (uVar4 >> (uVar10 - 5 & 0xff) | uVar7) & *(uint *)(iVar16 + 0x14);
      uVar10 = param_2[1];
      uVar4 = 0xb - uVar10;
      if ((int)uVar4 < 1) {
        uVar4 = *param_2;
        uVar7 = 0;
      }
      else {
        if (uVar4 == 0x20) {
          uVar7 = 0;
        }
        else {
          uVar7 = *param_2 << (uVar4 & 0xff);
        }
        uVar4 = FUN_2c4d74d4(puVar14);
        *param_2 = uVar4;
        uVar10 = param_2[1] + 0x20;
      }
      param_2[1] = uVar10 - 0xb;
      param_1[7] = (uVar4 >> (uVar10 - 0xb & 0xff) | uVar7) & *(uint *)(iVar16 + 0x2c);
      pcVar6 = (code *)(int)*(short *)((int)param_1 + 0xf2);
    }
    if ((((uint)pcVar6 & 0xffff) < 0x18) && ((~(0x9a0000U >> ((uint)pcVar6 & 0xff)) & 1) == 0)) {
      uVar10 = param_2[1];
      uVar4 = 1 - uVar10;
      bVar11 = 0;
      if ((int)uVar4 < 1) {
        uVar4 = *param_2;
      }
      else {
        if (uVar4 != 0x20) {
          bVar11 = (byte)(*param_2 << (uVar4 & 0xff));
        }
        uVar4 = FUN_2c4d74d4(puVar14);
        *param_2 = uVar4;
        uVar10 = param_2[1] + 0x20;
      }
      param_2[1] = uVar10 - 1;
      *(byte *)((int)param_1 + 0x10a) = ((byte)(uVar4 >> (uVar10 - 1 & 0xff)) | bVar11) & bVar8;
      uVar4 = param_2[1];
      uVar10 = 1 - uVar4;
      if ((int)uVar10 < 1) {
        uVar10 = *param_2;
        bVar11 = 0;
      }
      else {
        if (uVar10 == 0x20) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)(*param_2 << (uVar10 & 0xff));
        }
        uVar10 = FUN_2c4d74d4(puVar14);
        *param_2 = uVar10;
        uVar4 = param_2[1] + 0x20;
      }
      param_2[1] = uVar4 - 1;
      *(byte *)((int)param_1 + 0x10b) = ((byte)(uVar10 >> (uVar4 - 1 & 0xff)) | bVar11) & bVar8;
      uVar4 = param_2[1];
      uVar10 = 1 - uVar4;
      if ((int)uVar10 < 1) {
        uVar10 = *param_2;
        bVar11 = 0;
      }
      else {
        if (uVar10 == 0x20) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)(*param_2 << (uVar10 & 0xff));
        }
        uVar10 = FUN_2c4d74d4(puVar14);
        *param_2 = uVar10;
        uVar4 = param_2[1] + 0x20;
      }
      param_2[1] = uVar4 - 1;
      *(byte *)(param_1 + 0x43) = ((byte)(uVar10 >> (uVar4 - 1 & 0xff)) | bVar11) & bVar8;
    }
    uVar4 = param_2[1];
    uVar10 = 1 - uVar4;
    if ((int)uVar10 < 1) {
      uVar10 = *param_2;
      uVar7 = 0;
    }
    else {
      if (uVar10 == 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = *param_2 << (uVar10 & 0xff);
      }
      uVar10 = FUN_2c4d74d4(puVar14);
      *param_2 = uVar10;
      uVar4 = param_2[1] + 0x20;
    }
    param_2[1] = uVar4 - 1;
    pcVar6 = (code *)(int)*(short *)((int)param_1 + 0xf2);
    uVar10 = (uVar10 >> (uVar4 - 1 & 0xff) | uVar7) & uVar13;
    param_1[4] = uVar10;
  }
  uVar4 = *param_1;
  switch(pcVar6) {
  case (code *)0x2:
  case (code *)0x6:
  case (code *)0x11:
  case (code *)0x14:
  case (code *)0x16:
    (*pcVar6)();
    return DAT_2c4e6938;
  case (code *)0x3:
  case (code *)0x4:
  case (code *)0x5:
  case (code *)0x7:
  case (code *)0x8:
  case (code *)0x9:
  case (code *)0xa:
  case (code *)0xb:
  case (code *)0xc:
  case (code *)0xd:
  case (code *)0xe:
  case (code *)0xf:
  case (code *)0x10:
  case (code *)0x12:
  case (code *)0x13:
  case (code *)0x15:
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x24,DAT_2c4e6934,DAT_2c4e6930,DAT_2c4e692c,DAT_2c4e6928,*param_2);
  case (code *)0x17:
    goto switchD_2c4d67d8_caseD_17;
  default:
    switch(pcVar6) {
    case (code *)0x11:
    case (code *)0x14:
    case (code *)0x16:
    case (code *)0x17:
    case (code *)0x18:
    case (code *)0x19:
    case (code *)0x27:
      break;
    case (code *)0x12:
    case (code *)0x13:
    case (code *)0x15:
    case (code *)0x1a:
    case (code *)0x1b:
    case (code *)0x1c:
    case (code *)0x1d:
    case (code *)0x1e:
    case (code *)0x1f:
    case (code *)0x20:
    case (code *)0x21:
    case (code *)0x22:
    case (code *)0x23:
    case (code *)0x24:
    case (code *)0x25:
    case (code *)0x26:
                    /* WARNING: Subroutine does not return */
      TRACE(uVar10,0x38,DAT_2c4e6a50,DAT_2c4e6a4c,DAT_2c4e6a48,DAT_2c4e6a44,param_2);
    default:
      if ((param_3 != 0) &&
         ((((int)*(short *)((int)param_1 + 0xf2) - 0x16U & 0xffff) < 2 ||
          (*(short *)((int)param_1 + 0xf2) == 2)))) {
        if (param_2[9] == 0) {
          FUN_2c4d766c(puVar14,param_2[1]);
          uVar4 = extraout_r1;
        }
        else if (param_2[1] != 0) {
          FUN_2c4d7598(puVar14,*param_2);
          uVar4 = extraout_r1_00;
        }
        *param_2 = 0;
        param_2[1] = 0;
        iVar9 = FUN_2c4d76a8(puVar14,uVar4);
        if (10 < iVar9) {
          uVar2 = *(undefined4 *)(iVar16 + 0x2c);
          uVar15 = 0xffff;
          do {
            uVar4 = param_2[1];
            uVar10 = 0xb - uVar4;
            if ((int)uVar10 < 1) {
              uVar10 = *param_2;
              uVar12 = 0;
            }
            else {
              if (uVar10 == 0x20) {
                uVar12 = 0;
              }
              else {
                uVar12 = (ushort)(*param_2 << (uVar10 & 0xff));
              }
              uVar10 = FUN_2c4d74d4(puVar14);
              *param_2 = uVar10;
              uVar4 = param_2[1] + 0x20;
            }
            uVar4 = uVar4 - 0xb;
            param_2[1] = uVar4;
            iVar3 = iVar9 + -0xb;
            uVar12 = (uVar12 | (ushort)(uVar10 >> (uVar4 & 0xff))) & (ushort)uVar2;
            if (uVar12 == 0x7cb) {
              if ((short)param_1[0x40] == 0x2b) {
                uVar12 = 0x7cb;
              }
              else {
                uVar7 = 1 - uVar4;
                if ((int)uVar7 < 1) {
                  uVar7 = 0;
                }
                else {
                  if (uVar7 == 0x20) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar10 << (uVar7 & 0xff);
                  }
                  uVar10 = FUN_2c4d74d4(puVar14);
                  uVar4 = param_2[1] + 0x20;
                  *param_2 = uVar10;
                }
                uVar4 = uVar4 - 1;
                param_2[1] = uVar4;
                if (((uVar10 >> (uVar4 & 0xff) | uVar7) & uVar13) != 0) {
                  uVar7 = 8 - uVar4;
                  if ((int)uVar7 < 1) {
                    uVar7 = 0;
                  }
                  else {
                    if (uVar7 == 0x20) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = uVar10 << (uVar7 & 0xff);
                    }
                    uVar10 = FUN_2c4d74d4(puVar14);
                    *param_2 = uVar10;
                    uVar4 = param_2[1] + 0x20;
                  }
                  uVar4 = uVar4 - 8;
                  param_2[1] = uVar4;
                  uVar7 = (uVar10 >> (uVar4 & 0xff) | uVar7) & *(uint *)(iVar16 + 0x20);
                  iVar3 = iVar9 + -0x13;
                  if (uVar7 == 0xff) {
                    uVar7 = 0x10 - uVar4;
                    if ((int)uVar7 < 1) {
                      uVar7 = 0;
                    }
                    else {
                      if (uVar7 == 0x20) {
                        uVar7 = 0;
                      }
                      else {
                        uVar7 = uVar10 << (uVar7 & 0xff);
                      }
                      uVar10 = FUN_2c4d74d4(puVar14);
                      *param_2 = uVar10;
                      uVar4 = param_2[1] + 0x20;
                    }
                    uVar4 = uVar4 - 0x10;
                    iVar3 = iVar9 + -0x23;
                    uVar5 = *(uint *)(iVar16 + 0x40);
                    param_2[1] = uVar4;
                    uVar7 = ((uVar10 >> (uVar4 & 0xff) | uVar7) & uVar5) + 0xff;
                  }
LAB_2c4d6e02:
                  uVar10 = param_2[9];
                  if (uVar7 < uVar4) {
                    if (uVar10 != 0) {
LAB_2c4d6e7c:
                      if (uVar4 != 0) {
                        FUN_2c4d7598(puVar14,*param_2,uVar4);
                        uVar10 = param_2[9];
                      }
                      goto LAB_2c4d6e80;
                    }
                    param_2[1] = uVar4 - uVar7;
                  }
                  else {
                    if (uVar10 != 0) goto LAB_2c4d6e7c;
                    FUN_2c4d766c(puVar14);
                    uVar10 = param_2[9];
LAB_2c4d6e80:
                    *param_2 = 0;
                    param_2[1] = 0;
                    FUN_2c4d768c(puVar14,uVar7,uVar10 & 0xff);
                  }
                  iVar3 = iVar3 + uVar7 * -8;
                }
              }
            }
            else if ((short)uVar12 < 0x7cc) {
              if (uVar12 == 0x548) {
                if ((uVar15 == 0x2b7) && ((short)param_1[0x40] == 5)) {
                  if (iVar3 == 0) {
                    return 0;
                  }
                  uVar7 = 1 - uVar4;
                  if ((int)uVar7 < 1) {
                    bVar11 = 0;
                  }
                  else {
                    if (uVar7 == 0x20) {
                      bVar11 = 0;
                    }
                    else {
                      bVar11 = (byte)(uVar10 << (uVar7 & 0xff));
                    }
                    uVar10 = FUN_2c4d74d4(puVar14);
                    *param_2 = uVar10;
                    uVar4 = param_2[1] + 0x20;
                  }
                  iVar3 = iVar9 + -0xc;
                  uVar12 = 0x548;
                  param_2[1] = uVar4 - 1;
                  *(byte *)((int)param_1 + 0x10e) =
                       ((byte)(uVar10 >> (uVar4 - 1 & 0xff)) | bVar11) & bVar8;
                }
              }
              else {
                if (uVar12 != 0x76a) {
                  return 0;
                }
                if ((short)param_1[0x40] != 0x1e) goto LAB_2c4d6a42;
              }
            }
            else {
              if (uVar12 != 0x7cc) {
                return 0;
              }
              if ((short)param_1[0x40] == 0x2c) {
                uVar12 = 0x7cc;
              }
              else {
LAB_2c4d6a42:
                if (iVar3 == 0) {
                  return 0;
                }
                uVar7 = 1 - uVar4;
                if ((int)uVar7 < 1) {
                  uVar7 = 0;
                }
                else {
                  if (uVar7 == 0x20) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar10 << (uVar7 & 0xff);
                  }
                  uVar10 = FUN_2c4d74d4(puVar14);
                  *param_2 = uVar10;
                  uVar4 = param_2[1] + 0x20;
                }
                uVar4 = uVar4 - 1;
                param_2[1] = uVar4;
                if (((uVar10 >> (uVar4 & 0xff) | uVar7) & uVar13) != 0) {
                  uVar7 = 8 - uVar4;
                  if ((int)uVar7 < 1) {
                    uVar7 = 0;
                  }
                  else {
                    if (uVar7 == 0x20) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = uVar10 << (uVar7 & 0xff);
                    }
                    uVar10 = FUN_2c4d74d4(puVar14);
                    *param_2 = uVar10;
                    uVar4 = param_2[1] + 0x20;
                  }
                  uVar4 = uVar4 - 8;
                  param_2[1] = uVar4;
                  uVar7 = (uVar10 >> (uVar4 & 0xff) | uVar7) & *(uint *)(iVar16 + 0x20);
                  iVar3 = iVar9 + -0x14;
                  if (uVar7 == 0xff) {
                    uVar7 = 0x10 - uVar4;
                    if ((int)uVar7 < 1) {
                      uVar10 = 0;
                    }
                    else {
                      if (uVar7 == 0x20) {
                        uVar10 = 0;
                      }
                      else {
                        uVar10 = uVar10 << (uVar7 & 0xff);
                      }
                      uVar4 = FUN_2c4d74d4(puVar14);
                      *param_2 = uVar4;
                      uVar4 = param_2[1] + 0x20;
                      param_2[1] = uVar4;
                    }
                    uVar4 = uVar4 - 0x10;
                    iVar3 = iVar9 + -0x24;
                    param_2[1] = uVar4;
                    uVar7 = ((*param_2 >> (uVar4 & 0xff) | uVar10) & *(uint *)(iVar16 + 0x40)) +
                            0xff;
                  }
                  goto LAB_2c4d6e02;
                }
                iVar3 = iVar9 + -0xc;
              }
            }
            iVar9 = iVar3;
            uVar15 = uVar12;
          } while (10 < iVar3);
        }
      }
      return 0;
    }
switchD_2c4d67d8_caseD_17:
    FUN_2c4e6530(param_2[2]);
    FUN_2c4e6530(param_2[3]);
    uVar2 = FUN_2c4c3340(param_2);
    return uVar2;
  }
}

