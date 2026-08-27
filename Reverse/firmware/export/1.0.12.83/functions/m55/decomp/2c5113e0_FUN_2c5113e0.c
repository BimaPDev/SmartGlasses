/* FUN_2c5113e0 @ 0x2c5113e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5113e0(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  
  iVar4 = FUN_2c48e424(param_2,_LAB_2c511514);
  iVar5 = FUN_2c48e424(param_2,_LAB_2c511518);
  iVar6 = FUN_2c48e424(param_2,_LAB_2c51151c);
  iVar7 = FUN_2c48e424(param_2,_LAB_2c511520);
  iVar8 = FUN_2c48e424(param_2,_LAB_2c511524);
  uVar2 = _LAB_2c511534;
  uVar9 = _LAB_2c511530;
  if (iVar4 != 0) {
    bVar10 = *(int *)(iVar4 + 0x14) != 0;
    uVar1 = _LAB_2c511528;
    if (!bVar10) {
      uVar1 = _LAB_2c51152c;
    }
    param_1[1] = bVar10;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,uVar9,0x4d,uVar2,_LAB_2c511538,uVar2,uVar1);
  }
  if (iVar5 == 0) {
    if ((iVar6 != 0 && iVar7 != 0) && (iVar8 != 0)) {
      param_1[1] = 1;
      uVar3 = func_0x2c518a90(*(undefined4 *)(iVar6 + 0x14));
      *param_1 = uVar3;
      FUN_2c48de10(iVar7);
      func_0x2c518928();
      FUN_2c48de10(iVar8);
      func_0x2c518928();
      FUN_2c5febe0();
      uVar9 = FUN_2c518a74(*param_1);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c511530,0x62,_LAB_2c511534,_LAB_2c511540,_LAB_2c511534,uVar9);
    }
    return;
  }
  uVar3 = func_0x2c5188d8(*(undefined4 *)(iVar5 + 0x14));
  param_1[2] = uVar3;
  uVar9 = func_0x2c5188bc();
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c511530,0x52,_LAB_2c511534,_LAB_2c51153c,_LAB_2c511534,uVar9);
}

