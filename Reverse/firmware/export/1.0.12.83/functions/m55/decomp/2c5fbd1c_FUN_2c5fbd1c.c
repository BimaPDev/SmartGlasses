/* FUN_2c5fbd1c @ 0x2c5fbd1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5fbd1c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  if (*param_1 != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c668484(_LAB_2c5fbd48,0x34,_LAB_2c5fbd44,_LAB_2c5fbd40,param_4);
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  piVar8 = (int *)*param_1;
  if (*piVar8 != DAT_2c4758e4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c668484(DAT_2c4758f4,0xd18,DAT_2c4758f0,DAT_2c4758ec);
  }
  if (param_2 == 0) {
    param_2 = DAT_2c4758e8;
  }
  uVar7 = 0;
  *param_1 = 0;
  uVar2 = piVar8[6];
  if (uVar2 == 0) {
LAB_2c475798:
    uVar2 = param_1[1];
    if (uVar2 == 0) {
      iVar5 = param_1[2];
    }
    else {
      iVar5 = param_1[2];
      uVar7 = 0;
      do {
        if (*(int *)(iVar5 + uVar7 * 0x10 + 0xc) != 0) {
          (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8));
          uVar2 = param_1[1];
          iVar5 = param_1[2];
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar2);
    }
    if (iVar5 != 0) {
      (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8),iVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x2c4757d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8),param_1);
    return;
  }
LAB_2c475768:
  iVar5 = uVar7 * 0x2c + piVar8[7];
  if ((-1 < *(int *)(iVar5 + 0x1c) << 0x1d) ||
     (*(int *)(iVar5 + 4) == *(int *)((int)param_1 + *(int *)(iVar5 + 0xc)))) {
    if (*(char *)(iVar5 + 8) == '\x02') {
      iVar3 = *(int *)((int)param_1 + *(int *)(iVar5 + 0x10));
      if (iVar3 == 0) goto LAB_2c475792;
      cVar1 = *(char *)(iVar5 + 9);
      iVar5 = *(int *)((int)param_1 + *(int *)(iVar5 + 0xc));
      if (cVar1 == '\x0e') {
        if (iVar5 != 0) {
          piVar4 = (int *)(iVar3 + -4);
          iVar9 = 0;
          do {
            piVar4 = piVar4 + 1;
            if (*piVar4 != 0) {
              (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8));
            }
            iVar9 = iVar9 + 1;
          } while (iVar5 != iVar9);
        }
      }
      else if (cVar1 == '\x0f') {
        if (iVar5 != 0) {
          iVar9 = 0;
          do {
            if (*(int *)(iVar3 + 4 + iVar9 * 8) != 0) {
              (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8));
            }
            iVar9 = iVar9 + 1;
          } while (iVar5 != iVar9);
        }
      }
      else if ((cVar1 == '\x10') && (iVar5 != 0)) {
        puVar6 = (undefined4 *)(iVar3 + -4);
        iVar9 = 0;
        do {
          puVar6 = puVar6 + 1;
          iVar9 = iVar9 + 1;
          FUN_2c47573c(*puVar6,param_2);
        } while (iVar5 != iVar9);
      }
      uVar7 = uVar7 + 1;
      (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8),iVar3);
      uVar2 = piVar8[6];
      if (uVar2 <= uVar7) goto LAB_2c475798;
      goto LAB_2c475768;
    }
    cVar1 = *(char *)(iVar5 + 9);
    if (cVar1 == '\x0e') {
      iVar3 = *(int *)((int)param_1 + *(int *)(iVar5 + 0x10));
      if ((iVar3 == 0) || (*(int *)(iVar5 + 0x18) == iVar3)) goto LAB_2c475792;
LAB_2c47582c:
      uVar7 = uVar7 + 1;
      (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8));
      uVar2 = piVar8[6];
      if (uVar2 <= uVar7) goto LAB_2c475798;
      goto LAB_2c475768;
    }
    if (cVar1 == '\x0f') {
      iVar3 = *(int *)((int)param_1 + *(int *)(iVar5 + 0x10) + 4);
      if ((iVar3 != 0) &&
         ((*(int *)(iVar5 + 0x18) == 0 || (*(int *)(*(int *)(iVar5 + 0x18) + 4) != iVar3))))
      goto LAB_2c47582c;
    }
    else if ((cVar1 == '\x10') &&
            ((iVar3 = *(int *)((int)param_1 + *(int *)(iVar5 + 0x10)), iVar3 != 0 &&
             (*(int *)(iVar5 + 0x18) != iVar3)))) {
      FUN_2c47573c(iVar3,param_2);
      uVar2 = piVar8[6];
    }
  }
LAB_2c475792:
  uVar7 = uVar7 + 1;
  if (uVar2 <= uVar7) goto LAB_2c475798;
  goto LAB_2c475768;
}

