/* FUN_2c51003c @ 0x2c51003c */

void FUN_2c51003c(int *param_1,int param_2,undefined4 *param_3,int param_4,ushort param_5,
                 short param_6)

{
  short sVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint local_54;
  int local_48;
  int *local_30;
  int local_2c;
  
  local_2c = *DAT_2c51030c;
  uVar12 = (uint)param_5;
  iVar14 = (int)param_6;
  iVar6 = param_1[(uint)*(byte *)(param_2 + 0x1600) * 3 + 0xb0b];
  if (iVar6 == 0) {
    iVar6 = FUN_2c6033b4(*param_1,0,0x57);
  }
  sVar1 = *(short *)(iVar6 + 8);
  sVar4 = FUN_2c6033b4(*param_1,0,0x59);
  sVar4 = sVar4 + sVar1;
  iVar6 = FUN_2c607404(*param_1);
  iVar7 = *param_1;
  if (iVar6 < 500) {
    iVar6 = 500;
  }
  local_30 = (int *)param_3[param_4];
  local_48 = param_4;
  if (uVar12 < *(uint *)(param_2 + 0x1604)) {
    uVar11 = 0;
    local_54 = 0;
    uVar15 = 0;
LAB_2c51011c:
    do {
      if ((char)local_30[99] == '\x01') {
        iVar14 = (int)*(char *)(param_3 + 0x24);
        if (local_48 < iVar14 + -1) {
          local_48 = (int)(char)((char)local_48 + '\x01');
          local_30 = (int *)param_3[local_48];
          if (local_30 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,DAT_2c510350,0x6df,DAT_2c510358,DAT_2c510354,DAT_2c51034c);
          }
        }
        else if (local_48 == 0x15) {
          piVar13 = (int *)*param_3;
          local_30 = piVar13;
          FUN_2c673eb8(param_3,param_3 + 1,0x54);
          param_3[0x15] = piVar13;
          *piVar13 = 0;
          piVar13[1] = 0;
          FUN_2c62c3b0(piVar13 + 2,0x100);
          FUN_2c62c3b0(piVar13 + 0x42,0x82);
          *(undefined2 *)((int)piVar13 + 0x18a) = 0;
          *(undefined1 *)(piVar13 + 99) = 0;
          FUN_2c62a624((int)piVar13 + 0x18e,0,0,0,0);
          *(short *)(iVar7 + 0x416) = *(short *)(iVar7 + 0x416) + sVar4;
        }
        else {
          *(char *)(param_3 + 0x24) = *(char *)(param_3 + 0x24) + '\x01';
          iVar5 = FUN_2c50ff9c(param_3[0x16],&local_30);
          if (iVar5 == 0) {
            FUN_2c50f860(*param_1);
            iVar5 = FUN_2c50ff9c(param_3[0x16],&local_30);
            if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(3,DAT_2c510314,0x6ed,DAT_2c51031c,DAT_2c510318,DAT_2c510310);
            }
          }
          param_3[iVar14] = local_30;
          *(short *)(iVar7 + 0x416) = *(short *)(iVar7 + 0x416) + sVar4;
          local_48 = iVar14;
          if (*(char *)(param_3 + 0x24) <= *(char *)((int)param_3 + 0x91)) {
            *(short *)(iVar7 + 0x414) = *(short *)(iVar7 + 0x414) + sVar4;
          }
        }
        iVar14 = 0;
        *(undefined2 *)(local_30 + 0x62) = 0;
        *local_30 = *(int *)(param_2 + 0x1608) + uVar12;
      }
      *(short *)((int)local_30 + (local_30[1] + 0x84) * 2) = (short)iVar14;
      uVar10 = *(uint *)(param_2 + uVar12 * 4);
      if ((uVar10 & 0xffffffdf) - 0x41 < 0x1a) {
        local_54 = uVar12;
        if (uVar11 == 0) {
          uVar11 = 1;
          uVar15 = uVar12;
        }
      }
      else {
        iVar5 = FUN_2c50f0bc(uVar10);
        if (iVar5 == 0) {
          uVar11 = 0;
        }
        else {
          uVar15 = uVar12;
          if (uVar11 != 0) goto LAB_2c5100ca;
        }
        uVar15 = uVar11;
        local_54 = uVar11;
      }
LAB_2c5100ca:
      if (*(int *)(param_2 + 0x1604) - 1U == uVar12) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_2 + uVar12 * 4 + 4);
      }
      iVar5 = FUN_2c6298c0(param_3[0x17],uVar10,uVar8);
      if ((iVar14 + iVar5 < (int)(short)iVar6) && (uVar9 = local_30[1], uVar9 < 0x40)) {
        local_30[uVar9 + 2] = uVar10;
        local_30[1] = uVar9 + 1;
        uVar12 = uVar12 + 1 & 0xffff;
        sVar1 = (short)iVar5 + (short)iVar14 + *(short *)((int)param_3 + 0x76);
        iVar14 = (int)sVar1;
        *(short *)(local_30 + 0x62) = sVar1;
        if (*(uint *)(param_2 + 0x1604) <= uVar12) break;
        goto LAB_2c51011c;
      }
      *(short *)(local_30 + 0x62) = (short)iVar6;
      *(undefined1 *)(local_30 + 99) = 1;
      if ((uVar11 != 0) && (local_54 - uVar15 < (uint)local_30[1])) {
        local_30[1] = local_30[1] + (uVar15 - local_54);
        uVar12 = uVar15;
      }
      uVar11 = 0;
      local_54 = 0;
      uVar15 = uVar11;
    } while (uVar12 < *(uint *)(param_2 + 0x1604));
  }
  cVar3 = (char)local_48 + '\x01';
  iVar6 = (int)cVar3;
  if (iVar6 < *(char *)(param_3 + 0x24)) {
    do {
      iVar14 = param_3[0x16];
      bVar2 = *(byte *)(iVar14 + 0x90);
      if (bVar2 == 0x24) {
        FUN_2c62bea8();
      }
      else {
        *(undefined4 *)(iVar14 + (uint)bVar2 * 4) = param_3[iVar6];
        *(byte *)(iVar14 + 0x90) = bVar2 + 1;
      }
      param_3[iVar6] = 0;
      iVar6 = (int)(char)((char)iVar6 + '\x01');
    } while (iVar6 < *(char *)(param_3 + 0x24));
  }
  piVar13 = DAT_2c51030c;
  *(char *)(param_3 + 0x24) = cVar3;
  if (*piVar13 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

