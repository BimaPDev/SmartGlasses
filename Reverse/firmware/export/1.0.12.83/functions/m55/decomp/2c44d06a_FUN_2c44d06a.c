/* FUN_2c44d06a @ 0x2c44d06a */

/* WARNING: Control flow encountered bad instruction data */

int FUN_2c44d06a(uint param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                int param_6,undefined4 *param_7,uint param_8,uint param_9,byte *param_10,
                uint param_11,int param_12,int param_13,undefined4 *param_14,undefined4 param_15,
                uint param_16,uint param_17,uint param_18,uint param_19,uint param_20,uint param_21,
                uint param_22,uint param_23,uint param_24,uint param_25,uint param_26)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_r4;
  byte *pbVar8;
  int unaff_r5;
  int unaff_r6;
  uint *unaff_r7;
  uint uVar9;
  undefined4 unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  int iVar10;
  uint unaff_lr;
  char in_CY;
  undefined4 unaff_s16;
  int in_stack_00000170;
  
  if (in_CY != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_2c4d4248:
  unaff_r4[1] = param_3 - 8;
  unaff_r7[1] = (param_4 | param_1 >> (param_3 - 8 & 0xff)) & *(uint *)(unaff_r6 + 0x20);
  if ((((*(char *)(unaff_r5 + 0x1f) == '\0') && (unaff_r9 != 0)) &&
      ((*(short *)(param_13 + 0xf2) == 0x14 || (*(short *)(param_13 + 0xf2) == 6)))) &&
     ((*(ushort *)(param_13 + -0x26) & 0xffef) == 8)) {
    uVar7 = unaff_r4[1];
    if (0 < (int)(6 - uVar7)) {
      uVar7 = FUN_2c4d74d4(unaff_r8);
      *unaff_r4 = uVar7;
      uVar7 = unaff_r4[1] + 0x20;
    }
    unaff_r4[1] = uVar7 - 6;
  }
LAB_2c4d404e:
  unaff_r9 = unaff_r9 + 1;
  unaff_r7 = unaff_r7 + 4;
  param_9 = param_9 + 1;
  param_13 = param_13 + 0x118;
  if (*param_10 <= unaff_r9) {
LAB_2c4d406e:
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    if (param_11 < *(byte *)(unaff_r5 + 0x21)) {
      uVar7 = unaff_r4[1];
      uVar6 = 3 - uVar7;
      if ((int)uVar6 < 1) {
        uVar6 = *unaff_r4;
        uVar9 = 0;
      }
      else {
        if (uVar6 == 0x20) {
          uVar9 = 0;
        }
        else {
          uVar9 = *unaff_r4 << (uVar6 & 0xff);
        }
        uVar6 = FUN_2c4d74d4();
        *unaff_r4 = uVar6;
        uVar7 = unaff_r4[1] + 0x20;
      }
      unaff_r4[1] = uVar7 - 3;
      uVar7 = ((uVar6 >> (uVar7 - 3 & 0xff) | uVar9) & param_8) + 1;
      uVar6 = uVar7 & 0xff;
      *param_10 = (byte)uVar7;
      if (uVar6 < 2) goto code_r0x2c4d3f5a;
      iVar10 = 0x402;
    }
    else {
      uVar6 = unaff_r4[1];
      uVar7 = 1 - uVar6;
      if ((int)uVar7 < 1) {
        uVar7 = *unaff_r4;
        uVar9 = 0;
      }
      else {
        if (uVar7 == 0x20) {
          uVar9 = 0;
        }
        else {
          uVar9 = *unaff_r4 << (uVar7 & 0xff);
        }
        uVar7 = FUN_2c4d74d4(unaff_r4 + 2);
        *unaff_r4 = uVar7;
        uVar6 = unaff_r4[1] + 0x20;
      }
      unaff_r4[1] = uVar6 - 1;
      uVar2 = 0;
      *(undefined4 *)(unaff_r5 + 0x14) = 0;
      uVar7 = (uVar7 >> (uVar6 - 1 & 0xff) | uVar9) & unaff_lr;
      *(char *)(unaff_r5 + 0x23) = (char)uVar7;
      if ((uVar7 & 0xff) != 0) {
        if (*(char *)(unaff_r5 + 0x1d) == '\x01') {
          uVar2 = FUN_2c4d3c94();
          *(uint *)(unaff_r5 + 0x14) = uVar2;
        }
        else {
          uVar7 = *(uint *)(unaff_r6 + 0x20);
          do {
            *(uint *)(unaff_r5 + 0x14) = uVar2 << 8;
            uVar9 = unaff_r4[1];
            uVar6 = 1 - uVar9;
            if ((int)uVar6 < 1) {
              uVar2 = *unaff_r4;
              uVar6 = 0;
            }
            else {
              if (uVar6 == 0x20) {
                uVar6 = 0;
              }
              else {
                uVar6 = *unaff_r4 << (uVar6 & 0xff);
              }
              uVar2 = FUN_2c4d74d4(unaff_r4 + 2);
              *unaff_r4 = uVar2;
              uVar9 = unaff_r4[1] + 0x20;
            }
            uVar9 = uVar9 - 1;
            uVar4 = uVar2 >> (uVar9 & 0xff);
            unaff_r4[1] = uVar9;
            uVar5 = 8 - uVar9;
            if ((int)uVar5 < 1) {
              uVar5 = 0;
            }
            else {
              if (uVar5 == 0x20) {
                uVar5 = 0;
              }
              else {
                uVar5 = uVar2 << (uVar5 & 0xff);
              }
              uVar2 = FUN_2c4d74d4(unaff_r4 + 2);
              *unaff_r4 = uVar2;
              uVar9 = unaff_r4[1] + 0x20;
            }
            unaff_r4[1] = uVar9 - 8;
            uVar2 = ((uVar2 >> (uVar9 - 8 & 0xff) | uVar5) & uVar7) + *(int *)(unaff_r5 + 0x14);
            *(uint *)(unaff_r5 + 0x14) = uVar2;
          } while (((uVar6 | uVar4) & unaff_lr) != 0);
        }
        if (*(uint *)(unaff_r5 + 0x18) < uVar2 >> 3) goto LAB_2c4d418e;
      }
      uVar6 = unaff_r4[1];
      uVar7 = 1 - uVar6;
      if ((int)uVar7 < 1) {
        uVar7 = *unaff_r4;
        uVar9 = 0;
      }
      else {
        if (uVar7 == 0x20) {
          uVar9 = 0;
        }
        else {
          uVar9 = *unaff_r4 << (uVar7 & 0xff);
        }
        uVar7 = FUN_2c4d74d4(unaff_r4 + 2);
        *unaff_r4 = uVar7;
        uVar6 = unaff_r4[1] + 0x20;
      }
      unaff_r4[1] = uVar6 - 1;
      uVar7 = (uVar7 >> (uVar6 - 1 & 0xff) | uVar9) & unaff_lr;
      *(char *)(unaff_r5 + 0x24) = (char)uVar7;
      if ((uVar7 & 0xff) != 0) {
        uVar7 = unaff_r4[1];
        if (0 < (int)(8 - uVar7)) {
          uVar7 = FUN_2c4d74d4(unaff_r4 + 2);
          *unaff_r4 = uVar7;
          uVar7 = unaff_r4[1] + 0x20;
          unaff_r4[1] = uVar7;
        }
        unaff_r4[1] = uVar7 - 8;
      }
      uVar7 = (uint)*(byte *)(unaff_r5 + 0x21);
      if (uVar7 == 0) {
LAB_2c4d445e:
        if (param_12 == 2) {
          iVar10 = 0;
          *(undefined1 *)(unaff_r5 + 0x27) = 0;
        }
        else {
          iVar10 = 0;
        }
        goto LAB_2c4d3e2a;
      }
      uVar6 = 0;
      pbVar8 = (byte *)(unaff_r5 + 0x22);
      while (*pbVar8 == 0) {
LAB_2c4d44e6:
        uVar6 = uVar6 + 1;
        pbVar8 = pbVar8 + 1;
        if (uVar7 <= uVar6) goto LAB_2c4d445e;
      }
      uVar7 = 0;
      iVar10 = uVar6 * 0x118 + param_6;
      while (unaff_r11 == 0) {
LAB_2c4d44ca:
        *param_7 = 1;
LAB_2c4d44d0:
        uVar7 = uVar7 + 1;
        iVar10 = iVar10 + 0x118;
        if (*pbVar8 <= uVar7) {
          uVar7 = (uint)*(byte *)(unaff_r5 + 0x21);
          goto LAB_2c4d44e6;
        }
      }
      iVar3 = (*(code *)*param_14)
                        (param_14[1],iVar10,*(undefined1 *)(iVar10 + 0x112),iVar10 + 0x113);
      if (iVar3 != 0x203) {
        if (iVar3 == 0) goto LAB_2c4d44ca;
        *param_7 = 0;
        if (uVar7 == 0) {
          iVar10 = 0x102;
          goto LAB_2c4d3e18;
        }
        goto LAB_2c4d44d0;
      }
      iVar10 = 0x203;
      *param_7 = 0;
    }
    goto LAB_2c4d3e18;
  }
  goto LAB_2c4d3f7e;
code_r0x2c4d3f5a:
  if (uVar6 != 0) goto code_r0x2c4d3f60;
  goto LAB_2c4d406e;
code_r0x2c4d3f60:
  unaff_r9 = 0;
  unaff_r7 = (uint *)(unaff_r5 + param_11 * 0x10);
  param_13 = param_11 * 0x118 + param_6;
  unaff_r8 = unaff_s16;
LAB_2c4d3f7e:
  unaff_r7[2] = param_9;
  unaff_r7[3] = 0;
  if (param_11 != 0 || unaff_r9 != 0) {
    uVar7 = unaff_r4[1];
    uVar6 = 1 - uVar7;
    if ((int)uVar6 < 1) {
      uVar9 = *unaff_r4;
      uVar6 = 0;
    }
    else {
      if (uVar6 == 0x20) {
        uVar6 = 0;
      }
      else {
        uVar6 = *unaff_r4 << (uVar6 & 0xff);
      }
      uVar9 = FUN_2c4d74d4(unaff_r8);
      *unaff_r4 = uVar9;
      uVar7 = unaff_r4[1] + 0x20;
    }
    unaff_r4[1] = uVar7 - 1;
    if (((uVar9 >> (uVar7 - 1 & 0xff) | uVar6) & unaff_lr) != 0) {
      if (unaff_r9 == 0) goto LAB_2c4d418e;
      FUN_2c674668(param_13,param_13 + -0x118,0x118);
      uVar7 = unaff_r4[1];
      goto LAB_2c4d3fd0;
    }
  }
  if (*(char *)(unaff_r5 + 0x1d) == '\x01') {
    uVar6 = FUN_2c4d3c94();
    if (unaff_r4[9] == 0) {
      FUN_2c4d766c(unaff_r8,unaff_r4[1]);
    }
    else if (unaff_r4[1] != 0) {
      FUN_2c4d7598(unaff_r8,*unaff_r4);
    }
    *unaff_r4 = 0;
    unaff_r4[1] = 0;
    uVar7 = FUN_2c4d76a8(unaff_r8);
    if (uVar7 < uVar6) {
LAB_2c4d418e:
      iVar10 = 0x401;
LAB_2c4d3e18:
      uVar1 = *(undefined1 *)(unaff_r5 + 0x27);
      FUN_2c674268(unaff_r5,0,0x2c);
      *(undefined1 *)(unaff_r5 + 0x27) = uVar1;
LAB_2c4d3e2a:
      if (*DAT_2c4d3ec0 == in_stack_00000170) {
        return iVar10;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    if (unaff_r4[9] == 0) {
      FUN_2c4d766c(unaff_r8,unaff_r4[1]);
    }
    else if (unaff_r4[1] != 0) {
      FUN_2c4d7598(unaff_r8,*unaff_r4);
    }
    *unaff_r4 = 0;
    unaff_r4[1] = 0;
    param_16 = *unaff_r4;
    param_17 = unaff_r4[1];
    param_19 = unaff_r4[3];
    param_20 = unaff_r4[4];
    param_21 = unaff_r4[5];
    param_22 = unaff_r4[6];
    param_23 = unaff_r4[7];
    param_24 = unaff_r4[8];
    param_25 = unaff_r4[9];
    param_26 = unaff_r4[10];
    param_18 = uVar6;
    if (*(char *)(unaff_r5 + 0x27) == '\0') {
      iVar10 = FUN_2c4d6528(&stack0x00000058,&param_16,1,param_14,param_12,param_5,0);
    }
    else {
      iVar10 = FUN_2c4d6528(param_13,&param_16,1,param_14,param_12,param_5,0);
    }
    if (iVar10 != 0) goto LAB_2c4d3e18;
    if (param_25 == 0) {
      FUN_2c4d766c(&param_18,param_17);
    }
    else if (param_17 != 0) {
      FUN_2c4d7598(&param_18,param_16);
    }
    param_16 = 0;
    param_17 = 0;
    iVar10 = FUN_2c4d76a8(&param_18);
    if (iVar10 < 0) goto LAB_2c4d418e;
    uVar7 = unaff_r4[1];
    uVar9 = unaff_r4[9];
    if (uVar6 < uVar7) {
      if (uVar9 == 0) {
        uVar7 = uVar7 - uVar6;
        unaff_r4[1] = uVar7;
        goto LAB_2c4d3fc2;
      }
LAB_2c4d4392:
      if (uVar7 != 0) {
        FUN_2c4d7598(unaff_r8,*unaff_r4,uVar7);
        uVar9 = unaff_r4[9];
      }
    }
    else {
      if (uVar9 != 0) goto LAB_2c4d4392;
      FUN_2c4d766c(unaff_r8);
      uVar9 = unaff_r4[9];
    }
    *unaff_r4 = 0;
    unaff_r4[1] = 0;
    FUN_2c4d768c(unaff_r8,uVar6,uVar9 & 0xff);
    uVar7 = unaff_r4[1];
  }
  else {
    if (*(char *)(unaff_r5 + 0x27) == '\0') {
      iVar10 = FUN_2c4d6528(&stack0x00000058);
    }
    else {
      iVar10 = FUN_2c4d6528(param_13);
    }
    if (iVar10 != 0) goto LAB_2c4d3e18;
    uVar7 = unaff_r4[1];
  }
LAB_2c4d3fc2:
  unaff_r11 = (uint)*(byte *)(unaff_r5 + 0x27);
  if (unaff_r11 != 0) {
    unaff_r11 = 1;
  }
LAB_2c4d3fd0:
  uVar6 = 3 - uVar7;
  if ((int)uVar6 < 1) {
    uVar9 = *unaff_r4;
    uVar6 = 0;
  }
  else {
    if (uVar6 == 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = *unaff_r4 << (uVar6 & 0xff);
    }
    uVar9 = FUN_2c4d74d4(unaff_r8);
    *unaff_r4 = uVar9;
    uVar7 = unaff_r4[1] + 0x20;
  }
  unaff_r4[1] = uVar7 - 3;
  uVar7 = (uVar9 >> (uVar7 - 3 & 0xff) | uVar6) & param_8;
  *unaff_r7 = uVar7;
  if (uVar7 == 0) goto LAB_2c4d4226;
  if (uVar7 != 1) goto LAB_2c4d418e;
  uVar7 = unaff_r4[1];
  uVar6 = 9 - uVar7;
  if ((int)uVar6 < 1) {
    uVar9 = *unaff_r4;
    uVar6 = 0;
  }
  else {
    if (uVar6 == 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = *unaff_r4 << (uVar6 & 0xff);
    }
    uVar9 = FUN_2c4d74d4(unaff_r8);
    *unaff_r4 = uVar9;
    uVar7 = unaff_r4[1] + 0x20;
  }
  unaff_r4[1] = uVar7 - 9;
  unaff_r7[3] = (uVar9 >> (uVar7 - 9 & 0xff) | uVar6) & *(uint *)(unaff_r6 + 0x24);
  goto LAB_2c4d404e;
LAB_2c4d4226:
  param_3 = unaff_r4[1];
  uVar7 = 8 - param_3;
  if ((int)uVar7 < 1) {
    param_1 = *unaff_r4;
    param_4 = 0;
  }
  else {
    param_4 = 0;
    if (uVar7 != 0x20) {
      param_4 = *unaff_r4 << (uVar7 & 0xff);
    }
    param_1 = FUN_2c4d74d4(unaff_r8);
    param_3 = unaff_r4[1] + 0x20;
    *unaff_r4 = param_1;
  }
  goto LAB_2c4d4248;
}

