/* FUN_14023528 @ 0x14023528 */

/* WARNING: Control flow encountered bad instruction data */

undefined4
FUN_14023528(uint *param_1,uint *param_2,int param_3,undefined4 param_4,undefined1 param_5,
            undefined1 param_6,short param_7)

{
  short sVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  
  iVar7 = (int)param_7;
  if (param_2[9] == 0) {
    FUN_1401c2b8(param_2 + 2,param_2[1]);
  }
  else if (param_2[1] != 0) {
    func_0x1401c1e4(param_2 + 2,*param_2);
  }
  puVar14 = param_2 + 2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = FUN_1401c2f4(puVar14);
  func_0x13f4aa28(param_1,0,0x118);
  *(undefined1 *)((int)param_1 + 0x10f) = 0xf;
  *(undefined2 *)((int)param_1 + 0xf2) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x109) = 0xff;
  func_0x13f4aa28(param_1 + 8,0,0xd1);
  *(undefined1 *)((int)param_1 + 0x22) = 0xf;
  *(undefined1 *)((int)param_1 + 0x112) = param_5;
  *(undefined1 *)((int)param_1 + 0x113) = param_6;
  *(undefined1 *)(param_1 + 0x45) = param_6;
  *(undefined1 *)((int)param_1 + 0x115) = param_6;
  if (iVar7 == 0) {
    uVar5 = param_2[1];
    uVar4 = 5 - uVar5;
    uVar8 = 0;
    if ((int)uVar4 < 1) {
      uVar4 = *param_2;
    }
    else {
      if (uVar4 != 0x20) {
        uVar8 = *param_2 << (uVar4 & 0xff);
      }
      uVar4 = FUN_1401c128(puVar14);
      *param_2 = uVar4;
      uVar5 = param_2[1] + 0x20;
    }
    iVar15 = DAT_14023bf0;
    uVar5 = uVar5 - 5;
    uVar13 = *(uint *)(DAT_14023bf0 + 0x14);
    uVar8 = (uVar8 | uVar4 >> (uVar5 & 0xff)) & uVar13;
    param_2[1] = uVar5;
    if (uVar8 == 0x1f) {
      uVar8 = 6 - uVar5;
      if ((int)uVar8 < 1) {
        uVar8 = 0;
      }
      else {
        if (uVar8 == 0x20) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar4 << (uVar8 & 0xff);
        }
        uVar4 = FUN_1401c128(puVar14);
        *param_2 = uVar4;
        uVar5 = param_2[1] + 0x20;
      }
      uVar3 = *(uint *)(iVar15 + 0x18);
      param_2[1] = uVar5 - 6;
      uVar8 = ((uVar8 | uVar4 >> (uVar5 - 6 & 0xff)) & uVar3) + 0x20;
    }
    *(short *)((int)param_1 + 0xf2) = (short)uVar8;
    uVar8 = FUN_1402402c(param_2,(int)param_1 + 0x10f);
    param_1[0x3d] = uVar8;
    if ((uVar8 == 0) ||
       (((DAT_14023be8 < uVar8 && (*(short *)((int)param_1 + 0xf2) != 0x27)) ||
        (DAT_14023bec < uVar8)))) {
      return 0x401;
    }
    uVar4 = param_2[1];
    uVar8 = 4 - uVar4;
    if ((int)uVar8 < 1) {
      bVar6 = 0;
      uVar8 = *param_2;
    }
    else {
      if (uVar8 == 0x20) {
        bVar6 = 0;
      }
      else {
        bVar6 = (byte)(*param_2 << (uVar8 & 0xff));
      }
      uVar8 = FUN_1401c128(puVar14);
      *param_2 = uVar8;
      uVar4 = param_2[1] + 0x20;
    }
    param_2[1] = uVar4 - 4;
    iVar7 = (int)*(short *)((int)param_1 + 0xf2);
    bVar10 = (byte)*(undefined4 *)(iVar15 + 0x10);
    *(byte *)(param_1 + 0x42) = ((byte)(uVar8 >> (uVar4 - 4 & 0xff)) | bVar6) & bVar10;
    *(undefined1 *)((int)param_1 + 0x10d) = 0;
    *(undefined1 *)((int)param_1 + 0x10e) = 0;
    if (iVar7 == 5) {
      *(short *)(param_1 + 0x40) = *(short *)((int)param_1 + 0xf2);
      *(undefined1 *)((int)param_1 + 0x10d) = 1;
    }
    else {
      if (iVar7 != 0x1d) {
        *(undefined2 *)(param_1 + 0x40) = 0;
        goto LAB_140235b6;
      }
      *(undefined1 *)((int)param_1 + 0x10d) = 1;
      *(undefined2 *)(param_1 + 0x40) = 5;
      *(undefined1 *)((int)param_1 + 0x10e) = 1;
    }
    uVar8 = FUN_1402402c(param_2,param_1 + 0x44);
    param_1[0x41] = uVar8;
    uVar8 = param_2[1];
    uVar4 = 5 - uVar8;
    if ((int)uVar4 < 1) {
      uVar5 = 0;
      uVar4 = *param_2;
    }
    else {
      if (uVar4 == 0x20) {
        uVar5 = 0;
      }
      else {
        uVar5 = *param_2 << (uVar4 & 0xff);
      }
      uVar4 = FUN_1401c128(puVar14);
      *param_2 = uVar4;
      uVar8 = param_2[1] + 0x20;
    }
    uVar8 = uVar8 - 5;
    uVar13 = (uVar4 >> (uVar8 & 0xff) | uVar5) & uVar13;
    param_2[1] = uVar8;
    if (uVar13 == 0x1f) {
      uVar5 = 6 - uVar8;
      if ((int)uVar5 < 1) {
        uVar5 = 0;
      }
      else {
        if (uVar5 == 0x20) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar4 << (uVar5 & 0xff);
        }
        uVar4 = FUN_1401c128(puVar14);
        *param_2 = uVar4;
        uVar8 = param_2[1] + 0x20;
      }
      uVar13 = *(uint *)(iVar15 + 0x18);
      param_2[1] = uVar8 - 6;
      uVar13 = ((uVar4 >> (uVar8 - 6 & 0xff) | uVar5) & uVar13) + 0x20;
    }
    sVar1 = (short)uVar13;
    *(short *)((int)param_1 + 0xf2) = sVar1;
    if (sVar1 == 2) goto LAB_1402363e;
    if (sVar1 != 0x16) {
      return 0x402;
    }
    uVar4 = param_2[1];
    uVar8 = 4 - uVar4;
    if ((int)uVar8 < 1) {
      bVar6 = 0;
      uVar8 = *param_2;
    }
    else {
      if (uVar8 == 0x20) {
        bVar6 = 0;
      }
      else {
        bVar6 = (byte)(*param_2 << (uVar8 & 0xff));
      }
      uVar8 = FUN_1401c128(puVar14);
      *param_2 = uVar8;
      uVar4 = param_2[1] + 0x20;
    }
    param_2[1] = uVar4 - 4;
    iVar7 = (int)*(short *)((int)param_1 + 0xf2);
    *(byte *)((int)param_1 + 0x111) = ((byte)(uVar8 >> (uVar4 - 4 & 0xff)) | bVar6) & bVar10;
  }
  else {
    *(short *)((int)param_1 + 0xf2) = param_7;
  }
