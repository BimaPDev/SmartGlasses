/* FUN_2c1407a0 @ 0x2c1407a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c1407a0(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = *(int *)(_DAT_2c1407f0 + 0x14);
  if (iVar3 == 0) {
    FUN_2c13ee38(0,0xfffffff8);
    uVar2 = 0xffffffff;
  }
  else {
    if ((int)param_1 < 0) {
      FUN_2c13ee38(iVar3,0xfffffffc);
      return 0xfffffffc;
    }
    puVar4 = (uint *)(iVar3 + 0x28);
    do {
      ExclusiveAccess(puVar4);
      uVar2 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar2 & ~param_1;
    func_0x2c13ee48(uVar2);
  }
  return uVar2;
}

