/* FUN_2c5b93ac @ 0x2c5b93ac */

void FUN_2c5b93ac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_2c48e3f0();
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      FUN_2c48e408(param_1,iVar4);
      iVar4 = iVar4 + 1;
      iVar2 = FUN_2c5b8bfc();
      if (iVar2 != 0) {
        uVar3 = func_0x2c5bd4d0();
        func_0x2c5bd350(uVar3,iVar2);
      }
    } while (iVar1 != iVar4);
  }
  return;
}

