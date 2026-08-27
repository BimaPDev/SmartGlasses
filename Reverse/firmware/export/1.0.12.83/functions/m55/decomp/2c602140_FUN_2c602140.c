/* FUN_2c602140 @ 0x2c602140 */

uint FUN_2c602140(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint unaff_r4;
  undefined4 unaff_r6;
  int iVar9;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r9;
  undefined8 uVar10;
  int in_stack_00000004;
  
  piVar4 = (int *)FUN_2c5ff4d8();
  if (piVar4 != (int *)0x0) {
    pcVar5 = *(code **)(*piVar4 + 8);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*piVar4,*(undefined1 *)(param_1 + 8));
    }
    unaff_r4 = (uint)*(byte *)(param_1 + 0x1c) << 0x1e;
    if ((int)unaff_r4 < 0) {
      return 1;
    }
    if ((int)((uint)*(byte *)(param_1 + 0x1c) << 0x1f) < 0) {
      return 0;
    }
  }
  iVar9 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(iVar9 + 8);
  if (((iVar6 != 0) && ((*(byte *)(iVar6 + 0x1a) & 0x3f) != 0)) &&
     (piVar4 = *(int **)(iVar6 + 0xc), piVar4 != (int *)0x0)) {
    unaff_r4 = 0;
    if ((*piVar4 != 0) && (bVar1 = *(byte *)(piVar4 + 2), (char)piVar4[2] < '\0'))
    goto LAB_2c6021b2;
LAB_2c602186:
    iVar6 = *(int *)(iVar9 + 8);
    unaff_r4 = unaff_r4 + 1;
    if (iVar6 != 0) {
      while( true ) {
        if ((*(byte *)(iVar6 + 0x1a) & 0x3f) <= unaff_r4) goto LAB_2c6021e8;
        piVar4 = (int *)(*(int *)(iVar6 + 0xc) + unaff_r4 * 0xc);
        if ((*piVar4 == 0) || (bVar1 = *(byte *)(piVar4 + 2), -1 < (char)piVar4[2])) break;
LAB_2c6021b2:
        if ((bVar1 != 0x80) && ((bVar1 & 0x7f) != *(byte *)(param_1 + 8))) break;
        *(int *)(param_1 + 0xc) = piVar4[1];
        if ((*(code **)(param_1 + 0x18) == (code *)0x0) ||
           (*(code **)(param_1 + 0x18) == (code *)*piVar4)) {
          (*(code *)*piVar4)(param_1);
        }
        uVar7 = (uint)*(byte *)(param_1 + 0x1c);
        if ((int)(uVar7 << 0x1e) < 0) {
          return 1;
        }
        if ((int)(uVar7 << 0x1f) < 0) {
          return 0;
        }
        if ((int)(uVar7 << 0x1c) < 0) {
          return 2;
        }
        iVar9 = *(int *)(param_1 + 4);
        unaff_r4 = unaff_r4 + 1;
        iVar6 = *(int *)(iVar9 + 8);
        if (iVar6 == 0) goto LAB_2c6021e8;
      }
      goto LAB_2c602186;
    }
  }
