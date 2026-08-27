/* FUN_2c50f9b8 @ 0x2c50f9b8 */

void FUN_2c50f9b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  byte bVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  int *local_260;
  int local_248;
  undefined2 local_244;
  short local_242;
  undefined2 local_240;
  short local_23e;
  undefined2 local_23c;
  short sStack_23a;
  int local_238 [65];
  undefined1 auStack_134 [264];
  int local_2c;
  
  local_2c = *DAT_2c50fc6c;
  FUN_2c62e838(param_1,DAT_2c50fc70,param_3,0);
  piVar15 = (int *)&local_23c;
  do {
    piVar15 = piVar15 + 1;
    *piVar15 = 0;
  } while (local_238 + 0x3f != piVar15);
  bVar16 = 0;
  FUN_2c62c0d8(auStack_134,param_1 + 0x40,0x108);
  do {
    uVar14 = (uint)bVar16;
    do {
      iVar9 = FUN_2c50f11c(auStack_134,&local_248);
      if (iVar9 == 0) {
        FUN_2c60747c(param_1,&local_240);
        sVar6 = sStack_23a;
        sVar5 = local_23e;
        uVar4 = local_240;
        iVar9 = *(int *)(param_1 + 0x278);
        local_242 = sStack_23a;
        *(int *)(param_1 + 0x278) = (int)sStack_23a;
        iVar11 = *(int *)(param_1 + 0x274);
        *(int *)(param_1 + 0x274) = (int)sStack_23a;
        local_244 = local_240;
        if (uVar14 == 0) goto LAB_2c50fb6e;
        local_260 = local_238 + uVar14;
        bVar2 = false;
        goto LAB_2c50fa58;
      }
    } while (uVar14 == 0x40);
    bVar16 = bVar16 + 1;
    local_238[uVar14] = local_248;
  } while( true );
LAB_2c50fa58:
  local_260 = local_260 + -1;
  local_248 = *local_260;
  if (local_248 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c50fc78,0x5ae,DAT_2c50fc80,DAT_2c50fc7c,DAT_2c50fc74);
  }
  iVar17 = 0;
  *local_260 = 0;
  do {
    iVar13 = local_248;
    iVar19 = iVar17 * 0x94 + local_248;
    iVar10 = (*(undefined4 **)(local_248 + 0x128))[iVar17 * 3 + 0xb0b];
    if (iVar10 == 0) {
      iVar10 = FUN_2c6033b4(**(undefined4 **)(local_248 + 0x128),0,0x57);
    }
    sVar12 = *(short *)(iVar10 + 8);
    sVar7 = FUN_2c6033b4(param_1,0,0x59);
    sVar8 = local_242;
    if (bVar2) {
      iVar10 = (int)*(char *)(iVar17 * 0x94 + iVar13 + 0x90);
      if (iVar10 != 0) {
        bVar16 = *(byte *)(param_1 + 0x40c);
        if (bVar16 != 0x40) {
          *(byte *)(param_1 + 0x40c) = bVar16 + 1;
          *(int *)(param_1 + (uint)bVar16 * 4 + 0x30c) = iVar19;
          goto LAB_2c50fac4;
        }
        goto LAB_2c50fadc;
      }
    }
    else {
LAB_2c50fac4:
      bVar21 = *(int *)(param_1 + 0x410) == iVar19;
      bVar3 = bVar2;
      if (bVar21) {
        bVar3 = true;
      }
      iVar10 = (int)*(char *)(iVar17 * 0x94 + iVar13 + 0x90);
      if (bVar21) {
        bVar2 = bVar3;
      }
      if (iVar10 != 0) {
LAB_2c50fadc:
        sVar12 = sVar12 + sVar7;
        iVar19 = iVar17 * 0x94 + iVar13;
        iVar20 = iVar17 * 0x94 + iVar13;
        *(undefined2 *)(iVar19 + 0x88) = local_23c;
        *(short *)(iVar19 + 0x8a) = local_242;
        cVar1 = *(char *)(iVar19 + 0x91);
        *(undefined2 *)(iVar20 + 0x84) = uVar4;
        sVar8 = (short)cVar1;
        if (iVar10 < cVar1) {
          sVar8 = (short)iVar10;
        }
        sVar8 = local_242 - sVar8 * sVar12;
        *(short *)(iVar20 + 0x86) = sVar8;
        iVar19 = iVar10 + -1;
        if (-1 < iVar19) {
          piVar15 = (int *)(iVar13 + (iVar10 + iVar17 * 0x25) * 4);
          do {
            piVar15 = piVar15 + -1;
            iVar13 = *piVar15;
            iVar19 = iVar19 + -1;
            sVar7 = local_242 - sVar12;
            *(undefined2 *)(iVar13 + 0x18e) = uVar4;
            *(short *)(iVar13 + 0x194) = local_242 + -1;
            *(undefined2 *)(iVar13 + 0x192) = local_23c;
            *(short *)(iVar13 + 0x18a) = sVar7;
            *(short *)(iVar13 + 400) = sVar7;
            local_242 = sVar7;
          } while (iVar19 != -1);
        }
      }
    }
    local_242 = sVar8;
    if (iVar17 != 0) break;
    iVar17 = 1;
  } while( true );
  local_242 = local_242 + -0x14;
  *(int *)(param_1 + 0x274) = (int)local_242;
  if (local_238 == local_260) {
LAB_2c50fb6e:
    puVar18 = *(undefined4 **)(param_1 + 0x3c);
    if (puVar18 != (undefined4 *)0x0) {
      (*(code *)puVar18[4])(param_1,*puVar18,&local_244,puVar18 + 1);
      sVar12 = *(short *)((int)puVar18 + 10) + 1;
      if (0 < (short)(sVar12 - *(short *)((int)puVar18 + 6))) {
        *(int *)(param_1 + 0x274) =
             (int)(short)((*(short *)((int)puVar18 + 6) + local_242) - sVar12);
      }
    }
    local_244 = local_240;
    local_242 = local_23e;
    for (puVar18 = (undefined4 *)FUN_2c62ca10(param_1 + 0x30); puVar18 != (undefined4 *)0x0;
        puVar18 = (undefined4 *)FUN_2c62ca20(param_1 + 0x30,puVar18)) {
      if (*(char *)(puVar18 + 3) == '\x01') {
        (*(code *)puVar18[4])(param_1,*puVar18,&local_244,puVar18 + 1);
      }
    }
    iVar17 = (*(int *)(param_1 + 0x278) - *(int *)(param_1 + 0x274)) -
             (int)(short)((sStack_23a + 1) - local_23e);
    if ((0 < iVar17) && (0 < *(int *)(param_1 + 0x27c))) {
      iVar9 = (iVar17 - ((iVar9 - iVar11) - (int)(short)((sVar6 + 1) - sVar5))) +
              *(int *)(param_1 + 0x27c);
      if (iVar9 < 0) {
        *(undefined4 *)(param_1 + 0x27c) = 0;
      }
      else {
        if (iVar9 <= iVar17) {
          iVar17 = iVar9;
        }
        *(int *)(param_1 + 0x27c) = iVar17;
      }
    }
    if (*DAT_2c50fc6c != local_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  goto LAB_2c50fa58;
}

