/* FUN_1402be10 @ 0x1402be10 */

void FUN_1402be10(uint param_1,int *param_2,uint param_3,undefined1 *param_4,uint *param_5,
                 undefined4 *param_6,byte param_7,uint param_8)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  undefined4 unaff_lr;
  undefined8 uVar18;
  undefined1 *local_84;
  undefined1 *local_64;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  int3 local_44;
  undefined1 uStack_41;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  uint uVar11;
  
  local_2c = *DAT_1402c0e4;
  uVar16 = (uint)param_7;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402c304,param_1);
  }
  if (*(char *)(DAT_1402c0e8 + param_1 * 0xc + 4) == '@') {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402c300,param_1);
  }
  pbVar8 = *(byte **)(DAT_1402c0e8 + param_1 * 0xc);
  if (-1 < *(int *)(pbVar8 + 0x48) << 0x1f) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402c2fc,param_1);
  }
  if (param_3 == 0) {
    param_4 = (undefined1 *)0xffffffff;
    goto LAB_1402bfb8;
  }
  if (0xffe < param_8 - 1) {
    param_4 = (undefined1 *)0xfffffffe;
    goto LAB_1402bfb8;
  }
  iVar6 = *param_2;
  uVar10 = param_2[1];
  if (iVar6 == 0) {
    param_4 = (undefined1 *)0xfffffffd;
    goto LAB_1402bfb8;
  }
  if (uVar10 == 0) {
    param_4 = (undefined1 *)0xfffffffc;
    goto LAB_1402bfb8;
  }
  if (uVar16 == 0) {
    uVar13 = ((param_8 + uVar10) - 1) / param_8;
    if (param_4 != (undefined1 *)0x0) goto LAB_1402bebc;
LAB_1402bfa8:
    if (param_5 != (uint *)0x0) {
      if (uVar13 == 1) {
        uVar13 = 0;
      }
      *param_5 = uVar13;
      goto LAB_1402bfb8;
    }
    if (uVar13 < 2) goto LAB_1402bfd4;
LAB_1402c2a6:
    param_4 = (undefined1 *)0xfffffff5;
    goto LAB_1402bfb8;
  }
  if (uVar16 == 1) {
    uVar13 = (((param_8 - 1) + (uVar10 >> 1)) / param_8) * 2;
    param_8 = uVar10 / uVar13;
    if (uVar10 != uVar13 * param_8) {
      param_4 = (undefined1 *)0xfffffffb;
      goto LAB_1402bfb8;
    }
    if (uVar10 < uVar13) {
      param_4 = (undefined1 *)0xfffffffa;
      goto LAB_1402bfb8;
    }
  }
  else if (uVar16 == 2) {
    uVar13 = ((param_8 + uVar10) - 1) / param_8;
    if (uVar13 == 1) {
      uVar13 = 2;
    }
    param_8 = (uVar13 + (uVar10 - 1)) / uVar13;
    if (CARRY4(uVar13,uVar10 - 1)) {
      param_4 = (undefined1 *)0xfffffff9;
      goto LAB_1402bfb8;
    }
  }
  else {
    uVar13 = param_3 * (((param_8 + uVar10) - 1) / param_8);
  }
  if (param_4 == (undefined1 *)0x0) goto LAB_1402bfa8;