LAB_2c6021e8:
  uVar7 = FUN_2c602110(0,param_1);
  if (uVar7 == 0) {
    return 0;
  }
  iVar9 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(iVar9 + 8);
  if ((iVar6 != 0) && ((*(byte *)(iVar6 + 0x1a) & 0x3f) != 0)) {
    piVar4 = *(int **)(iVar6 + 0xc);
    if (uVar7 != 1) {
      return uVar7;
    }
    if (piVar4 != (int *)0x0) {
      unaff_r4 = 0;
      while( true ) {
        if (((*piVar4 != 0) && (-1 < (char)piVar4[2])) &&
           (((char)piVar4[2] == '\0' || (*(char *)(param_1 + 8) == (char)piVar4[2])))) {
          *(int *)(param_1 + 0xc) = piVar4[1];
          if ((*(code **)(param_1 + 0x18) == (code *)0x0) ||
             (*(code **)(param_1 + 0x18) == (code *)*piVar4)) {
            (*(code *)*piVar4)(param_1);
          }
          uVar7 = (uint)*(byte *)(param_1 + 0x1c);
          if ((int)(uVar7 << 0x1e) < 0) {
            return 1;
          }
          if ((int)(uVar7 << 0x1f) < 0) {
            return 0;
          }
          if ((int)(uVar7 << 0x1c) < 0) {
            return 2;
          }
          iVar9 = *(int *)(param_1 + 4);
        }
        iVar6 = *(int *)(iVar9 + 8);
        unaff_r4 = unaff_r4 + 1;
        if ((iVar6 == 0) || ((*(byte *)(iVar6 + 0x1a) & 0x3f) <= unaff_r4)) break;
        piVar4 = (int *)(*(int *)(iVar6 + 0xc) + unaff_r4 * 0xc);
      }
      goto LAB_2c602268;
    }
  }
  if (uVar7 != 1) {
    return uVar7;
  }
LAB_2c602268:
  iVar6 = *(int *)(iVar9 + 4);
  if ((iVar6 == 0) || ((int)((uint)*(byte *)(param_1 + 0x1c) << 0x1d) < 0)) {
    return 1;
  }
  if (1 < *(byte *)(param_1 + 8) - 0x23) {
    uVar10 = FUN_2c606b94(iVar9,0x4000);
    iVar6 = (int)((ulonglong)uVar10 >> 0x20);
    if ((uint)uVar10 == 0) {
      return 1;
    }
    switch(*(undefined1 *)(param_1 + 8)) {
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1e:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x29:
    case 0x2a:
    case 0x2c:
      return (uint)uVar10;
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2b:
      uVar7 = unaff_r7 >> 5;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c612464,0x195,DAT_2c612460,DAT_2c61245c);
      }
      if (*(char *)(unaff_r4 + 0x10) == '\x01') {
        FUN_2c62e030();
        if (unaff_r9 != 0) {
          do {
            FUN_2c62de74();
            iVar6 = *(int *)(unaff_r8 + 0xc);
            *(short *)(iVar6 + uVar7 * 4) = (short)unaff_r6;
            iVar6 = iVar6 + uVar7 * 4;
            *(char *)(iVar6 + 2) = (char)((uint)unaff_r6 >> 0x10);
            *(undefined1 *)(iVar6 + 3) = 0xff;
            *(char *)(*(int *)(unaff_r8 + 0x10) + uVar7) = (char)((uint)unaff_r6 >> 0x18);
            uVar7 = uVar7 + 1;
          } while (unaff_r9 != uVar7);
        }
      }
      else {
        puVar8 = *(undefined1 **)(*(int *)(unaff_r4 + 4) + 8);
        if (unaff_r9 != 0) {
          while( true ) {
            uVar2 = puVar8[2];
            uVar3 = puVar8[1];
            *(undefined1 *)(iVar6 + uVar7 * 4) = *puVar8;
            iVar6 = iVar6 + uVar7 * 4;
            *(undefined1 *)(iVar6 + 1) = uVar3;
            *(undefined1 *)(iVar6 + 2) = uVar2;
            *(undefined1 *)(iVar6 + 3) = 0xff;
            *(undefined1 *)(*(int *)(unaff_r8 + 0x10) + uVar7) = puVar8[3];
            uVar7 = uVar7 + 1;
            if (unaff_r9 == uVar7) break;
            iVar6 = *(int *)(unaff_r8 + 0xc);
            puVar8 = puVar8 + 4;
          }
        }
      }
      if (*DAT_2c612450 == in_stack_00000004) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    default:
      iVar6 = *(int *)(*(int *)(param_1 + 4) + 4);
    }
  }
  *(int *)(param_1 + 4) = iVar6;
  iVar6 = FUN_2c602140(param_1);
  return (uint)(iVar6 == 1);
}

