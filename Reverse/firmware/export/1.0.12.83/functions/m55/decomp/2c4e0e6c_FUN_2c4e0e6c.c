/* FUN_2c4e0e6c @ 0x2c4e0e6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e0e6c(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (((param_1[0x58] == 0) || (*(byte *)(param_1 + 0x59) == 0)) ||
     (*(byte *)((int)param_1 + 0x165) == 0)) {
    FUN_2c4de6ca((int)param_1 + *(int *)(*param_1 + -0xc),0x2189,0x2a,1);
    FUN_2c4e0504(_LAB_2c4e0ee8,0,0,0,_LAB_2c4e0ef0,0x2a,_LAB_2c4e0eec,0x1300,_LAB_2c4e0ee4);
    uVar1 = 0;
  }
  else {
    iVar3 = param_1[0x58] * (uint)*(byte *)(param_1 + 0x59) * (uint)*(byte *)((int)param_1 + 0x165);
    uVar2 = param_1[0x24];
    if ((uint)param_1[0x24] < (uint)param_1[0x4e]) {
      uVar2 = param_1[0x4e];
    }
    uVar1 = FUN_2c672ae8((int)((ulonglong)uVar2 * 1000),(int)((ulonglong)uVar2 * 1000 >> 0x20),iVar3
                         ,iVar3 >> 0x1f);
  }
  return uVar1;
}

