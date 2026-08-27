/* FUN_2c4dedd8 @ 0x2c4dedd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4dedd8(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0x2c4dfc18(param_1[3],param_3);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_0x2c4dfa02(*puVar1);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x100;
    iVar3 = func_0x2c4dd4b0((int)piVar2 + *(int *)(*piVar2 + -0xc),0,param_2);
    if (iVar3 == 0) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0xfb,1);
      FUN_2c4e0504(_LAB_2c4dee58,0,0,0,_LAB_2c4dee60,0xfb,_LAB_2c4dee5c,0x1300,_LAB_2c4dee54);
    }
    else {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & 0xfffffeff;
    }
  }
  return iVar3;
}

