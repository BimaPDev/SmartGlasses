/* FUN_2c642c66 @ 0x2c642c66 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c642c66(undefined1 param_1,undefined1 *param_2,undefined2 param_3,undefined2 *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined1 *)(param_4 + 1) = param_1;
  piVar1 = _LAB_2c642ce4;
  uVar3 = _LAB_2c642ce0;
  *param_4 = param_3;
  *param_2 = 3;
  FUN_2c48a0c0(uVar3);
  FUN_2c48a2d0(_LAB_2c642ce8);
  if (*piVar1 == 0) {
    iVar4 = FUN_2c64419c(_LAB_2c642cf8);
    *piVar1 = iVar4;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c642d04,0x9d,_LAB_2c642d00,_LAB_2c642cfc);
    }
  }
  uVar3 = FUN_2c62bdd8(_LAB_2c642cec,5000,0);
  *_LAB_2c642cf0 = uVar3;
  FUN_2c62be70(uVar3,0xffffffff);
  iVar4 = FUN_2c478b68();
  bVar2 = false;
  if (iVar4 != 0) {
    iVar4 = (**(code **)(iVar4 + 8))();
    bVar2 = iVar4 == 1;
  }
  *(bool *)_LAB_2c642cf4 = bVar2;
  return;
}

