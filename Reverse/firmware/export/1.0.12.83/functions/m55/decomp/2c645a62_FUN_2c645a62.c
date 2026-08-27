/* FUN_2c645a62 @ 0x2c645a62 */

uint FUN_2c645a62(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_4 + 0x14);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
    FUN_2c643a9c(0,0xfffffff8);
  }
  else {
    if ((int)param_1 < 0) {
      FUN_2c643a9c(iVar2);
      return 0xfffffffc;
    }
    puVar3 = (uint *)(iVar2 + 0x28);
    do {
      ExclusiveAccess(puVar3);
      uVar4 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar4 & ~param_1;
    func_0x2c643aac(uVar4);
  }
  return uVar4;
}

