/* FUN_2c651840 @ 0x2c651840 */

int * FUN_2c651840(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_2 + -0xc);
  if (iVar4 != 0) {
    iVar2 = *param_1;
    puVar1 = (uint *)(iVar2 + -8);
    uVar3 = *(int *)(iVar2 + -0xc) + iVar4;
    if ((*puVar1 < uVar3) || (iVar2 = *(int *)(iVar2 + -4), 0 < iVar2)) {
      FUN_2c651802(param_1,uVar3,*puVar1,iVar2,param_4);
    }
    FUN_2c6513e8(*param_1 + *(int *)(*param_1 + -0xc) * 4,*param_2,iVar4);
    FUN_2c6514b0(*param_1 + -0xc,uVar3);
  }
  return param_1;
}

