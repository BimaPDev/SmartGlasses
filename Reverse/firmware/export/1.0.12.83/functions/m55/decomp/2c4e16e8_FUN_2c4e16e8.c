/* FUN_2c4e16e8 @ 0x2c4e16e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4e16e8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_24 = *_LAB_2c4e19ac;
  iVar1 = func_0x2c4e1c54();
  if (iVar1 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x7bba,0x15,1);
    uVar5 = 0x15;
    iVar1 = 0;
    uVar8 = _LAB_2c4e19b8;
    uVar2 = _LAB_2c4e19b4;
    uVar7 = _LAB_2c4e19b0;
  }
  else {
    uVar2 = FUN_2c674268(param_1 + 0x4b,0,0x14);
    uVar7 = 0;
    if (param_2 == 0) {
LAB_2c4e1854:
      piVar6 = (int *)FUN_2c4e05fc(_LAB_2c4e19d0);
      if (piVar6 == (int *)0x0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x7bba,0x32,1);
        FUN_2c4e0504(_LAB_2c4e19c0,0,0,0,_LAB_2c4e19b8,0x32,_LAB_2c4e19b4,0x1300,_LAB_2c4e19d4);
        iVar1 = 0;
        goto LAB_2c4e1896;
      }
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(int **)(param_2 + 0x14) = param_1 + 0x50;
      if (*(int *)(param_2 + 0x34) != 0) {
        param_1[0x48] = *(int *)(param_2 + 0x34);
      }
      if (*(int *)(param_2 + 0x38) != 0) {
        param_1[0x49] = *(int *)(param_2 + 0x38);
      }
      if (*(int *)(param_2 + 0x24) != 0) {
        param_1[0x42] = *(int *)(param_2 + 0x24);
      }
      uVar8 = _LAB_2c4e19b8;
      uVar2 = _LAB_2c4e19b4;
      piVar6 = *(int **)(param_2 + 0x30);
      if (piVar6 == (int *)0x0) {
        iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
        if (*(int *)(param_2 + 0x1c) == 0) {
          FUN_2c4de6ca(iVar1,0x7bba,0x22,1);
          uVar5 = 0x22;
          uVar7 = _LAB_2c4e19bc;
        }
        else {
          uVar3 = FUN_2c66c4ec(*(int *)(param_2 + 0x1c));
          if (param_1[0x4a] != 0) {
            FUN_2c4de692(iVar1,param_1 + 0x4a);
          }
          iVar1 = FUN_2c4de67a(*(int *)(*param_1 + -0xc) + (int)param_1,(uVar3 & 0xff) + 1);
          param_1[0x4a] = iVar1;
          if (iVar1 != 0) {
            FUN_2c6435c4(iVar1,*(undefined4 *)(param_2 + 0x1c));
            FUN_2c4e0504(_LAB_2c4e19c8,4,0,0,uVar8,0x2c,uVar2,0x1300,_LAB_2c4e19cc,
                         *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x2c),
                         *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x28),
                         param_1[0x4a]);
            goto LAB_2c4e1854;
          }
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x7bba,0x2a,1);
          uVar5 = 0x2a;
          uVar7 = _LAB_2c4e19c4;
        }
        iVar1 = 0;
        goto LAB_2c4e17b2;
      }
    }
    iStack_40 = param_1[0x4a];
    param_1[0x4b] = iStack_40;
    uStack_3c = _LAB_2c4e19d8;
    uStack_38 = uVar7;
    iVar1 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_40);
    if (iVar1 == 0) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x7bba,0x39,1);
      uVar5 = 0x39;
      iVar1 = 0;
      uVar8 = _LAB_2c4e19b8;
      uVar2 = _LAB_2c4e19b4;
      uVar7 = _LAB_2c4e19dc;
    }
    else {
      iVar1 = FUN_2c4df914(piVar6);
      if (iVar1 == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x7bba,0x3a,1);
        uVar5 = 0x3a;
        iVar1 = 0;
        uVar8 = _LAB_2c4e19b8;
        uVar2 = _LAB_2c4e19b4;
        uVar7 = _LAB_2c4e19e0;
      }
      else {
        iVar1 = (**(code **)(*piVar6 + 0x24))(piVar6);
        param_1[0x40] = iVar1;
        param_1[0x2c] = iVar1;
        piVar4 = (int *)func_0x2c4dfae4(0x60);
        FUN_2c4e3da4();
        FUN_2c4de676(piVar4,*(int *)(*param_1 + -0xc) + (int)param_1);
        iStack_30 = param_1[0x48];
        uStack_28 = 1;
        iStack_2c = param_1[0x49];
        piStack_34 = piVar6;
        iVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,&piStack_34);
        uVar7 = _LAB_2c4e19e8;
        if (iVar1 != 0) {
          param_1[0x41] = (int)piVar4;
          func_0x2c4e0558(uVar7,param_1[0x4a]);
          goto LAB_2c4e1896;
        }
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x7bba,0x43,1);
        uVar5 = 0x43;
        uVar8 = _LAB_2c4e19b8;
        uVar2 = _LAB_2c4e19b4;
        uVar7 = _LAB_2c4e19e4;
      }
    }
  }
LAB_2c4e17b2:
  FUN_2c4e0504(_LAB_2c4e19c0,iVar1,iVar1,iVar1,uVar8,uVar5,uVar2,0x1300,uVar7);
LAB_2c4e1896:
  if (*_LAB_2c4e19ac == iStack_24) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

