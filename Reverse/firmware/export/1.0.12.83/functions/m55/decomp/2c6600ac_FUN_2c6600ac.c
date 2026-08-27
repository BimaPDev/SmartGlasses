/* FUN_2c6600ac @ 0x2c6600ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6600ac(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_2c64cf04(_LAB_2c6600f0);
  iVar3 = *(int *)(*param_1 + 0xc);
  if (*(int *)(iVar3 + iVar1 * 4) == 0) {
    uVar2 = FUN_2c64ca5c(0x70);
    func_0x2c65f600(uVar2,0);
    func_0x2c65ff64(uVar2,param_1);
    FUN_2c64d090(*param_1,uVar2,iVar1);
  }
  return *(undefined4 *)(iVar3 + iVar1 * 4);
}

