/* FUN_2c4e133c @ 0x2c4e133c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4e133c(int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 unaff_r4;
  int iVar8;
  undefined4 unaff_lr;
  char in_ZR;
  
  if (in_ZR != '\0') {
    bVar2 = FUN_2c66c4ec(param_3);
    if (param_1[0x4a] != 0) {
      FUN_2c4de692(*(int *)(*param_1 + -0xc) + (int)param_1,param_1 + 0x4a);
    }
    uVar1 = _LAB_2c4e1420;
    uVar7 = _LAB_2c4e140c;
    iVar5 = FUN_2c4de67a(*(int *)(*param_1 + -0xc) + (int)param_1,bVar2 + 1);
    param_1[0x4a] = iVar5;
    if (iVar5 != 0) {
      FUN_2c6435c4(iVar5,param_3);
      FUN_2c4e0504(_LAB_2c4e1418,4,0,0,uVar7,0xd0,uVar1,0x1300,_LAB_2c4e141c,
                   *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x2c),
                   *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x28),param_1[0x4a]);
    }
    else {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x7bba,0xcd,1);
      FUN_2c4e0504(_LAB_2c4e1414,0,0,0,uVar7,0xcd,uVar1,0x1300,_LAB_2c4e1410);
    }
    return (uint)(iVar5 != 0);
  }
  uVar6 = func_0x2c4df6f0(param_1 + 0x31);
  if (uVar6 != 0) {
    return uVar6;
  }
  if (param_2 == _LAB_2c4de31c) {
    param_1[6] = (int)param_3;
    return 1;
  }
  if (param_2 < _LAB_2c4de31c) {
    if (param_2 == _LAB_2c4de320) {
LAB_2c4de310:
      param_1[8] = (int)param_3;
      return 1;
    }
    if (param_2 == _LAB_2c4de320 + 0x4e5a0c4f) {
      *(bool *)(param_1 + 0x29) = param_3 != (undefined4 *)0x0;
      return 1;
    }
    if (param_2 != _LAB_2c4de324) {
LAB_2c4de2f6:
      iVar5 = (int)param_1 + *(int *)(*param_1 + -0xc);
      if (param_2 == _LAB_2c4de520) {
        *(undefined4 **)(iVar5 + 0x38) = param_3;
        return 1;
      }
      if (param_2 < _LAB_2c4de520) {
        if (param_2 == _LAB_2c4de524) {
          *(undefined4 **)(iVar5 + 0x3c) = param_3;
          return 1;
        }
      }
      else if ((param_2 == _LAB_2c4de528) || (param_2 == _LAB_2c4de528 + 0x9005b34)) {
        piVar3 = (int *)(iVar5 + 0x30);
        iVar8 = *(int *)(iVar5 + 0x34);
        if (iVar8 < (int)param_3) {
          do {
            iVar8 = iVar8 + 1;
            iVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,iVar8);
            if (iVar4 == 0) {
              FUN_2c4e34f4(0x5bb1,10,1);
              uVar7 = 10;
LAB_2c4de94e:
              FUN_2c4e0504(DAT_2c4de9b4,0,0,0,DAT_2c4de9b0,uVar7,DAT_2c4de9ac,0x1300,DAT_2c4de9a8);
              return 0;
            }
            *(int *)(iVar5 + 0x34) = iVar8;
          } while (iVar8 < (int)param_3);
        }
        else {
          while ((int)param_3 < iVar8) {
            iVar8 = iVar8 + -1;
            iVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,iVar8);
            if (iVar4 == 0) {
              FUN_2c4e34f4(0x5bb1,0x13,1);
              uVar7 = 0x13;
              goto LAB_2c4de94e;
            }
            *(int *)(iVar5 + 0x34) = iVar8;
          }
        }
        return 1;
      }
      if (param_2 == _LAB_2c4de668) {
        uVar7 = param_3[1];
        *(undefined4 *)(iVar5 + 8) = *param_3;
        *(undefined4 *)(iVar5 + 0xc) = uVar7;
      }
      else {
        if (param_2 != _LAB_2c4de66c) {
          return 0;
        }
        func_0x2c4de618(iVar5,param_3,param_3,_LAB_2c4de66c,unaff_r4,unaff_lr);
      }
      return 1;
    }
  }
  else if (param_2 != _DAT_2c4de328) {
    if (param_2 != _LAB_2c4de32c) {
      if (param_2 == _LAB_2c4de330) {
        param_1[7] = (int)param_3;
        return 1;
      }
      goto LAB_2c4de2f6;
    }
    goto LAB_2c4de310;
  }
  param_1[9] = (int)param_3;
  return 1;
}

