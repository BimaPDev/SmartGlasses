/* FUN_2c4bac38 @ 0x2c4bac38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bac38(uint param_1,int *param_2,uint param_3,undefined1 *param_4,uint *param_5,
                 undefined4 *param_6,byte param_7,uint param_8)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint *extraout_r1;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  undefined4 unaff_lr;
  undefined8 uVar16;
  undefined1 *puStack_68;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  int3 iStack_44;
  undefined1 uStack_41;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uVar15;
  
  uStack_2c = *_LAB_2c4baf08;
  uVar12 = (uint)param_7;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb09c,param_1);
  }
  if (*(char *)(_LAB_2c4baf0c + param_1 * 0xc + 4) == 'H') {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb098,param_1);
  }
  iVar5 = *(int *)(_LAB_2c4baf0c + param_1 * 0xc);
  if (-1 < *(int *)(iVar5 + 0x48) << 0x1f) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb094,param_1);
  }
  if (param_3 == 0) {
    uVar6 = 0xffffffff;
    goto LAB_2c4bacec;
  }
  if (0xffe < param_8 - 1) {
    uVar6 = 0xfffffffe;
    goto LAB_2c4bacec;
  }
  iVar10 = *param_2;
  uVar8 = param_2[1];
  if (iVar10 == 0) {
    uVar6 = 0xfffffffd;
    goto LAB_2c4bacec;
  }
  if (uVar8 == 0) {
    uVar6 = 0xfffffffc;
    goto LAB_2c4bacec;
  }
  if (uVar12 == 0) {
    uVar9 = ((param_8 + uVar8) - 1) / param_8;
joined_r0x2c4bad12:
    if ((param_5 != (uint *)0x0) && (param_4 == (undefined1 *)0x0)) {
      if (uVar9 == 1) {
        uVar9 = 0;
      }
      goto LAB_2c4bace8;
    }
  }
  else {
    if (uVar12 == 1) {
      uVar9 = (((param_8 - 1) + (uVar8 >> 1)) / param_8) * 2;
      param_8 = uVar8 / uVar9;
      if (uVar8 != uVar9 * param_8) {
        uVar6 = 0xfffffffb;
        goto LAB_2c4bacec;
      }
      if (uVar8 < uVar9) {
        uVar6 = 0xfffffffa;
        goto LAB_2c4bacec;
      }
    }
    else {
      if (uVar12 != 2) {
        uVar9 = param_3 * (((param_8 + uVar8) - 1) / param_8);
        goto joined_r0x2c4bad12;
      }
      uVar9 = ((param_8 + uVar8) - 1) / param_8;
      if (uVar9 == 1) {
        uVar9 = 2;
      }
      param_8 = (uVar9 + (uVar8 - 1)) / uVar9;
      if (CARRY4(uVar9,uVar8 - 1)) {
        uVar6 = 0xfffffff9;
        goto LAB_2c4bacec;
      }
    }
    if ((param_5 != (uint *)0x0) && (param_4 == (undefined1 *)0x0)) {
LAB_2c4bace8:
      uVar6 = 0;
      *param_5 = uVar9;
      goto LAB_2c4bacec;
    }
  }
  if (uVar9 < 2) {
    param_4 = auStack_58;
    if (param_5 != (uint *)0x0) {
      uVar15 = 0;
      goto LAB_2c4bad2e;
    }
  }
  else {
    if ((param_5 == (uint *)0x0) || (param_4 == (undefined1 *)0x0)) {
      uVar6 = 0xfffffff5;
      goto LAB_2c4bacec;
    }
    uVar15 = uVar9;
    if (*param_5 < uVar9) {
      uVar6 = 0xfffffff4;
      goto LAB_2c4bacec;
    }
LAB_2c4bad2e:
    *param_5 = uVar15;
  }
  if (*(char *)(_LAB_2c4baf10 + param_1) == -1) {
    uVar15 = (*(uint *)(iVar5 + 0x34) & 0x3f) >> 3;
    bVar14 = (byte)uVar15;
    bVar1 = *(byte *)(_LAB_2c4baf0c + param_1 * 0xc + 7);
    if ((uVar15 != 1) && (uVar15 != 2)) {
      bVar14 = 0;
    }
    uStack_34 = _LAB_2c4baf14;
    _iStack_44 = CONCAT13(4,(uint3)bVar14 << 0x10);
    uStack_48 = uVar8 << 0x10;
    uStack_3c = 0;
    uStack_40 = CONCAT31((uint3)bVar1,2);
    uStack_30 = 0;
    iStack_38 = iVar10;
    if (param_6 == (undefined4 *)0x0) {
      if (*(int *)(iVar5 + 0x38) << 0x19 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4baf20,_LAB_2c4baf1c);
      }
    }
    else {
      uStack_30 = _LAB_2c4baf18;
    }
    if (uVar9 == 1) {
      uVar16 = FUN_2c4be910(param_4,&uStack_48,0);
      puVar4 = _LAB_2c4bb07c;
    }
    else {
      sVar3 = (short)param_8;
      if (uVar12 == 3) {
        iVar5 = 0;
        uVar15 = param_2[1];
        puStack_68 = (undefined1 *)0x0;
        uVar12 = 0;
        do {
          piVar11 = param_2 + uVar12 * 3;
          if ((*(char *)((int)piVar11 + 9) == '\0') || (puStack_68 != (undefined1 *)0x0)) {
            puVar7 = param_4 + iVar5 * 0x10;
          }
          else {
            puVar7 = param_4 + iVar5 * 0x10;
            puStack_68 = puVar7;
          }
          if (param_8 < uVar15) {
            uStack_48 = CONCAT22(sVar3,(undefined2)uStack_48);
            uVar16 = FUN_2c4be910(puVar7,&uStack_48,param_4 + (iVar5 + 1) * 0x10,0);
            param_5 = (uint *)((ulonglong)uVar16 >> 0x20);
            if ((int)uVar16 != 0) goto LAB_2c4badf2;
            uVar15 = uVar15 - param_8;
            iStack_38 = iStack_38 + param_8;
            uVar13 = uVar12;
          }
          else {
            uStack_48 = CONCAT22((short)uVar15,(undefined2)uStack_48);
            uVar16 = FUN_2c4be910(puVar7,&uStack_48,param_4 + (iVar5 + 1) * 0x10,(char)piVar11[2]);
            param_5 = (uint *)((ulonglong)uVar16 >> 0x20);
            if (((int)uVar16 != 0) || (uVar13 = uVar12 + 1, param_3 <= uVar13)) goto LAB_2c4badf2;
            piVar11 = param_2 + uVar12 * 3 + 3;
            iStack_38 = param_2[uVar12 * 3 + 3];
            uVar15 = piVar11[1];
          }
          iVar5 = iVar5 + 1;
          uVar12 = uVar13;
        } while (uVar9 - 1 != iVar5);
        uStack_48 = CONCAT22((short)uVar15,(undefined2)uStack_48);
        uVar16 = FUN_2c4be910(param_4 + (uVar9 - 1) * 0x10,&uStack_48,puStack_68,(char)piVar11[2]);
        puVar4 = _LAB_2c4bb07c;
      }
      else {
        iVar5 = 0;
        puVar7 = param_4;
        do {
          if (uVar12 == 1) {
            iVar10 = iVar5 - ((uVar9 >> 1) - 1);
          }
          else {
            iVar10 = uVar12 - 2;
          }
          uStack_48 = CONCAT22(sVar3,(undefined2)uStack_48);
          uVar16 = FUN_2c4be910(puVar7,&uStack_48,puVar7 + 0x10,iVar10 == 0);
          param_5 = (uint *)((ulonglong)uVar16 >> 0x20);
          if ((int)uVar16 != 0) goto LAB_2c4badf2;
          iVar5 = iVar5 + 1;
          iStack_38 = iStack_38 + param_8;
          puVar7 = puVar7 + 0x10;
        } while (iVar5 != uVar9 - 1);
        uStack_48 = CONCAT22((short)uVar8 - (short)iVar5 * sVar3,(undefined2)uStack_48);
        puVar7 = param_4;
        if (1 < uVar12 - 1) {
          puVar7 = (undefined1 *)0x0;
        }
        uVar16 = FUN_2c4be910(param_4 + iVar5 * 0x10,&uStack_48,puVar7,1);
        puVar4 = _LAB_2c4bb07c;
      }
    }
    param_5 = (uint *)((ulonglong)uVar16 >> 0x20);
    _LAB_2c4bb07c = puVar4;
    if ((int)uVar16 == 0) {
      iVar5 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar5 = getBasePriority();
      }
      if (iVar5 != 0x40) {
        *puVar4 = 0x2c4baf60;
        puVar4[1] = unaff_lr;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
      if (*(char *)(_LAB_2c4bb080 + param_1) == -1) {
        uVar16 = func_0x2c4beebc(bVar1,0);
        param_5 = (uint *)((ulonglong)uVar16 >> 0x20);
        uStack_48 = CONCAT31(uStack_48._1_3_,(char)uVar16);
        if ((int)uVar16 == 0xff) {
          if (iVar5 == 0) {
            *_LAB_2c4bb07c = 0xffffffff;
          }
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(iVar5);
          }
          uVar6 = 4;
        }
        else {
          *(char *)(_LAB_2c4bb080 + param_1) = (char)uVar16;
          *(byte *)(_LAB_2c4bb084 + param_1) = param_7;
          *(uint *)(_LAB_2c4bb088 + param_1 * 4) = uVar8;
          if (param_6 != (undefined4 *)0x0) {
            *(undefined4 *)(_LAB_2c4bb08c + param_1 * 4) = *param_6;
          }
          *(undefined4 *)(*(int *)(_LAB_2c4bb090 + param_1 * 0xc) + 0x44) = 0x40;
          uVar16 = FUN_2c4bed8c(param_4,&uStack_48);
          iVar10 = _LAB_2c4bb080;
          param_5 = (uint *)((ulonglong)uVar16 >> 0x20);
          if ((int)uVar16 == 0) {
            uVar6 = 0;
          }
          else {
            FUN_2c4beffc(*(undefined1 *)(_LAB_2c4bb080 + param_1));
            uVar6 = 5;
            *(undefined1 *)(iVar10 + param_1) = 0xff;
            param_5 = extraout_r1;
          }
          if (iVar5 == 0) {
            *_LAB_2c4bb07c = 0xffffffff;
          }
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(iVar5);
          }
        }
      }
      else {
        if (iVar5 == 0) {
          *_LAB_2c4bb07c = 0xffffffff;
        }
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          setBasePriority(iVar5);
        }
        uVar6 = 3;
      }
    }
    else {
LAB_2c4badf2:
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 1;
  }
LAB_2c4bacec:
  if ((*_LAB_2c4baf08 ^ uStack_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar6,param_5,*_LAB_2c4baf08 ^ uStack_2c,0);
}

