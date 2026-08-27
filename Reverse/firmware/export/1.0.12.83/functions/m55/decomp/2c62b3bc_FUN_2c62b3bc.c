/* FUN_2c62b3bc @ 0x2c62b3bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c62b3bc(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = _LAB_2c62b3f8;
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      if (*(char *)(param_1 + iVar3) == '\0') {
        return iVar3;
      }
      uVar2 = (*(code *)*puVar1)(param_1 + iVar3);
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      iVar3 = iVar3 + (uVar2 & 0xff);
    } while (param_2 != iVar4);
  }
  return iVar3;
}

