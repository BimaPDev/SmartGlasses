/* FUN_2c4e0076 @ 0x2c4e0076 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e0076(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  iVar1 = FUN_2c4ddd3c();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)(param_1 + 0xa8);
  if (*param_2 == 0) {
    if ((*(int *)(param_1 + 0xb8) == 0) && (iVar1 = FUN_2c4decb8(piVar2,1), iVar1 == 0)) {
      FUN_2c4de6ca(*(int *)(*piVar2 + -0xc) + (int)piVar2,0x24b8,0x6d,1);
      uVar5 = 0x6d;
      uVar4 = _LAB_2c4df12c;
    }
    else {
      *param_2 = param_1 + 0xd0;
      if (*(int *)(param_1 + 0xd0) != 0) {
        *(undefined4 *)(param_1 + 0xe0) = 0;
        goto LAB_2c4deee8;
      }
      FUN_2c4de6ca(*(int *)(*piVar2 + -0xc) + (int)piVar2,0x24b8,0x70,1);
      uVar5 = 0x70;
      uVar4 = _LAB_2c4df13c;
    }
  }
  else {
LAB_2c4deee8:
    iVar1 = *param_2;
    if (*(int *)(param_1 + 0xb4) == 0) {
      if ((*(code **)(param_1 + 0xb0) != (code *)0x0) &&
         (iVar1 = (**(code **)(param_1 + 0xb0))(iVar1,*(undefined4 *)(param_1 + 0xac)), iVar1 == 0))
      {
        if (*(int *)(*param_2 + 0x10) << 0x1e < 0) {
          FUN_2c4de6ca(*(int *)(*piVar2 + -0xc) + (int)piVar2,0x24b8,0x87,0x200);
          uVar6 = 2;
          uVar5 = 0x87;
          uVar3 = _LAB_2c4df148;
          uVar4 = _LAB_2c4df144;
          goto LAB_2c4defce;
        }
        if (*(int *)(*param_2 + 0x10) << 0x1f < 0) {
          FUN_2c4de6ca(*(int *)(*piVar2 + -0xc) + (int)piVar2,0x24b8,0x88,0x203);
          uVar5 = 0x88;
          uVar4 = _LAB_2c4df14c;
          goto LAB_2c4deea4;
        }
      }
    }
    else if ((*(uint *)(iVar1 + 0x10) & 0x200) == 0) {
      FUN_2c4dedd8(piVar2,iVar1);
    }
    puVar8 = *(undefined4 **)(*param_2 + 0x14);
    if ((puVar8 != (undefined4 *)0x0) && ((int)((uint)*(byte *)(puVar8 + 2) << 0x1e) < 0)) {
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar6 = puVar8[3];
      *(undefined4 *)(param_1 + 0xf8) = *puVar8;
      *(undefined4 *)(param_1 + 0xfc) = uVar3;
      *(undefined4 *)(param_1 + 0x100) = uVar4;
      *(undefined4 *)(param_1 + 0x104) = uVar6;
      uVar3 = puVar8[5];
      uVar4 = puVar8[6];
      uVar6 = puVar8[7];
      *(undefined4 *)(param_1 + 0x108) = puVar8[4];
      *(undefined4 *)(param_1 + 0x10c) = uVar3;
      *(undefined4 *)(param_1 + 0x110) = uVar4;
      *(undefined4 *)(param_1 + 0x114) = uVar6;
      uVar3 = puVar8[9];
      uVar4 = puVar8[10];
      uVar6 = puVar8[0xb];
      *(undefined4 *)(param_1 + 0x118) = puVar8[8];
      *(undefined4 *)(param_1 + 0x11c) = uVar3;
      *(undefined4 *)(param_1 + 0x120) = uVar4;
      *(undefined4 *)(param_1 + 0x124) = uVar6;
      uVar3 = puVar8[0xd];
      *(undefined4 *)(param_1 + 0x128) = puVar8[0xc];
      *(undefined4 *)(param_1 + 300) = uVar3;
      *(byte *)(*(int *)(*param_2 + 0x14) + 8) = *(byte *)(*(int *)(*param_2 + 0x14) + 8) & 0xfd;
    }
    if ((*(int *)(*param_2 + 0x10) << 1 < 0) &&
       (iVar1 = func_0x2c4e2050(param_1 + 0x148), iVar1 != 0)) {
      FUN_2c4de6ca(*(int *)(*piVar2 + -0xc) + (int)piVar2,0x24b8,0x97,1);
      FUN_2c4e0504(_LAB_2c4df138,0,0,0,_LAB_2c4df134,0x97,_LAB_2c4df130,0x1300,_LAB_2c4df140);
      return 0;
    }
    if (*(int *)(*param_2 + 0x10) << 0x19 < 0) {
      if (*(int *)(param_1 + 0x150) == 0) {
        FUN_2c4de6ca(*(int *)(*piVar2 + -0xc) + (int)piVar2,0x24b8,0x9b,1);
        uVar5 = 0x9b;
        uVar4 = _LAB_2c4df150;
        goto LAB_2c4deea4;
      }
      if (*(int *)(param_1 + 0x14c) == 0) {
        uVar3 = func_0x2c4dfae4(0x30);
        FUN_2c4e1d78(uVar3,*(int *)(*piVar2 + -0xc) + (int)piVar2,*(undefined4 *)(param_1 + 0x150));
        *(undefined4 *)(param_1 + 0x14c) = uVar3;
      }
    }
    if ((*(int *)(param_1 + 0x14c) == 0) ||
       (iVar1 = func_0x2c4e1e18(*(int *)(param_1 + 0x14c),*param_2), iVar1 != 0)) {
      if ((*(int *)(param_1 + 0xc0) != 0) &&
         (iVar1 = FUN_2c4df4f8((int)piVar2 + *(int *)(*piVar2 + -0xc) + 0x10,0x400000), iVar1 == 0))
      {
        piVar7 = (int *)*param_2;
        (**(code **)(param_1 + 0xc0))(piVar7[2] + *piVar7,piVar7[3],*(undefined4 *)(param_1 + 0xc4))
        ;
      }
      iVar1 = *(int *)(*param_2 + 0x10);
      if (iVar1 << 0x1b < 0) {
        iVar1 = (**(code **)(*piVar2 + 0x28))(piVar2);
        if (iVar1 != 0) {
          return 0;
        }
        FUN_2c4de6ca(*(int *)(*piVar2 + -0xc) + (int)piVar2,0x24b8,0xaa,1);
        uVar5 = 0xaa;
        uVar4 = _LAB_2c4df158;
      }
      else {
        if (-1 < iVar1 << 0x1a) {
          *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + *(int *)(*param_2 + 0xc);
          return 1;
        }
        iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2);
        if (iVar1 != 0) {
          return 0;
        }
        FUN_2c4de6ca(*(int *)(*piVar2 + -0xc) + (int)piVar2,0x24b8,0xae,1);
        uVar5 = 0xae;
        uVar4 = _LAB_2c4df15c;
      }
    }
    else {
      FUN_2c4de6ca(*(int *)(*piVar2 + -0xc) + (int)piVar2,0x24b8,0xa2,1);
      uVar5 = 0xa2;
      uVar4 = _LAB_2c4df154;
    }
  }
LAB_2c4deea4:
  uVar6 = 0;
  uVar3 = _LAB_2c4df138;
LAB_2c4defce:
  FUN_2c4e0504(uVar3,uVar6,0,0,_LAB_2c4df134,uVar5,_LAB_2c4df130,0x1300,uVar4);
  return 0;
}

