/* FUN_2c60fbae @ 0x2c60fbae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c60fbae(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char in_NG;
  
  if (in_NG == '\0') {
    puVar7 = param_2 + 2;
    *puVar7 = *param_2;
    param_2[3] = param_2[1];
    uVar3 = FUN_2c62a64c(param_2);
    param_2[10] = param_2[10] & 0x80000000 | (uVar3 & 0x1fffffff) << 2;
    iVar1 = FUN_2c62be98(0x40);
    param_2[5] = iVar1;
    if (iVar1 != 0) {
      FUN_2c62c3b0(iVar1,param_2[10] & 0x7fffffff);
      *(byte *)((int)param_2 + 0x2b) =
           *(byte *)((int)param_2 + 0x2b) & 0x7f | (byte)((param_3 & 1) << 7);
      uVar6 = param_2[5];
      param_1[1] = puVar7;
      param_1[2] = puVar7;
      *param_1 = uVar6;
      piVar2 = (int *)FUN_2c601b5c();
      *(byte *)(*piVar2 + 0x10) = *(byte *)(*piVar2 + 0x10) & 0xbf | (byte)((param_3 & 1) << 6);
      return param_2;
    }
    uVar3 = param_2[10];
    uVar4 = 0x5b;
    uVar6 = _LAB_2c60fce0;
LAB_2c60fcc4:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c60fce4,uVar4,_LAB_2c60fcdc,uVar6,uVar3 & 0x7fffffff);
  }
  param_2[10] = param_2[10] & 0x80000000 | 0x6000;
  iVar1 = FUN_2c62a64c(param_2);
  uVar3 = param_2[10] & 0x7fffffff;
  if ((uint)(iVar1 * 4) < uVar3) {
    uVar3 = iVar1 << 2 & 0x7fffffff;
    param_2[10] = param_2[10] & 0x80000000 | iVar1 << 2 & 0x7fffffffU;
  }
  iVar1 = FUN_2c62be98(0x40,uVar3);
  param_2[5] = iVar1;
  if (iVar1 == 0) {
    param_2[10] = param_2[10] & 0x80000000 | 0xc00;
    iVar1 = FUN_2c62be98(0x40);
    param_2[5] = iVar1;
    if (iVar1 == 0) {
      uVar3 = param_2[10];
      uVar4 = 0x48;
      uVar6 = _LAB_2c60fcd8;
      goto LAB_2c60fcc4;
    }
  }
  param_2[2] = *param_2;
  param_2[3] = param_2[1];
  *(undefined2 *)((int)param_2 + 0xe) = *(undefined2 *)((int)param_2 + 2);
  uVar5 = (int)(param_2[10] & 0x7fffffff) /
          (int)(short)((*(short *)(param_2 + 3) + 1) - *(short *)(param_2 + 2));
  uVar3 = uVar5;
  if ((int)uVar5 < 0) {
    uVar3 = uVar5 + 3;
  }
  *(short *)((int)param_2 + 0x12) = (short)(uVar5 >> 2);
  *(short *)(param_2 + 4) = (short)((int)uVar3 >> 2);
  return param_2;
}