LAB_140235b6:
  switch(iVar7) {
  case 2:
  case 6:
  case 0x11:
  case 0x14:
  case 0x16:
  case 0x17:
    iVar15 = DAT_14023bf0;
    break;
  default:
    return 0x402;
  }
LAB_1402363e:
  uVar4 = param_2[1];
  uVar8 = 1 - uVar4;
  if ((int)uVar8 < 1) {
    uVar5 = 0;
    uVar8 = *param_2;
  }
  else {
    if (uVar8 == 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = *param_2 << (uVar8 & 0xff);
    }
    uVar8 = FUN_1401c128(puVar14);
    *param_2 = uVar8;
    uVar4 = param_2[1] + 0x20;
  }
  uVar13 = *(uint *)(iVar15 + 4);
  param_2[1] = uVar4 - 1;
  *param_1 = (uVar8 >> (uVar4 - 1 & 0xff) | uVar5) & uVar13;
  uVar8 = param_2[1];
  uVar4 = 1 - uVar8;
  if ((int)uVar4 < 1) {
    uVar4 = 0;
    uVar5 = *param_2;
  }
  else {
    if (uVar4 == 0x20) {
      uVar4 = 0;
    }
    else {
      uVar4 = *param_2 << (uVar4 & 0xff);
    }
    uVar5 = FUN_1401c128(puVar14);
    *param_2 = uVar5;
    uVar8 = param_2[1] + 0x20;
  }
  uVar4 = (uVar5 >> (uVar8 - 1 & 0xff) | uVar4) & uVar13;
  param_2[1] = uVar8 - 1;
  param_1[1] = uVar4;
  if (uVar4 != 0) {
    uVar8 = param_2[1];
    uVar4 = 0xe - uVar8;
    if ((int)uVar4 < 1) {
      uVar4 = 0;
      uVar5 = *param_2;
    }
    else {
      if (uVar4 == 0x20) {
        uVar4 = 0;
      }
      else {
        uVar4 = *param_2 << (uVar4 & 0xff);
      }
      uVar5 = FUN_1401c128(puVar14);
      *param_2 = uVar5;
      uVar8 = param_2[1] + 0x20;
    }
    param_2[1] = uVar8 - 0xe;
    param_1[2] = (uVar5 >> (uVar8 - 0xe & 0xff) | uVar4) & *(uint *)(iVar15 + 0x38);
  }
  uVar8 = param_2[1];
  uVar4 = 1 - uVar8;
  if ((int)uVar4 < 1) {
    uVar4 = 0;
    uVar5 = *param_2;
  }
  else {
    if (uVar4 == 0x20) {
      uVar4 = 0;
    }
    else {
      uVar4 = *param_2 << (uVar4 & 0xff);
    }
    uVar5 = FUN_1401c128(puVar14);
    *param_2 = uVar5;
    uVar8 = param_2[1] + 0x20;
  }
  param_2[1] = uVar8 - 1;
  param_1[3] = (uVar5 >> (uVar8 - 1 & 0xff) | uVar4) & uVar13;
  if ((char)param_1[0x42] == '\0') {
    FUN_14024a54(param_1 + 8,param_2,uVar2);
  }
  uVar8 = (uint)*(short *)((int)param_1 + 0xf2);
  bVar6 = (byte)uVar13;
  if ((uVar8 == 6) || (uVar8 == 0x14)) {
    uVar8 = param_2[1];
    uVar4 = 3 - uVar8;
    if ((int)uVar4 < 1) {
      uVar4 = 0;
      uVar5 = *param_2;
    }
    else {
      if (uVar4 == 0x20) {
        uVar4 = 0;
      }
      else {
        uVar4 = *param_2 << (uVar4 & 0xff);
      }
      uVar5 = FUN_1401c128(puVar14);
      *param_2 = uVar5;
      uVar8 = param_2[1] + 0x20;
    }
    param_2[1] = uVar8 - 3;
    uVar3 = param_1[3];
    param_1[5] = (uVar5 >> (uVar8 - 3 & 0xff) | uVar4) & *(uint *)(iVar15 + 0xc);
    uVar8 = (uint)*(short *)((int)param_1 + 0xf2);
  }
  else {
    uVar3 = param_1[3];
  }
  if (uVar3 != 0) {
    if (uVar8 == 0x16) {
      uVar8 = param_2[1];
      uVar4 = 5 - uVar8;
      if ((int)uVar4 < 1) {
        uVar4 = 0;
        uVar5 = *param_2;
      }
      else {
        if (uVar4 == 0x20) {
          uVar4 = 0;
        }
        else {
          uVar4 = *param_2 << (uVar4 & 0xff);
        }
        uVar5 = FUN_1401c128(puVar14);
        *param_2 = uVar5;
        uVar8 = param_2[1] + 0x20;
      }
      param_2[1] = uVar8 - 5;
      param_1[6] = (uVar5 >> (uVar8 - 5 & 0xff) | uVar4) & *(uint *)(iVar15 + 0x14);
      uVar8 = param_2[1];
      uVar4 = 0xb - uVar8;
      if ((int)uVar4 < 1) {
        uVar4 = 0;
        uVar5 = *param_2;
      }
      else {
        if (uVar4 == 0x20) {
          uVar4 = 0;
        }
        else {
          uVar4 = *param_2 << (uVar4 & 0xff);
        }
        uVar5 = FUN_1401c128(puVar14);
        *param_2 = uVar5;
        uVar8 = param_2[1] + 0x20;
      }
      param_2[1] = uVar8 - 0xb;
      param_1[7] = (uVar5 >> (uVar8 - 0xb & 0xff) | uVar4) & *(uint *)(iVar15 + 0x2c);
      uVar8 = (uint)*(short *)((int)param_1 + 0xf2);
    }
    if (((uVar8 & 0xffff) < 0x18) && ((~(0x9a0000U >> (uVar8 & 0xff)) & 1) == 0)) {
      uVar8 = param_2[1];
      uVar4 = 1 - uVar8;
      bVar10 = 0;
      if ((int)uVar4 < 1) {
        uVar4 = *param_2;
      }
      else {
        if (uVar4 != 0x20) {
          bVar10 = (byte)(*param_2 << (uVar4 & 0xff));
        }
        uVar4 = FUN_1401c128(puVar14);
        *param_2 = uVar4;
        uVar8 = param_2[1] + 0x20;
      }
      param_2[1] = uVar8 - 1;
      *(byte *)((int)param_1 + 0x10a) = ((byte)(uVar4 >> (uVar8 - 1 & 0xff)) | bVar10) & bVar6;
      uVar8 = param_2[1];
      uVar4 = 1 - uVar8;
      if ((int)uVar4 < 1) {
        bVar10 = 0;
        uVar4 = *param_2;
      }
      else {
        if (uVar4 == 0x20) {
          bVar10 = 0;
        }
        else {
          bVar10 = (byte)(*param_2 << (uVar4 & 0xff));
        }
        uVar4 = FUN_1401c128(puVar14);
        *param_2 = uVar4;
        uVar8 = param_2[1] + 0x20;
      }
      param_2[1] = uVar8 - 1;
      *(byte *)((int)param_1 + 0x10b) = ((byte)(uVar4 >> (uVar8 - 1 & 0xff)) | bVar10) & bVar6;
      uVar8 = param_2[1];
      uVar4 = 1 - uVar8;
      if ((int)uVar4 < 1) {
        bVar10 = 0;
        uVar4 = *param_2;
      }
      else {
        if (uVar4 == 0x20) {
          bVar10 = 0;
        }
        else {
          bVar10 = (byte)(*param_2 << (uVar4 & 0xff));
        }
        uVar4 = FUN_1401c128(puVar14);
        *param_2 = uVar4;
        uVar8 = param_2[1] + 0x20;
      }
      param_2[1] = uVar8 - 1;
      *(byte *)(param_1 + 0x43) = ((byte)(uVar4 >> (uVar8 - 1 & 0xff)) | bVar10) & bVar6;
    }
    uVar4 = param_2[1];
    uVar8 = 1 - uVar4;
    if ((int)uVar8 < 1) {
      uVar5 = 0;
      uVar3 = *param_2;
    }
    else {
      if (uVar8 == 0x20) {
        uVar5 = 0;
      }
      else {
        uVar5 = *param_2 << (uVar8 & 0xff);
      }
      uVar3 = FUN_1401c128(puVar14);
      *param_2 = uVar3;
      uVar4 = param_2[1] + 0x20;
    }
    param_2[1] = uVar4 - 1;
    uVar8 = (uint)*(short *)((int)param_1 + 0xf2);
    param_1[4] = (uVar3 >> (uVar4 - 1 & 0xff) | uVar5) & uVar13;
  }
  uVar4 = *param_1;
  switch(uVar8) {
  case 2:
  case 6:
  case 0x11:
  case 0x14:
  case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
  case 4:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  switch(uVar8) {
  case 0x11:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x12:
  case 0x13:
  case 0x15:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((param_3 != 0) &&
     ((*(short *)((int)param_1 + 0xf2) == 2 ||
      (((int)*(short *)((int)param_1 + 0xf2) - 0x16U & 0xffff) < 2)))) {
    if (param_2[9] == 0) {
      FUN_1401c2b8(puVar14,param_2[1]);
      uVar4 = extraout_r1;
    }
    else if (param_2[1] != 0) {
      func_0x1401c1e4(puVar14,*param_2);
      uVar4 = extraout_r1_00;
    }
    *param_2 = 0;
    param_2[1] = 0;
    iVar7 = FUN_1401c2f4(puVar14,uVar4);
    if (10 < iVar7) {
      uVar2 = *(undefined4 *)(iVar15 + 0x2c);
      uVar4 = param_2[1];
      uVar8 = 0xb - uVar4;
      uVar12 = 0xffff;
      if ((int)uVar8 < 1) goto LAB_14023b26;
LAB_14023a7c:
      if (uVar8 == 0x20) {
        iVar9 = 0;
      }
      else {
        iVar9 = *param_2 << (uVar8 & 0xff);
      }
      uVar8 = FUN_1401c128(puVar14);
      *param_2 = uVar8;
      uVar4 = param_2[1] + 0x20;
      iVar16 = iVar7;
      uVar11 = uVar12;
      do {
        uVar4 = uVar4 - 0xb;
        uVar12 = ((ushort)iVar9 | (ushort)(uVar8 >> (uVar4 & 0xff))) & (ushort)uVar2;
        param_2[1] = uVar4;
        iVar7 = iVar16 + -0xb;
        if (uVar12 == 0x7cb) {
          if ((short)param_1[0x40] == 0x2b) {
            uVar12 = 0x7cb;
          }
          else {
            uVar5 = 1 - uVar4;
            if ((int)uVar5 < 1) {
              uVar5 = 0;
            }
            else {
              if (uVar5 == 0x20) {
                uVar5 = 0;
              }
              else {
                uVar5 = uVar8 << (uVar5 & 0xff);
              }
              uVar8 = FUN_1401c128(puVar14);
              uVar4 = param_2[1] + 0x20;
              *param_2 = uVar8;
            }
            uVar4 = uVar4 - 1;
            param_2[1] = uVar4;
            if (((uVar8 >> (uVar4 & 0xff) | uVar5) & uVar13) != 0) {
              uVar5 = 8 - uVar4;
              if ((int)uVar5 < 1) {
                uVar5 = 0;
              }
              else {
                if (uVar5 == 0x20) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = uVar8 << (uVar5 & 0xff);
                }
                uVar8 = FUN_1401c128(puVar14);
                *param_2 = uVar8;
                uVar4 = param_2[1] + 0x20;
              }
              uVar4 = uVar4 - 8;
              uVar5 = (uVar8 >> (uVar4 & 0xff) | uVar5) & *(uint *)(iVar15 + 0x20);
              param_2[1] = uVar4;
              iVar7 = iVar16 + -0x13;
              if (uVar5 == 0xff) {
                uVar5 = 0x10 - uVar4;
                if ((int)uVar5 < 1) {
                  uVar5 = 0;
                }
                else {
                  if (uVar5 == 0x20) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = uVar8 << (uVar5 & 0xff);
                  }
                  uVar8 = FUN_1401c128(puVar14);
                  *param_2 = uVar8;
                  uVar4 = param_2[1] + 0x20;
                }
                uVar4 = uVar4 - 0x10;
                uVar3 = *(uint *)(iVar15 + 0x40);
                param_2[1] = uVar4;
                iVar7 = iVar16 + -0x23;
                uVar5 = ((uVar8 >> (uVar4 & 0xff) | uVar5) & uVar3) + 0xff;
              }
LAB_14023e7c:
              uVar8 = param_2[9];
              if (uVar5 < uVar4) {
                if (uVar8 != 0) {
LAB_14023ef4:
                  if (uVar4 != 0) {
                    func_0x1401c1e4(puVar14,*param_2,uVar4);
                    uVar8 = param_2[9];
                  }
                  goto LAB_14023ef8;
                }
                param_2[1] = uVar4 - uVar5;
              }
              else {
                if (uVar8 != 0) goto LAB_14023ef4;
                FUN_1401c2b8(puVar14);
                uVar8 = param_2[9];
LAB_14023ef8:
                *param_2 = 0;
                param_2[1] = 0;
                FUN_1401c2d4(puVar14,uVar5,uVar8 & 0xff);
              }
              iVar7 = iVar7 + uVar5 * -8;
            }
          }
        }
        else if ((short)uVar12 < 0x7cc) {
          if (uVar12 == 0x548) {
            if ((uVar11 == 0x2b7) && ((short)param_1[0x40] == 5)) {
              if (iVar7 == 0) {
                return 0;
              }
              uVar5 = 1 - uVar4;
              if ((int)uVar5 < 1) {
                bVar10 = 0;
              }
              else {
                if (uVar5 == 0x20) {
                  bVar10 = 0;
                }
                else {
                  bVar10 = (byte)(uVar8 << (uVar5 & 0xff));
                }
                uVar8 = FUN_1401c128(puVar14);
                *param_2 = uVar8;
                uVar4 = param_2[1] + 0x20;
              }
              param_2[1] = uVar4 - 1;
              uVar12 = 0x548;
              *(byte *)((int)param_1 + 0x10e) =
                   ((byte)(uVar8 >> (uVar4 - 1 & 0xff)) | bVar10) & bVar6;
              iVar7 = iVar16 + -0xc;
            }
          }
          else {
            if (uVar12 != 0x76a) {
              return 0;
            }
            if ((short)param_1[0x40] != 0x1e) goto LAB_14023ad0;
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
LAB_14023ad0:
            if (iVar7 == 0) {
              return 0;
            }
            uVar5 = 1 - uVar4;
            if ((int)uVar5 < 1) {
              uVar5 = 0;
            }
            else {
              if (uVar5 == 0x20) {
                uVar5 = 0;
              }
              else {
                uVar5 = uVar8 << (uVar5 & 0xff);
              }
              uVar8 = FUN_1401c128(puVar14);
              *param_2 = uVar8;
              uVar4 = param_2[1] + 0x20;
            }
            uVar4 = uVar4 - 1;
            param_2[1] = uVar4;
            if (((uVar8 >> (uVar4 & 0xff) | uVar5) & uVar13) != 0) {
              uVar5 = 8 - uVar4;
              if ((int)uVar5 < 1) {
                uVar5 = 0;
              }
              else {
                if (uVar5 == 0x20) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = uVar8 << (uVar5 & 0xff);
                }
                uVar8 = FUN_1401c128(puVar14);
                *param_2 = uVar8;
                uVar4 = param_2[1] + 0x20;
              }
              uVar4 = uVar4 - 8;
              uVar5 = (uVar8 >> (uVar4 & 0xff) | uVar5) & *(uint *)(iVar15 + 0x20);
              param_2[1] = uVar4;
              iVar7 = iVar16 + -0x14;
              if (uVar5 == 0xff) {
                uVar5 = 0x10 - uVar4;
                if ((int)uVar5 < 1) {
                  uVar5 = 0;
                }
                else {
                  if (uVar5 == 0x20) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = uVar8 << (uVar5 & 0xff);
                  }
                  uVar8 = FUN_1401c128(puVar14);
                  *param_2 = uVar8;
                  uVar4 = param_2[1] + 0x20;
                }
                uVar4 = uVar4 - 0x10;
                uVar3 = *(uint *)(iVar15 + 0x40);
                param_2[1] = uVar4;
                iVar7 = iVar16 + -0x24;
                uVar5 = ((uVar8 >> (uVar4 & 0xff) | uVar5) & uVar3) + 0xff;
              }
              goto LAB_14023e7c;
            }
            iVar7 = iVar16 + -0xc;
          }
        }
        if (iVar7 < 0xb) {
          return 0;
        }
        uVar4 = param_2[1];
        uVar8 = 0xb - uVar4;
        if (0 < (int)uVar8) goto LAB_14023a7c;
LAB_14023b26:
        iVar9 = 0;
        uVar8 = *param_2;
        iVar16 = iVar7;
        uVar11 = uVar12;
      } while( true );
    }
  }
  return 0;
}

