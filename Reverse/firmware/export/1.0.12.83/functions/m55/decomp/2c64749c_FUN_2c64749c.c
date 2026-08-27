/* FUN_2c64749c @ 0x2c64749c */

undefined4 FUN_2c64749c(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
  if (((param_1 != 0) && (*(uint *)(param_1 + 0xc) <= param_2)) &&
     (param_2 < *(uint *)(param_1 + 0x10))) {
    puVar2 = (uint *)(param_1 + 0x14);
    do {
      do {
        *param_2 = *puVar2;
        DataMemoryBarrier(0x1f);
        ExclusiveAccess(puVar2);
      } while (*param_2 != *puVar2);
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = (uint)param_2;
    piVar3 = (int *)(param_1 + 4);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + -1;
    FUN_2c6439e8(param_1,param_2,0,piVar3,param_4);
    return 0;
  }
  FUN_2c6439e8(param_1,param_2,0xfffffffc,param_1,param_4);
  return 0xfffffffc;
}

