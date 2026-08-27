/* FUN_2c4f384c @ 0x2c4f384c */

int FUN_2c4f384c(int param_1,int *param_2,int param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint local_90;
  int local_8c;
  int *local_88;
  int local_84;
  int local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  uint local_4c [5];
  char local_35;
  int local_2c;
  
  local_2c = *DAT_2c4f3a98;
  iVar12 = *param_2;
  for (piVar10 = *(int **)(param_1 + 0x28); piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
    while (((param_2 == piVar10 + 2 ||
            (((piVar10[2] != iVar12 && (piVar10[2] != param_2[1] && param_2[1] != piVar10[3])) &&
             (piVar10[3] != iVar12)))) ||
           (((*(char *)((int)piVar10 + 6) != '\x01' || (-1 < piVar10[0xc] << 0xb)) ||
            ((uint)piVar10[0xb] <= *(uint *)(*(int *)(param_1 + 0x68) + 0x28)))))) {
      piVar10 = (int *)*piVar10;
      if (piVar10 == (int *)0x0) goto LAB_2c4f38dc;
    }
    piVar10[0xf] = piVar10[0xd];
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x20);
    iVar9 = FUN_2c4f2ab8(param_1,piVar10);
    if (iVar9 != 0) goto LAB_2c4f3b08;
    piVar10[0xc] = piVar10[0xc] & 0xffefffff;
    iVar9 = FUN_2c4f2bfc(param_1,piVar10);
    if (iVar9 != 0) goto LAB_2c4f3b08;
    iVar12 = *param_2;
  }
