/* FUN_2c5e6084 @ 0x2c5e6084 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e6084(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 auStack_1c [2];
  
  auStack_1c[0] = param_1;
  iVar2 = FUN_2c66c5b6(auStack_1c,_LAB_2c5e60d8);
  iVar1 = _LAB_2c5e60e0;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar6 = 0;
    uVar4 = _LAB_2c5e60dc;
    while (iVar3 = FUN_2c66b624(iVar2,uVar4), iVar3 != 0) {
      iVar6 = iVar6 + 1;
      if (iVar6 == 0x25) {
        return 0;
      }
      uVar4 = *(undefined4 *)(iVar1 + iVar6 * 8);
    }
    pcVar5 = *(code **)(_LAB_2c5e60e0 + iVar6 * 8 + 4);
    uVar4 = 0;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(auStack_1c[0]);
    }
  }
  return uVar4;
}

