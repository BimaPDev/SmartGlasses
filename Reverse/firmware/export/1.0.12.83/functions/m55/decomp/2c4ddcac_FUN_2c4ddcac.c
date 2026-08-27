/* FUN_2c4ddcac @ 0x2c4ddcac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4ddcac(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0x2c4dfc18(param_1[3],param_3);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_0x2c4dfa28(*puVar1);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x200;
    iVar3 = func_0x2c4dd4b0((int)piVar2 + *(int *)(*piVar2 + -0xc),param_2,0);
    if (iVar3 == 0) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,0x112,1);
      FUN_2c4e0504(_LAB_2c4ddd30,0,0,0,_LAB_2c4ddd38,0x112,_LAB_2c4ddd34,0x1300,_LAB_2c4ddd2c);
    }
    else {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & 0xfffffdff;
    }
  }
  return iVar3;
}