LAB_2c4f38dc:
  iVar8 = param_2[1];
  local_6c = *param_2;
  iStack_68 = param_2[1];
  iStack_64 = param_2[2];
  iStack_60 = param_2[3];
  local_5c = param_2[4];
  iStack_58 = param_2[5];
  iStack_54 = param_2[6];
  iStack_50 = param_2[7];
  if (param_4 == 0) {
LAB_2c4f3968:
    if ((*(char *)((int)param_2 + 0x16) == '\0') && (*(ushort *)(param_2 + 5) < 0xff)) {
LAB_2c4f3978:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      iVar9 = FUN_2c4f3220(param_1,param_2,param_3,param_4,param_2,0,(short)param_2[5]);
      if (iVar9 != 0) goto LAB_2c4f3af6;
    }
    else {
      local_84 = *param_2;
      local_80 = param_2[3];
      local_78 = 0xffffffff;
      local_7c = param_2[4];
      iVar9 = *(int *)(*(int *)(param_1 + 0x68) + 0x48);
      if (iVar9 == 0) {
        iVar9 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c);
      }
      local_70 = iVar9 - 8;
      local_8c = param_1;
      local_88 = &local_84;
      local_74 = local_80;
      iVar9 = FUN_2c4f1588(param_1,param_2,local_80,local_7c,param_3,param_4,0,0,0,0,0,DAT_2c4f3c7c,
                           &local_8c);
      if (iVar9 != 0) {
LAB_2c4f3ae6:
        if ((iVar9 != -0x1c) && (iVar9 != -0x54)) goto LAB_2c4f3af6;
        goto LAB_2c4f3978;
      }
      local_4c[0] = *(uint *)(param_1 + 0x30);
      local_4c[1] = *(int *)(param_1 + 0x34);
      local_4c[2] = *(int *)(param_1 + 0x38);
      puVar3 = (uint *)(param_1 + 0x3c);
      puVar7 = local_4c;
      do {
        puVar4 = puVar3 + 1;
        *puVar7 = *puVar7 ^ *puVar3;
        puVar3 = puVar4;
        puVar7 = puVar7 + 1;
      } while ((uint *)(param_1 + 0x48) != puVar4);
      puVar3 = local_4c;
      puVar7 = (uint *)(param_1 + 0x48);
      do {
        puVar4 = puVar7 + 1;
        *puVar3 = *puVar3 ^ *puVar7;
        puVar3 = puVar3 + 1;
        puVar7 = puVar4;
      } while ((uint *)(param_1 + 0x54) != puVar4);
      local_4c[0] = DAT_2c4f3c84 & local_4c[0];
      if (local_4c[0] != 0 || (local_4c[2] != 0 || local_4c[1] != 0)) {
        iVar9 = FUN_2c4f23d8(param_1,param_2,local_4c);
        if (iVar9 != 0) goto LAB_2c4f3af6;
        if (local_70 < local_80 + 0x10U) goto LAB_2c4f3978;
        uVar13 = local_7c ^ 0x7ffffc00;
        local_90 = (local_7c ^ 0x7ffffc0c) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18;
        iVar9 = FUN_2c4f1344(param_1,&local_84,&local_90,4);
        if ((iVar9 != 0) || (iVar9 = FUN_2c4f1344(param_1,&local_84,local_4c,0xc), iVar9 != 0))
        goto LAB_2c4f3ae6;
        local_7c = DAT_2c4f3c88;
      }
      iVar9 = FUN_2c4f190c(param_1,&local_84);
      if (iVar9 != 0) goto LAB_2c4f3ae6;
      param_2[3] = local_80;
      param_2[4] = local_7c;
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    piVar10 = *(int **)(param_1 + 0x28);
    if (piVar10 != (int *)0x0) {
      do {
        if ((param_2 != piVar10 + 2) &&
           (((piVar10[2] == iVar12 || (piVar10[2] == iVar8 || piVar10[3] == iVar8)) ||
            (piVar10[3] == iVar12)))) {
          iVar9 = param_2[1];
          iVar5 = param_2[2];
          iVar11 = param_2[3];
          piVar10[2] = *param_2;
          piVar10[3] = iVar9;
          piVar10[4] = iVar5;
          piVar10[5] = iVar11;
          iVar9 = param_2[5];
          iVar5 = param_2[6];
          iVar11 = param_2[7];
          piVar10[6] = param_2[4];
          piVar10[7] = iVar9;
          piVar10[8] = iVar5;
          piVar10[9] = iVar11;
          if (param_4 != 0) {
            iVar9 = 0;
            do {
              while( true ) {
                uVar6 = *(uint *)(param_3 + iVar9 * 8);
                uVar13 = (uVar6 & 0x7fffffff) >> 0x14;
                if (uVar13 == 0x4ff) break;
                if (((uVar13 == 0x401) &&
                    ((uVar6 & 0xfffff) >> 10 <= (uint)*(ushort *)(piVar10 + 1))) &&
                   (*(ushort *)(piVar10 + 1) = *(ushort *)(piVar10 + 1) + 1,
                   *(char *)((int)piVar10 + 6) == '\x02')) {
                  piVar10[10] = piVar10[10] + 1;
                }
LAB_2c4f39ec:
                iVar9 = iVar9 + 1;
                if (param_4 == iVar9) goto LAB_2c4f3a22;
              }
              uVar13 = (uVar6 & 0xfffff) >> 10;
              uVar1 = *(ushort *)(piVar10 + 1);
              if (uVar1 == uVar13) {
                piVar10[2] = -1;
                piVar10[3] = -1;
                goto LAB_2c4f39ec;
              }
              if ((uVar1 <= uVar13) ||
                 (*(ushort *)(piVar10 + 1) = uVar1 - 1, *(char *)((int)piVar10 + 6) != '\x02'))
              goto LAB_2c4f39ec;
              iVar9 = iVar9 + 1;
              piVar10[10] = piVar10[10] + -1;
            } while (param_4 != iVar9);
          }
        }
LAB_2c4f3a22:
        piVar10 = (int *)*piVar10;
      } while (piVar10 != (int *)0x0);
      for (piVar10 = *(int **)(param_1 + 0x28); piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
        if (((piVar10[2] == iVar12) || (piVar10[3] == iVar8 || piVar10[2] == iVar8)) ||
           (piVar10[3] == iVar12)) {
          while( true ) {
            if ((*(ushort *)(piVar10 + 1) < *(ushort *)(piVar10 + 7)) ||
               (*(char *)((int)piVar10 + 0x1f) == '\0')) break;
            *(ushort *)(piVar10 + 1) = *(ushort *)(piVar10 + 1) - *(ushort *)(piVar10 + 7);
            iVar9 = FUN_2c4f1b28(param_1,piVar10 + 2,piVar10 + 8,0xffffffff,0xffffffff,0,0,0);
            if (iVar9 != 0) goto LAB_2c4f3b08;
          }
        }
      }
    }
    iVar9 = 0;
  }
  else {
    iVar5 = param_3 + 4;
    iVar11 = param_3 + param_4 * 8;
    bVar2 = false;
    iVar9 = param_3;
    do {
      while( true ) {
        uVar13 = (*(uint *)(iVar5 + -4) & 0x7fffffff) >> 0x14;
        if (uVar13 != 0x401) break;
        iVar9 = iVar9 + 8;
        iVar5 = iVar5 + 8;
        *(short *)(param_2 + 5) = (short)param_2[5] + 1;
        if (iVar9 == iVar11) goto LAB_2c4f395a;
      }
      if (uVar13 == 0x4ff) {
        bVar2 = true;
        *(short *)(param_2 + 5) = (short)param_2[5] + -1;
      }
      else if ((*(uint *)(iVar5 + -4) >> 0x14 & 0x700) == 0x600) {
        param_2[6] = **(int **)(iVar9 + 4);
        param_2[7] = *(int *)(*(int *)(iVar9 + 4) + 4);
        *(byte *)((int)param_2 + 0x17) = (byte)((uint)(*(int *)(iVar5 + -4) << 0xb) >> 0x1f);
      }
      iVar9 = iVar9 + 8;
      iVar5 = iVar5 + 8;
    } while (iVar9 != iVar11);
LAB_2c4f395a:
    if ((!bVar2) || ((short)param_2[5] != 0)) goto LAB_2c4f3968;
    iVar9 = FUN_2c4f219c(param_1,param_2,local_4c);
    if (iVar9 == 0) {
      if ((local_35 == '\0') || (iVar9 = FUN_2c4f3c8c(param_1,local_4c,param_2), iVar9 == 0))
      goto LAB_2c4f3968;
    }
    else if (iVar9 == -2) goto LAB_2c4f3968;
LAB_2c4f3af6:
    *param_2 = local_6c;
    param_2[1] = iStack_68;
    param_2[2] = iStack_64;
    param_2[3] = iStack_60;
    param_2[4] = local_5c;
    param_2[5] = iStack_58;
    param_2[6] = iStack_54;
    param_2[7] = iStack_50;
  }
LAB_2c4f3b08:
  if (*DAT_2c4f3c80 == local_2c) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