LAB_1402bebc:
  if (uVar13 < 2) {
    if (param_5 != (uint *)0x0) {
      local_84 = auStack_58;
      uVar11 = 0;
      goto LAB_1402bed2;
    }
LAB_1402bfd4:
    local_84 = auStack_58;
  }
  else {
    if (param_5 == (uint *)0x0) goto LAB_1402c2a6;
    uVar11 = uVar13;
    local_84 = param_4;
    if (*param_5 < uVar13) {
      param_4 = (undefined1 *)0xfffffff4;
      goto LAB_1402bfb8;
    }
LAB_1402bed2:
    *param_5 = uVar11;
  }
  if (*(char *)(DAT_1402c0ec + param_1) == -1) {
    bVar1 = *(byte *)(DAT_1402c0e8 + param_1 * 0xc + 7);
    uVar11 = (*(uint *)(pbVar8 + 0x34) & 0x3f) >> 3;
    bVar9 = (byte)uVar11;
    if ((uVar11 != 1) && (uVar11 != 2)) {
      bVar9 = 0;
    }
    local_34 = DAT_1402c0fc;
    _local_44 = CONCAT13(4,(uint3)bVar9 << 0x10);
    local_40 = CONCAT31((uint3)bVar1,2);
    local_48 = uVar10 << 0x10;
    local_3c = 0;
    local_30 = 0;
    local_38 = iVar6;
    if (param_6 == (undefined4 *)0x0) {
      if (*(int *)(pbVar8 + 0x38) << 0x19 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_1402c0f8,DAT_1402c0f4);
      }
    }
    else {
      local_30 = DAT_1402c0f0;
    }
    if (uVar13 == 1) {
      uVar18 = FUN_14028228(local_84,&local_48,0);
      puVar4 = DAT_1402c2d0;
      pbVar5 = DAT_1402c2d4;
    }
    else {
      sVar3 = (short)param_8;
      if (uVar16 == 3) {
        iVar6 = 0;
        uVar11 = param_2[1];
        local_64 = (undefined1 *)0x0;
        uVar16 = 0;
        do {
          piVar15 = param_2 + uVar16 * 3;
          if ((*(char *)((int)piVar15 + 9) == '\0') || (local_64 != (undefined1 *)0x0)) {
            puVar12 = local_84 + iVar6 * 0x10;
          }
          else {
            puVar12 = local_84 + iVar6 * 0x10;
            local_64 = puVar12;
          }
          if (param_8 < uVar11) {
            local_48 = CONCAT22(sVar3,(undefined2)local_48);
            uVar18 = FUN_14028228(puVar12,&local_48,local_84 + (iVar6 + 1) * 0x10,0);
            pbVar8 = (byte *)((ulonglong)uVar18 >> 0x20);
            if ((int)uVar18 != 0) goto LAB_1402bf96;
            uVar11 = uVar11 - param_8;
            local_38 = local_38 + param_8;
            uVar17 = uVar16;
          }
          else {
            local_48 = CONCAT22((short)uVar11,(undefined2)local_48);
            uVar18 = FUN_14028228(puVar12,&local_48,local_84 + (iVar6 + 1) * 0x10,(char)piVar15[2]);
            pbVar8 = (byte *)((ulonglong)uVar18 >> 0x20);
            if (((int)uVar18 != 0) || (uVar17 = uVar16 + 1, param_3 <= uVar17)) goto LAB_1402bf96;
            local_38 = param_2[uVar16 * 3 + 3];
            piVar15 = param_2 + uVar16 * 3 + 3;
            uVar11 = piVar15[1];
          }
          iVar6 = iVar6 + 1;
          uVar16 = uVar17;
        } while (iVar6 != uVar13 - 1);
        local_48 = CONCAT22((short)uVar11,(undefined2)local_48);
        uVar18 = FUN_14028228(local_84 + iVar6 * 0x10,&local_48,local_64,(char)piVar15[2]);
        puVar4 = DAT_1402c2d0;
        pbVar5 = DAT_1402c2d4;
      }
      else {
        iVar6 = 0;
        puVar12 = local_84;
        do {
          if (uVar16 == 1) {
            iVar14 = iVar6 - ((uVar13 >> 1) - 1);
          }
          else {
            iVar14 = uVar16 - 2;
          }
          local_48 = CONCAT22(sVar3,(undefined2)local_48);
          uVar18 = FUN_14028228(puVar12,&local_48,puVar12 + 0x10,iVar14 == 0);
          pbVar8 = (byte *)((ulonglong)uVar18 >> 0x20);
          if ((int)uVar18 != 0) goto LAB_1402bf96;
          iVar6 = iVar6 + 1;
          local_38 = local_38 + param_8;
          puVar12 = puVar12 + 0x10;
        } while (iVar6 != uVar13 - 1);
        puVar12 = local_84;
        if (1 < uVar16 - 1) {
          puVar12 = (undefined1 *)0x0;
        }
        local_48 = CONCAT22((short)uVar10 - (short)iVar6 * sVar3,(undefined2)local_48);
        uVar18 = FUN_14028228(local_84 + iVar6 * 0x10,&local_48,puVar12,1);
        puVar4 = DAT_1402c2d0;
        pbVar5 = DAT_1402c2d4;
      }
    }
    pbVar8 = (byte *)((ulonglong)uVar18 >> 0x20);
    DAT_1402c2d0 = puVar4;
    DAT_1402c2d4 = pbVar5;
    if ((int)uVar18 == 0) {
      iVar6 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar6 = getBasePriority();
      }
      if (iVar6 != 0x40) {
        *puVar4 = 0x1402c13a;
        uVar16 = DAT_1402c2d8;
        bVar9 = *pbVar5;
        puVar4[1] = unaff_lr;
        uVar13 = bVar9 + 1;
        *pbVar5 = (char)uVar13 + (char)(uint)((ulonglong)uVar16 * (ulonglong)uVar13 >> 0x23) * -10;
        *(undefined4 *)(DAT_1402c2dc + (uint)bVar9 * 4) = unaff_lr;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
      if (*(char *)(DAT_1402c2e0 + param_1) == -1) {
        iVar14 = FUN_14028770(bVar1,0);
        local_48 = CONCAT31(local_48._1_3_,(char)iVar14);
        if (iVar14 == 0xff) {
          if (iVar6 == 0) {
            *DAT_1402c2d0 = 0xffffffff;
          }
          pbVar8 = DAT_1402c2e4;
          bVar1 = *DAT_1402c2e4;
          *(undefined4 *)(DAT_1402c2e8 + (uint)bVar1 * 4) = unaff_lr;
          uVar16 = bVar1 + 1;
          *pbVar8 = (char)uVar16 +
                    (char)(uint)((ulonglong)DAT_1402c2d8 * (ulonglong)uVar16 >> 0x23) * -10;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(iVar6);
          }
          param_4 = &Reset;
        }
        else {
          *(char *)(DAT_1402c2e0 + param_1) = (char)iVar14;
          *(byte *)(DAT_1402c2ec + param_1) = param_7;
          *(uint *)(DAT_1402c2f0 + param_1 * 4) = uVar10;
          if (param_6 != (undefined4 *)0x0) {
            *(undefined4 *)(DAT_1402c2f4 + param_1 * 4) = *param_6;
          }
          *(undefined4 *)(*(int *)(DAT_1402c2f8 + param_1 * 0xc) + 0x44) = 0x40;
          iVar7 = FUN_14028648(local_84,&local_48);
          iVar14 = DAT_1402c2e0;
          param_4 = (undefined1 *)0x0;
          if (iVar7 != 0) {
            FUN_14028888(*(undefined1 *)(DAT_1402c2e0 + param_1));
            param_4 = (undefined1 *)0x5;
            *(undefined1 *)(iVar14 + param_1) = 0xff;
          }
          if (iVar6 == 0) {
            *DAT_1402c2d0 = 0xffffffff;
          }
          pbVar8 = (byte *)(uint)*DAT_1402c2e4;
          *DAT_1402c2e4 =
               (char)(pbVar8 + 1) +
               (char)(uint)((ulonglong)DAT_1402c2d8 * ZEXT48(pbVar8 + 1) >> 0x23) * -10;
          *(undefined4 *)(DAT_1402c2e8 + (int)pbVar8 * 4) = unaff_lr;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(iVar6);
          }
        }
      }
      else {
        if (iVar6 == 0) {
          *DAT_1402c2d0 = 0xffffffff;
        }
        pbVar8 = DAT_1402c2e4;
        bVar1 = *DAT_1402c2e4;
        *(undefined4 *)(DAT_1402c2e8 + (uint)bVar1 * 4) = unaff_lr;
        uVar16 = bVar1 + 1;
        *pbVar8 = (char)uVar16 +
                  (char)(uint)((ulonglong)DAT_1402c2d8 * (ulonglong)uVar16 >> 0x23) * -10;
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          setBasePriority(iVar6);
        }
        param_4 = (undefined1 *)0x3;
      }
    }
    else {
LAB_1402bf96:
      param_4 = (undefined1 *)0x2;
    }
  }
  else {
    param_4 = (undefined1 *)0x1;
  }
LAB_1402bfb8:
  if ((*DAT_1402c0e4 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(param_4,pbVar8,*DAT_1402c0e4 ^ local_2c,0);
  }
  return;
}

