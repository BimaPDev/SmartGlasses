/* FUN_2c4dee64 @ 0x2c4dee64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4dee64(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  
  if (*param_2 == 0) {
    if ((param_1[4] == 0) && (iVar1 = FUN_2c4decb8(param_1,1), iVar1 == 0)) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0x6d,1);
      uVar5 = 0x6d;
      uVar8 = _LAB_2c4df12c;
    }
    else {
      *param_2 = (int)(param_1 + 10);
      if (param_1[10] != 0) {
        param_1[0xe] = 0;
        goto LAB_2c4deee8;
      }
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0x70,1);
      uVar5 = 0x70;
      uVar8 = _LAB_2c4df13c;
    }
  }
  else {
LAB_2c4deee8:
    iVar1 = *param_2;
    if (param_1[3] == 0) {
      if (((code *)param_1[2] != (code *)0x0) &&
         (iVar1 = (*(code *)param_1[2])(iVar1,param_1[1]), iVar1 == 0)) {
        if (*(int *)(*param_2 + 0x10) << 0x1e < 0) {
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0x87,0x200);
          uVar3 = 2;
          uVar5 = 0x87;
          uVar2 = _LAB_2c4df148;
          uVar8 = _LAB_2c4df144;
          goto LAB_2c4defce;
        }
        if (*(int *)(*param_2 + 0x10) << 0x1f < 0) {
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0x88,0x203);
          uVar5 = 0x88;
          uVar8 = _LAB_2c4df14c;
          goto LAB_2c4deea4;
        }
      }
    }
    else if ((*(uint *)(iVar1 + 0x10) & 0x200) == 0) {
      FUN_2c4dedd8(param_1,iVar1);
    }
    piVar7 = *(int **)(*param_2 + 0x14);
    if ((piVar7 != (int *)0x0) && ((int)((uint)*(byte *)(piVar7 + 2) << 0x1e) < 0)) {
      iVar1 = piVar7[1];
      iVar4 = piVar7[2];
      iVar6 = piVar7[3];
      param_1[0x14] = *piVar7;
      param_1[0x15] = iVar1;
      param_1[0x16] = iVar4;
      param_1[0x17] = iVar6;
      iVar1 = piVar7[5];
      iVar4 = piVar7[6];
      iVar6 = piVar7[7];
      param_1[0x18] = piVar7[4];
      param_1[0x19] = iVar1;
      param_1[0x1a] = iVar4;
      param_1[0x1b] = iVar6;
      iVar1 = piVar7[9];
      iVar4 = piVar7[10];
      iVar6 = piVar7[0xb];
      param_1[0x1c] = piVar7[8];
      param_1[0x1d] = iVar1;
      param_1[0x1e] = iVar4;
      param_1[0x1f] = iVar6;
      iVar1 = piVar7[0xd];
      param_1[0x20] = piVar7[0xc];
      param_1[0x21] = iVar1;
      *(byte *)(*(int *)(*param_2 + 0x14) + 8) = *(byte *)(*(int *)(*param_2 + 0x14) + 8) & 0xfd;
    }
    if ((*(int *)(*param_2 + 0x10) << 1 < 0) &&
       (iVar1 = func_0x2c4e2050(param_1 + 0x28), iVar1 != 0)) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0x97,1);
      FUN_2c4e0504(_LAB_2c4df138,0,0,0,_LAB_2c4df134,0x97,_LAB_2c4df130,0x1300,_LAB_2c4df140);
      return 0;
    }
    if (*(int *)(*param_2 + 0x10) << 0x19 < 0) {
      if (param_1[0x2a] == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0x9b,1);
        uVar5 = 0x9b;
        uVar8 = _LAB_2c4df150;
        goto LAB_2c4deea4;
      }
      if (param_1[0x29] == 0) {
        iVar1 = func_0x2c4dfae4(0x30);
        FUN_2c4e1d78(iVar1,*(int *)(*param_1 + -0xc) + (int)param_1,param_1[0x2a]);
        param_1[0x29] = iVar1;
      }
    }
    if ((param_1[0x29] == 0) || (iVar1 = func_0x2c4e1e18(param_1[0x29],*param_2), iVar1 != 0)) {
      if ((param_1[6] != 0) &&
         (iVar1 = FUN_2c4df4f8((int)param_1 + *(int *)(*param_1 + -0xc) + 0x10,0x400000), iVar1 == 0
         )) {
        piVar7 = (int *)*param_2;
        (*(code *)param_1[6])(piVar7[2] + *piVar7,piVar7[3],param_1[7]);
      }
      iVar1 = *(int *)(*param_2 + 0x10);
      if (iVar1 << 0x1b < 0) {
        iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
        if (iVar1 != 0) {
          return 0;
        }
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0xaa,1);
        uVar5 = 0xaa;
        uVar8 = _LAB_2c4df158;
      }
      else {
        if (-1 < iVar1 << 0x1a) {
          param_1[0x24] = param_1[0x24] + *(int *)(*param_2 + 0xc);
          return 1;
        }
        iVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
        if (iVar1 != 0) {
          return 0;
        }
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0xae,1);
        uVar5 = 0xae;
        uVar8 = _LAB_2c4df15c;
      }
    }
    else {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0xa2,1);
      uVar5 = 0xa2;
      uVar8 = _LAB_2c4df154;
    }
  }
LAB_2c4deea4:
  uVar3 = 0;
  uVar2 = _LAB_2c4df138;
LAB_2c4defce:
  FUN_2c4e0504(uVar2,uVar3,0,0,_LAB_2c4df134,uVar5,_LAB_2c4df130,0x1300,uVar8);
  return 0;
}

