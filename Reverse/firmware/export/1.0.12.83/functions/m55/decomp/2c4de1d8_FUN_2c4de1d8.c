/* FUN_2c4de1d8 @ 0x2c4de1d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4de1d8(int *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  param_1[0x24] = param_1[0x24] + *(int *)(param_3 + 0xc);
  iVar7 = *(int *)(*param_1 + -0xc);
  uVar2 = *(ushort *)((int)param_1 + iVar7 + 0x18);
  uVar6 = uVar2 & 0xfff;
  if (uVar6 == 0x201) {
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 3;
  }
  else if (uVar6 < 0x202) {
    if ((uVar2 & 0xfff) == 0) {
      return 1;
    }
    if (uVar6 == 0x200) {
      FUN_2c4e0504(_LAB_2c4de298,2,0,0,_LAB_2c4de2a4,200,_LAB_2c4de2a0,0x1300,_LAB_2c4de29c,
                   *(undefined4 *)((int)param_1 + iVar7 + 0x28),
                   *(undefined4 *)((int)param_1 + iVar7 + 0x2c),*(undefined4 *)(param_3 + 0x10),
                   *(undefined4 *)(param_3 + 0xc));
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 2;
      (**(code **)(*param_1 + 0x24))(param_1,0,param_3);
    }
  }
  else if (uVar6 == 0x300) {
    if (*(int *)(param_3 + 0xc) == 0) {
      return 1;
    }
  }
  else if (uVar6 == 0x302) {
    *(undefined4 *)(param_3 + 0xc) = 0;
    return 1;
  }
  iVar7 = *(int *)(*param_1 + -0xc);
  sVar1 = *(short *)((int)param_1 + iVar7 + 0x18);
  if (sVar1 == 0) {
    uVar4 = 1;
  }
  else {
    iVar3 = *(int *)((int)param_1 + iVar7 + 4);
    if ((iVar3 != 0) &&
       (piVar5 = (int *)func_0x2c4de6dc(iVar3,0,param_3,sVar1,unaff_r4,unaff_lr),
       piVar5[1] == 0 && *piVar5 == 0)) {
      func_0x2c4de6e0(*(undefined4 *)((int)param_1 + iVar7 + 4),(int)param_1 + iVar7 + 0x18);
    }
    uVar4 = 0;
  }
  return uVar4;
}

