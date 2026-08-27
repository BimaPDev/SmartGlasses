/* FUN_2c6605fc @ 0x2c6605fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c6605fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined4 *param_7)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  piVar3 = (int *)FUN_2c65faf0(param_5 + 0x6c);
  iVar4 = FUN_2c6600ac(param_5 + 0x6c);
  piVar7 = (int *)*param_7;
  piVar1 = piVar7 + -3;
  if (*piVar7 == *(int *)(iVar4 + 0x40)) {
    uStack_3c = *(undefined4 *)(iVar4 + 0x3c);
    uVar10 = *(uint *)(iVar4 + 0x30);
    puStack_54 = *(undefined4 **)(iVar4 + 0x2c);
    if (*piVar1 != 0) {
      piVar7 = piVar7 + 1;
    }
  }
  else {
    uStack_3c = *(undefined4 *)(iVar4 + 0x38);
    uVar10 = *(uint *)(iVar4 + 0x28);
    puStack_54 = *(undefined4 **)(iVar4 + 0x24);
  }
  iVar5 = (**(code **)(*piVar3 + 0x14))(piVar3,4,piVar7,piVar7 + *piVar1);
  uVar8 = iVar5 - (int)piVar7 >> 2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  if (uVar8 != 0) {
    iStack_38 = _LAB_2c66084c;
    FUN_2c651802(&iStack_38,uVar8 << 1);
    iVar5 = *(int *)(iVar4 + 0x34);
    uVar11 = uVar8 - iVar5;
    if (0 < (int)uVar11) {
      uVar11 = uVar11 & ~(iVar5 >> 0x20);
      if (iVar5 < 0) {
        uVar11 = uVar8;
      }
      if (*(int *)(iVar4 + 0xc) == 0) {
        FUN_2c65173c(&iStack_38,piVar7,uVar11);
      }
      else {
        FUN_2c6516e0(&iStack_38,0,*(undefined4 *)(iStack_38 + -0xc),uVar11 << 1,0);
        FUN_2c65169c(&iStack_38);
        iVar5 = FUN_2c65fd48(iStack_38,*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 8),
                             *(undefined4 *)(iVar4 + 0xc),piVar7,piVar7 + uVar11);
        FUN_2c65169c(&iStack_38);
        func_0x2c65f5c0(&iStack_38,iVar5 - iStack_38 >> 2,0xffffffff);
      }
    }
    if (0 < *(int *)(iVar4 + 0x34)) {
      FUN_2c6519a2(&iStack_38,*(undefined4 *)(iVar4 + 0x14));
      if ((int)uVar11 < 0) {
        FUN_2c651904(&iStack_38,-uVar11,*(undefined4 *)(iVar4 + 0x44));
      }
      else {
        uVar8 = *(uint *)(iVar4 + 0x34);
        piVar7 = piVar7 + uVar11;
      }
      FUN_2c651890(&iStack_38,piVar7,uVar8);
    }
    uVar8 = *(uint *)(param_5 + 0xc) & 0xb0;
    iVar5 = 0;
    if ((*(uint *)(param_5 + 0xc) & 0x200) != 0) {
      iVar5 = *(int *)(iVar4 + 0x20);
    }
    iStack_34 = _LAB_2c66084c;
    uVar11 = iVar5 + *(int *)(iStack_38 + -0xc) + uVar10;
    FUN_2c651802(&iStack_34,uVar11 * 2);
    uVar9 = *(uint *)(param_5 + 8);
    if (uVar8 == 0x10) {
      if (uVar11 < uVar9) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
    iVar5 = 0;
    do {
      switch(*(undefined1 *)((int)&uStack_3c + iVar5)) {
      case 0:
        if (bVar2) {
LAB_2c66081e:
          FUN_2c651904(&iStack_34,uVar9 - uVar11,param_6);
        }
        break;
      case 1:
        uVar6 = param_6;
        if (bVar2) goto LAB_2c66081e;
LAB_2c660806:
        FUN_2c6519a2(&iStack_34,uVar6);
        break;
      case 2:
        if (*(int *)(param_5 + 0xc) << 0x16 < 0) {
          FUN_2c651890(&iStack_34,*(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)(iVar4 + 0x20));
        }
        break;
      case 3:
        if (uVar10 != 0) {
          uVar6 = *puStack_54;
          goto LAB_2c660806;
        }
        break;
      case 4:
        FUN_2c651840(&iStack_34,&iStack_38);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
    if (1 < uVar10) {
      FUN_2c651890(&iStack_34,puStack_54 + 1,uVar10 - 1);
    }
    uVar10 = *(uint *)(iStack_34 + -0xc);
    if (uVar10 < uVar9) {
      if (uVar8 == 0x20) {
        FUN_2c651904(&iStack_34,uVar9 - uVar10,param_6);
        uVar10 = uVar9;
      }
      else {
        FUN_2c6516e0(&iStack_34,0,0,uVar9 - uVar10,param_6);
        uVar10 = uVar9;
      }
    }
    FUN_2c6565e8(&uStack_30,param_3,param_4,iStack_34,uVar10);
    uStack_48 = uStack_30;
    uStack_44 = CONCAT31((int3)((uint)param_4 >> 8),uStack_2c);
    FUN_2c6515c0(&iStack_34);
    FUN_2c6515c0(&iStack_38);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  return param_1;
}

