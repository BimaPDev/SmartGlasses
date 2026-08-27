/* FUN_2c54062a @ 0x2c54062a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54062a(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint extraout_r3;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  piVar1 = _LAB_2c540968;
  if (*_LAB_2c540968 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,8);
  uVar3 = _LAB_2c54096c;
  *puVar2 = _LAB_2c54096c;
  puVar2[1] = 0;
  puVar10 = *(undefined4 **)(param_2 + 8);
  *(undefined4 **)(param_2 + 8) = puVar2;
  if (puVar10 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar10[1];
    *puVar10 = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar10);
    }
    *puVar2 = _LAB_2c540970;
    if ((undefined4 *)puVar2[0x4a] != puVar2 + 0x4c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[0x44] != puVar2 + 0x46) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[0x3e] != puVar2 + 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[0x38] != puVar2 + 0x3a) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[0x32] != puVar2 + 0x34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[0x2b] != puVar2 + 0x2d) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[0x25] != puVar2 + 0x27) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[0x1f] != puVar2 + 0x21) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[0x19] != puVar2 + 0x1b) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[0x13] != puVar2 + 0x15) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[0xd] != puVar2 + 0xf) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[7] != puVar2 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[1] != puVar2 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2);
  }
  uVar3 = FUN_2c48e42c(param_1,_LAB_2c540974);
  iVar4 = func_0x2c540d24(uVar3,*(undefined4 *)(param_2 + 8));
  if (iVar4 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_2c48e42c(param_1,_LAB_2c540978);
    iVar4 = FUN_2c48e85c();
    if (iVar4 != 0) {
      uVar6 = FUN_2c48e3f0(uVar3);
      iVar12 = *(int *)(param_2 + 0x10);
      iVar11 = *(int *)(param_2 + 0x14);
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
      for (iVar4 = iVar12; iVar4 != iVar11; iVar4 = iVar4 + 0x250) {
        FUN_2c53eb84(iVar4);
      }
      if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,iVar12);
      }
      func_0x2c53f8d8(param_2 + 0x10,uVar6);
      iVar4 = _LAB_2c540984;
      if (0 < (int)uVar6) {
        uVar13 = 0;
        do {
          iVar11 = *(int *)(param_2 + 0x14);
          if (iVar11 == *(int *)(param_2 + 0x18)) {
            FUN_2c53fd4c(param_2 + 0x10,iVar11);
          }
          else {
            puVar2 = (undefined4 *)FUN_2c674268(iVar11,0,0x250);
            *puVar2 = _LAB_2c540980;
            puVar2[1] = puVar2 + 3;
            *(undefined1 *)(puVar2 + 3) = 0;
            puVar2[10] = puVar2 + 0xc;
            *(undefined1 *)(puVar2 + 0xc) = 0;
            puVar2[0x10] = puVar2 + 0x12;
            *(undefined1 *)(puVar2 + 0x12) = 0;
            puVar2[0x16] = puVar2 + 0x18;
            *(undefined1 *)(puVar2 + 0x18) = 0;
            puVar2[0x1c] = puVar2 + 0x1e;
            *(undefined1 *)(puVar2 + 0x1e) = 0;
            puVar2[0x22] = puVar2 + 0x24;
            *(undefined1 *)(puVar2 + 0x24) = 0;
            puVar2[0x28] = puVar2 + 0x2a;
            *(undefined1 *)(puVar2 + 0x2a) = 0;
            puVar2[0x2e] = puVar2 + 0x30;
            *(undefined1 *)(puVar2 + 0x30) = 0;
            puVar2[0x34] = puVar2 + 0x36;
            *(undefined1 *)(puVar2 + 0x36) = 0;
            puVar2[0x3a] = puVar2 + 0x3c;
            *(undefined1 *)(puVar2 + 0x3c) = 0;
            puVar2[0x40] = puVar2 + 0x42;
            *(undefined1 *)(puVar2 + 0x42) = 0;
            puVar2[0x46] = puVar2 + 0x48;
            *(undefined1 *)(puVar2 + 0x48) = 0;
            puVar2[0x4c] = puVar2 + 0x4e;
            *(undefined1 *)(puVar2 + 0x4e) = 0;
            puVar2[0x52] = puVar2 + 0x54;
            *(undefined1 *)(puVar2 + 0x54) = 0;
            puVar2[0x58] = puVar2 + 0x5a;
            *(undefined1 *)(puVar2 + 0x5a) = 0;
            puVar2[0x5e] = puVar2 + 0x60;
            *(undefined1 *)(puVar2 + 0x60) = 0;
            *(undefined1 *)(puVar2 + 0x66) = 0;
            *(undefined1 *)(puVar2 + 0x6c) = 0;
            *(undefined1 *)(puVar2 + 0x72) = 0;
            *(undefined1 *)(puVar2 + 0x78) = 0;
            *(undefined1 *)(puVar2 + 0x7e) = 0;
            *(undefined1 *)(puVar2 + 0x84) = 0;
            *(undefined1 *)(puVar2 + 0x8a) = 0;
            *(undefined1 *)(puVar2 + 0x90) = 0;
            puVar2[100] = puVar2 + 0x66;
            puVar2[0x6a] = puVar2 + 0x6c;
            puVar2[0x70] = puVar2 + 0x72;
            puVar2[0x76] = puVar2 + 0x78;
            puVar2[0x7c] = puVar2 + 0x7e;
            puVar2[0x82] = puVar2 + 0x84;
            puVar2[0x88] = puVar2 + 0x8a;
            puVar2[0x8e] = puVar2 + 0x90;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 0x250;
          }
          uVar5 = FUN_2c48e408(uVar3,uVar13);
          uVar8 = iVar4 * (*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 4);
          if (uVar8 < uVar13 || uVar8 - uVar13 == 0) goto LAB_2c540c14;
          iVar11 = func_0x2c53eae8(uVar5,uVar13 * 0x250 + *(int *)(param_2 + 0x10));
          if (iVar11 < 0) {
            iVar12 = *(int *)(param_2 + 0x10);
            iVar11 = *(int *)(param_2 + 0x14);
            iVar4 = iVar12;
            if (iVar12 != iVar11) {
              do {
                iVar9 = iVar4 + 0x250;
                FUN_2c53eb84(iVar4);
                iVar4 = iVar9;
              } while (iVar11 != iVar9);
              *(int *)(param_2 + 0x14) = iVar12;
            }
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar6 != uVar13);
      }
    }
    uVar3 = FUN_2c48e42c(param_1,_LAB_2c54097c);
    iVar4 = FUN_2c48e85c();
    if (iVar4 != 0) {
      uVar6 = FUN_2c48e3f0(uVar3);
      iVar4 = *(int *)(param_2 + 0x1c);
      iVar11 = *(int *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x1c) = 0;
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0;
      uVar5 = _LAB_2c540c2c;
      if (iVar4 != iVar11) {
        iVar9 = iVar4 + 0xb4;
        iVar12 = iVar4;
        do {
          *(undefined4 *)(iVar9 + -0xb4) = uVar5;
          if (*(int *)(iVar9 + -8) != iVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (*(int *)(iVar9 + -0x20) != iVar12 + 0x9c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (*(int *)(iVar9 + -0x38) != iVar12 + 0x84) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (*(int *)(iVar9 + -0x50) != iVar12 + 0x6c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (*(int *)(iVar9 + -0x68) != iVar12 + 0x54) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (*(int *)(iVar9 + -0x80) != iVar12 + 0x3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (*(int *)(iVar9 + -0x98) != iVar12 + 0x24) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if (*(int *)(iVar9 + -0xb0) != iVar12 + 0xc) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          iVar12 = iVar12 + 0xc4;
          iVar9 = iVar9 + 0xc4;
        } while (iVar11 != iVar12);
      }
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,iVar4);
      }
      func_0x2c53f994(param_2 + 0x1c,uVar6);
      uVar5 = _LAB_2c540c2c;
      iVar4 = _LAB_2c540c24;
      if (0 < (int)uVar6) {
        uVar13 = 0;
        do {
          iVar11 = *(int *)(param_2 + 0x20);
          if (iVar11 == *(int *)(param_2 + 0x24)) {
            FUN_2c53ff6c(param_2 + 0x1c,iVar11);
          }
          else {
            puVar2 = (undefined4 *)FUN_2c674268(iVar11,0,0xc4);
            *puVar2 = uVar5;
            *(undefined1 *)(puVar2 + 3) = 0;
            *(undefined1 *)(puVar2 + 9) = 0;
            *(undefined1 *)(puVar2 + 0xf) = 0;
            *(undefined1 *)(puVar2 + 0x15) = 0;
            *(undefined1 *)(puVar2 + 0x1b) = 0;
            *(undefined1 *)(puVar2 + 0x21) = 0;
            *(undefined1 *)(puVar2 + 0x27) = 0;
            *(undefined1 *)(puVar2 + 0x2d) = 0;
            puVar2[1] = puVar2 + 3;
            puVar2[7] = puVar2 + 9;
            puVar2[0xd] = puVar2 + 0xf;
            puVar2[0x13] = puVar2 + 0x15;
            puVar2[0x19] = puVar2 + 0x1b;
            puVar2[0x1f] = puVar2 + 0x21;
            puVar2[0x25] = puVar2 + 0x27;
            puVar2[0x2b] = puVar2 + 0x2d;
            *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 0xc4;
          }
          uVar7 = FUN_2c48e408(uVar3,uVar13);
          uVar8 = iVar4 * (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c) >> 2);
          if (uVar8 < uVar13 || uVar8 - uVar13 == 0) {
            FUN_2c65868c(_LAB_2c540c28,uVar13,uVar8);
            uVar8 = extraout_r3;
LAB_2c540c14:
            FUN_2c65868c(_LAB_2c540c28,uVar13,uVar8);
            return 0xffffffff;
          }
          iVar11 = func_0x2c540c60(uVar7,uVar13 * 0xc4 + *(int *)(param_2 + 0x1c));
          uVar7 = _LAB_2c540c2c;
          if (iVar11 < 0) {
            iVar11 = *(int *)(param_2 + 0x1c);
            iVar4 = *(int *)(param_2 + 0x20);
            if (iVar11 != iVar4) {
              iVar9 = iVar11 + 0xb4;
              iVar12 = iVar11;
              while( true ) {
                *(undefined4 *)(iVar9 + -0xb4) = uVar7;
                if (iVar9 != *(int *)(iVar9 + -8)) {
                    /* WARNING: Subroutine does not return */
                  FUN_2c472680(0);
                }
                if (*(int *)(iVar9 + -0x20) != iVar12 + 0x9c) {
                    /* WARNING: Subroutine does not return */
                  FUN_2c472680(0);
                }
                if (*(int *)(iVar9 + -0x38) != iVar12 + 0x84) {
                    /* WARNING: Subroutine does not return */
                  FUN_2c472680(0);
                }
                if (*(int *)(iVar9 + -0x50) != iVar12 + 0x6c) {
                    /* WARNING: Subroutine does not return */
                  FUN_2c472680(0);
                }
                if (*(int *)(iVar9 + -0x68) != iVar12 + 0x54) {
                    /* WARNING: Subroutine does not return */
                  FUN_2c472680(0);
                }
                if (*(int *)(iVar9 + -0x80) != iVar12 + 0x3c) {
                    /* WARNING: Subroutine does not return */
                  FUN_2c472680(0);
                }
                if (*(int *)(iVar9 + -0x98) != iVar12 + 0x24) {
                    /* WARNING: Subroutine does not return */
                  FUN_2c472680(0);
                }
                if (*(int *)(iVar9 + -0xb0) != iVar12 + 0xc) break;
                iVar12 = iVar12 + 0xc4;
                iVar9 = iVar9 + 0xc4;
                if (iVar4 == iVar12) {
                  *(int *)(param_2 + 0x20) = iVar11;
                  return 0;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_2c472680(0);
            }
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar6 != uVar13);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

