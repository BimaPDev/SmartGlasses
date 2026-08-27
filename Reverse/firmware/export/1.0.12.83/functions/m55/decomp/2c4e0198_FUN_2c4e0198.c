/* FUN_2c4e0198 @ 0x2c4e0198 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e0198(int *param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar7 = *(int *)(*param_1 + -0xc) + (int)param_1;
  uVar2 = *(ushort *)(iVar7 + 0x18);
  if ((uVar2 & 0xffd) == 0x111) {
    *(ushort *)(iVar7 + 0x18) = uVar2 | 0x1000;
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xd47e,0x2a,1);
    iVar7 = param_1[0x24];
    iVar11 = *(int *)(*param_1 + -0xc);
    iVar8 = param_1[0x4e];
    iVar9 = param_1[0x23];
    iVar10 = param_1[0x4d];
    uVar3 = *(undefined2 *)((int)param_1 + iVar11 + 0x1e);
    uVar4 = *(undefined2 *)((int)param_1 + iVar11 + 0x1c);
    uVar5 = *(undefined2 *)((int)param_1 + iVar11 + 0x1a);
    uVar2 = *(ushort *)((int)param_1 + iVar11 + 0x18);
    uVar12 = *(undefined4 *)((int)param_1 + iVar11 + 0x28);
    uVar13 = *(undefined4 *)((int)param_1 + iVar11 + 0x2c);
    uVar14 = 0x2a;
  }
  else {
    if ((uVar2 & 0xfff) == 0) {
      return 1;
    }
    FUN_2c4de6ca(iVar7,0xd47e,0x2f,1);
    iVar7 = param_1[0x24];
    iVar11 = *(int *)(*param_1 + -0xc);
    iVar8 = param_1[0x4e];
    iVar9 = param_1[0x23];
    iVar10 = param_1[0x4d];
    uVar3 = *(undefined2 *)((int)param_1 + iVar11 + 0x1e);
    uVar4 = *(undefined2 *)((int)param_1 + iVar11 + 0x1c);
    uVar5 = *(undefined2 *)((int)param_1 + iVar11 + 0x1a);
    uVar2 = *(ushort *)((int)param_1 + iVar11 + 0x18);
    uVar12 = *(undefined4 *)((int)param_1 + iVar11 + 0x28);
    uVar13 = *(undefined4 *)((int)param_1 + iVar11 + 0x2c);
    uVar14 = 0x2f;
  }
  FUN_2c4e0504(_LAB_2c4e02c8,0,0,0,_LAB_2c4e02c4,uVar14,_LAB_2c4e02c0,0x1300,_LAB_2c4e02bc,uVar13,
               uVar12,uVar2 & 0xfff,uVar5,uVar4,uVar3,iVar10,iVar9,iVar8,iVar7);
  iVar7 = *(int *)(*param_1 + -0xc);
  sVar1 = *(short *)((int)param_1 + iVar7 + 0x18);
  if (sVar1 == 0) {
    uVar14 = 1;
  }
  else {
    iVar8 = *(int *)((int)param_1 + iVar7 + 4);
    if (iVar8 != 0) {
      piVar6 = (int *)func_0x2c4de6dc(iVar8,param_2,param_3,sVar1,unaff_r4,unaff_lr);
      if (piVar6[1] == 0 && *piVar6 == 0) {
        func_0x2c4de6e0(*(undefined4 *)((int)param_1 + iVar7 + 4),(int)param_1 + iVar7 + 0x18);
      }
    }
    uVar14 = 0;
  }
  return uVar14;
}

