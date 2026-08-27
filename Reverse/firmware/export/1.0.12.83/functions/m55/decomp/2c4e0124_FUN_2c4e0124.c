/* FUN_2c4e0124 @ 0x2c4e0124 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4e0124(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_lr;
  
  iVar3 = func_0x2c4de2bc();
  if (iVar3 != 0) {
    return iVar3;
  }
  if (param_2 == _LAB_2c4df438) {
LAB_2c4df42c:
    *(undefined4 **)(param_1 + 0xcc) = param_3;
  }
  else {
    if (param_2 < _LAB_2c4df438) {
      if (param_2 == _LAB_2c4df438 + 0x8c78e775) goto LAB_2c4df42c;
      if (param_2 == _LAB_2c4df43c) {
        *(undefined4 **)(param_1 + 0x150) = param_3;
        return 1;
      }
      if (param_2 != _DAT_2c4df440) goto LAB_2c4df418;
    }
    else if (param_2 != _DAT_2c4df444) {
      if (param_2 == _LAB_2c4df448) {
        *(undefined4 **)(param_1 + 0xc0) = param_3;
        return 1;
      }
      if (param_2 == _LAB_2c4df44c) {
        *(undefined4 **)(param_1 + 0xc4) = param_3;
        return 1;
      }
LAB_2c4df418:
      iVar3 = param_1 + 0xa8 + *(int *)(*(int *)(param_1 + 0xa8) + -0xc);
      if (param_2 == _LAB_2c4de520) {
        *(undefined4 **)(iVar3 + 0x38) = param_3;
        return 1;
      }
      if (param_2 < _LAB_2c4de520) {
        if (param_2 == _LAB_2c4de524) {
          *(undefined4 **)(iVar3 + 0x3c) = param_3;
          return 1;
        }
      }
      else if ((param_2 == _LAB_2c4de528) || (param_2 == _LAB_2c4de528 + 0x9005b34)) {
        piVar1 = (int *)(iVar3 + 0x30);
        iVar5 = *(int *)(iVar3 + 0x34);
        if (iVar5 < (int)param_3) {
          do {
            iVar5 = iVar5 + 1;
            iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,iVar5);
            if (iVar2 == 0) {
              FUN_2c4e34f4(0x5bb1,10,1);
              uVar4 = 10;
LAB_2c4de94e:
              FUN_2c4e0504(DAT_2c4de9b4,0,0,0,DAT_2c4de9b0,uVar4,DAT_2c4de9ac,0x1300,DAT_2c4de9a8);
              return 0;
            }
            *(int *)(iVar3 + 0x34) = iVar5;
          } while (iVar5 < (int)param_3);
        }
        else {
          while ((int)param_3 < iVar5) {
            iVar5 = iVar5 + -1;
            iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,iVar5);
            if (iVar2 == 0) {
              FUN_2c4e34f4(0x5bb1,0x13,1);
              uVar4 = 0x13;
              goto LAB_2c4de94e;
            }
            *(int *)(iVar3 + 0x34) = iVar5;
          }
        }
        return 1;
      }
      if (param_2 == _LAB_2c4de668) {
        uVar4 = param_3[1];
        *(undefined4 *)(iVar3 + 8) = *param_3;
        *(undefined4 *)(iVar3 + 0xc) = uVar4;
      }
      else {
        if (param_2 != _LAB_2c4de66c) {
          return 0;
        }
        func_0x2c4de618(iVar3,param_3,param_3,_LAB_2c4de66c,unaff_r4,unaff_lr);
      }
      return 1;
    }
    *(undefined4 **)(param_1 + 200) = param_3;
  }
  return 1;
}

