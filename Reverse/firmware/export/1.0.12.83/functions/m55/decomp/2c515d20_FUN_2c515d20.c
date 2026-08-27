/* FUN_2c515d20 @ 0x2c515d20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c515d20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r1;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  
  iVar8 = *(int *)(param_1 + 4);
  iVar9 = *(int *)(iVar8 + 0x10);
  iVar10 = iVar8 + 0x18;
  iVar11 = *(int *)(iVar8 + 0x14);
  cVar1 = *(char *)(iVar9 + 4);
  uStack_20 = param_4;
  if (cVar1 == '\x12') {
    registry_lookup(_LAB_2c515e98);
    FUN_2c5e4068();
LAB_2c515d44:
    if (*(char *)(iVar11 + 4) != '\x01') goto LAB_2c515d4e;
LAB_2c515dd6:
    func_0x2c516b58(iVar10,2);
    func_0x2c516b58(iVar10,1);
    func_0x2c516aa4(iVar10);
    func_0x2c516a6c(iVar10);
    func_0x2c5169e0(iVar10);
    uVar12 = *(undefined4 *)(iVar8 + 0x20);
    uVar4 = FUN_2c5e2e8c(_LAB_2c515e94);
    func_0x2c626d14(uVar12,uVar4);
    iVar5 = FUN_2c510a30(*(undefined4 *)(iVar8 + 0x1c));
    if (iVar5 == 0) {
      FUN_2c514738(*(undefined4 *)(param_1 + 4));
      func_0x2c516a18(iVar10);
    }
    else {
      FUN_2c516a34(iVar10);
    }
    FUN_2c5169a8(iVar10);
    if (*(char *)(iVar9 + 5) != '\x02') goto LAB_2c515d60;
LAB_2c515e2a:
    *(undefined1 *)(iVar9 + 5) = 0;
    FUN_2c511a5c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
    cVar2 = *(char *)(iVar9 + 1);
    cVar1 = *(char *)(param_1 + 9);
  }
  else {
    if (cVar1 == '\v') {
      registry_lookup(_LAB_2c515ea0);
      FUN_2c5e4068();
      goto LAB_2c515d44;
    }
    if (cVar1 != '\x1f') goto LAB_2c515d44;
    if (*(char *)(iVar11 + 4) == '\x01') {
      registry_lookup(_LAB_2c515e9c);
      FUN_2c5e4068();
      goto LAB_2c515d44;
    }
    func_0x2c516bc8(iVar10,_LAB_2c515e90);
    if (*(char *)(iVar11 + 4) == '\x01') goto LAB_2c515dd6;
LAB_2c515d4e:
    FUN_2c514ca4(param_1);
    FUN_2c510a74(*(undefined4 *)(iVar8 + 0x1c));
    if (*(char *)(iVar9 + 5) == '\x02') goto LAB_2c515e2a;
LAB_2c515d60:
    cVar2 = *(char *)(iVar9 + 1);
    cVar1 = *(char *)(param_1 + 9);
  }
  if (cVar2 == '\x03') {
    if (cVar1 != '\0') {
      return;
    }
    iVar9 = *_LAB_2c5136a0;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_2c674268(auStack_58,0,0x44,0);
    uStack_44 = _LAB_2c5136a8;
    uStack_40 = _LAB_2c5136a4;
    uStack_54 = FUN_2c5e2e8c(_LAB_2c5136ac);
    uStack_30 = 1;
    iVar8 = FUN_2c5115bc(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
    if (iVar8 == 1) {
      uStack_38 = _LAB_2c5136bc;
      uStack_3c = 0x1068;
    }
    else {
      uStack_3c = 0x1002;
      uStack_38 = _LAB_2c5136b0;
    }
    uStack_2c = _LAB_2c5136b4;
    uStack_34 = _LAB_2c5136b8;
    FUN_2c5e8f4c(auStack_58);
    if (*_LAB_2c5136a0 != iVar9) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(iVar11 + 4);
  }
  else {
    FUN_2c5e8fb4(_LAB_2c515e8c,_LAB_2c515e88);
    *(undefined1 *)(param_1 + 9) = 0;
    cVar1 = *(char *)(iVar11 + 4);
  }
  if (cVar1 != '\x01') {
    return;
  }
  FUN_2c5c55d8();
  iVar10 = func_0x2c5c6120();
  if ((iVar10 == 0) && (**(char **)(param_1 + 4) != '\0')) {
    **(char **)(param_1 + 4) = '\0';
  }
  FUN_2c510a74(*(undefined4 *)(iVar8 + 0x1c));
  if (**(char **)(param_1 + 4) != '\0') {
    FUN_2c515458();
    **(undefined1 **)(param_1 + 4) = 0;
    return;
  }
  if (*(char *)(iVar9 + 4) == '\"') {
    return;
  }
  *(undefined1 *)(iVar9 + 6) = 0;
  iVar8 = *(int *)(param_1 + 4);
  FUN_2c512d04(*(undefined4 *)(iVar8 + 0x10),extraout_r1,*(char *)(iVar9 + 4),uStack_20);
  FUN_2c5115ec(*(undefined4 *)(iVar8 + 0xc));
  uVar6 = (uint)*(byte *)(*(int *)(iVar8 + 0x10) + 6);
  if (uVar6 == 3) {
    if (*(char *)(*(int *)(iVar8 + 0x14) + 4) == '\0') {
      piVar7 = (int *)(iVar8 + 0x2c4);
      piVar3 = *(int **)(iVar8 + 0x308);
      if (piVar7 == piVar3) {
        iVar8 = *(int *)(iVar8 + 0x2c4);
        goto LAB_2c51514a;
      }
      goto LAB_2c515106;
    }
  }
  else {
    if (uVar6 < 4) {
      if (uVar6 - 1 < 2) {
        piVar7 = (int *)(iVar8 + 700);
        piVar3 = *(int **)(iVar8 + 0x308);
        if (piVar7 != piVar3) {
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 4))();
          }
          *(int **)(iVar8 + 0x308) = piVar7;
          FUN_2c513448(piVar7);
          goto LAB_2c5150b0;
        }
        iVar8 = *(int *)(iVar8 + 700);
        goto LAB_2c51514a;
      }
    }
    else if (uVar6 == 4) {
      switch(*(undefined1 *)(*(int *)(iVar8 + 0x10) + 3)) {
      case 1:
        piVar7 = (int *)(iVar8 + 0x2d0);
        piVar3 = *(int **)(iVar8 + 0x308);
        if (piVar7 != piVar3) {
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 4))();
          }
          *(int **)(iVar8 + 0x308) = piVar7;
          FUN_2c513458(piVar7);
LAB_2c5150b0:
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,DAT_2c515244,0x4d1,DAT_2c515240);
        }
        iVar8 = *(int *)(iVar8 + 0x2d0);
        break;
      case 2:
        piVar7 = (int *)(iVar8 + 0x2f8);
        piVar3 = *(int **)(iVar8 + 0x308);
        if (piVar7 != piVar3) {
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 4))();
          }
          *(int **)(iVar8 + 0x308) = piVar7;
          FUN_2c513e40(piVar7);
          iVar8 = **(int **)(iVar8 + 0x308);
LAB_2c5150d0:
                    /* WARNING: Could not recover jumptable at 0x2c5150d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar8 + 8))();
          return;
        }
        iVar8 = *(int *)(iVar8 + 0x2f8);
        break;
      case 3:
        piVar7 = (int *)(iVar8 + 0x2d8);
        piVar3 = *(int **)(iVar8 + 0x308);
        if (piVar7 != piVar3) {
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 4))();
          }
          *(int **)(iVar8 + 0x308) = piVar7;
          FUN_2c513460(piVar7);
          goto LAB_2c5150b0;
        }
        iVar8 = *(int *)(iVar8 + 0x2d8);
        break;
      case 4:
        piVar7 = (int *)(iVar8 + 0x2e8);
        piVar3 = *(int **)(iVar8 + 0x308);
        if (piVar7 != piVar3) {
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 4))();
          }
          *(int **)(iVar8 + 0x308) = piVar7;
          FUN_2c515020(piVar7);
          iVar8 = **(int **)(iVar8 + 0x308);
          goto LAB_2c5150d0;
        }
        iVar8 = *(int *)(iVar8 + 0x2e8);
        break;
      case 5:
        piVar7 = (int *)(iVar8 + 0x2e0);
        piVar3 = *(int **)(iVar8 + 0x308);
        if (piVar7 != piVar3) {
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 4))();
          }
          *(int **)(iVar8 + 0x308) = piVar7;
          FUN_2c513468(piVar7);
          goto LAB_2c5150b0;
        }
        iVar8 = *(int *)(iVar8 + 0x2e0);
        break;
      default:
        return;
      }
      goto LAB_2c51514a;
    }
    if (*(char *)(*(int *)(iVar8 + 0x14) + 4) == '\0') {
      piVar7 = (int *)(iVar8 + 0x2b0);
      piVar3 = *(int **)(iVar8 + 0x308);
      if (piVar7 == piVar3) {
        iVar8 = *(int *)(iVar8 + 0x2b0);
LAB_2c51514a:
                    /* WARNING: Could not recover jumptable at 0x2c515152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar8 + 8))(piVar7);
        return;
      }
LAB_2c515106:
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      *(int **)(iVar8 + 0x308) = piVar7;
      FUN_2c513e8c(piVar7);
                    /* WARNING: Could not recover jumptable at 0x2c515126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(iVar8 + 0x308) + 8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c511d88,0xb5);
}

