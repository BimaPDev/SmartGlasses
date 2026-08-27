/* FUN_2c0bc6fc @ 0x2c0bc6fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c0bc6fc(undefined2 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint unaff_r4;
  int unaff_r5;
  uint uVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  int *piVar8;
  undefined4 unaff_lr;
  int iStack_10;
  uint uStack_c;
  
  uVar1 = _DAT_2c0bcaa8;
  uStack_c = param_3;
  piVar8 = &iStack_10;
  iStack_10 = param_2;
  uVar6 = unaff_r5 - 0x48;
  if (_DAT_2c0bcaa8 == 0) {
    uVar1 = (uint)piVar8 >> 0xd;
    *param_4 = param_1;
    param_4[1] = 0;
    param_4[2] = param_3;
    param_4[3] = unaff_r7;
    param_4 = param_4 + 4;
    iVar3 = 0;
    if (param_3 == 0) {
      piVar8 = (int *)&stack0xfffffffc;
      param_3 = 0;
      if (unaff_r6 >> 3 < 0 != SBORROW4(uVar1,unaff_r9)) {
        return CONCAT44(param_2,unaff_lr);
      }
      goto LAB_2c0bc784;
    }
  }
  else {
    *param_1 = (short)param_1;
    uVar5 = param_3 & ~unaff_r4;
    uVar7 = unaff_r7 & ~uVar6;
    *param_1 = (short)param_1;
    param_1 = (undefined2 *)~uVar1;
    uVar2 = SUB42(param_1,0);
    *param_1 = uVar2;
    *param_1 = uVar2;
    uVar6 = ~uVar6;
    param_3 = ~uVar7;
    param_4 = (undefined4 *)(((uint)param_4 & ~uVar7) + (int)param_1);
    *param_1 = uVar2;
    iVar3 = uVar5 * 2;
    unaff_r7 = uVar7 + iVar3;
    unaff_r6 = unaff_r6 + param_3;
    unaff_r4 = ~uVar5 + (int)param_4;
    *param_1 = uVar2;
  }
  param_2 = iVar3;
  param_3 = param_3 + unaff_r4;
LAB_2c0bc784:
  param_1 = (undefined2 *)((int)param_1 + uVar6);
  *param_1 = (short)param_1;
  param_1 = (undefined2 *)((int)param_1 + unaff_r9);
  *param_1 = (short)param_1;
  *param_1 = (short)param_1;
  puVar4 = (undefined2 *)~(param_2 + unaff_r8);
  uVar2 = SUB42(puVar4,0);
  *puVar4 = uVar2;
  *puVar4 = uVar2;
  *puVar4 = uVar2;
  iVar3 = ~(param_3 & ~unaff_r4) +
          ((int)param_4 + unaff_r7 + uVar6 & ~(unaff_r7 + uVar6 & ~(uVar6 + unaff_r6)));
  *puVar4 = uVar2;
  *(undefined2 *)((int)puVar4 + iVar3 + 0x38) = *(undefined2 *)((int)puVar4 + iVar3 + 0xe);
  return *(undefined8 *)piVar8;
}

