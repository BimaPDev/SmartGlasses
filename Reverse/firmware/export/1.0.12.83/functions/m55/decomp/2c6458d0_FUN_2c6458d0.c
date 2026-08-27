/* FUN_2c6458d0 @ 0x2c6458d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c6458d0(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  
  iVar4 = _LAB_2c645950;
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    func_0x2c643a98();
    return 0;
  }
  uVar6 = 1;
  bVar5 = param_2 < 2;
  *param_1 = *(int *)(_LAB_2c645950 + 0x14);
  iVar3 = *(int *)(iVar4 + 0x24);
  while( true ) {
    bVar5 = !bVar5;
    param_1 = param_1 + 1;
    if ((iVar3 == 0) || (bVar1 = !bVar5, bVar5 = false, bVar1)) break;
    uVar6 = uVar6 + 1;
    *param_1 = iVar3;
    iVar3 = *(int *)(iVar3 + 8);
    bVar5 = param_2 <= uVar6;
  }
  iVar3 = *(int *)(iVar4 + 0x2c);
  while ((iVar3 != 0 && (bVar1 = bVar5 != false, bVar5 = false, bVar1))) {
    uVar6 = uVar6 + 1;
    *param_1 = iVar3;
    iVar3 = *(int *)(iVar3 + 0x10);
    param_1 = param_1 + 1;
    bVar5 = uVar6 < param_2;
  }
  iVar4 = *(int *)(iVar4 + 0x30);
  if ((iVar4 != 0) && (piVar2 = param_1, bVar5 != false)) {
    do {
      param_1 = piVar2 + 1;
      *piVar2 = iVar4;
      uVar6 = uVar6 + 1;
      iVar4 = *(int *)(iVar4 + 0x10);
      if (iVar4 == 0) break;
      piVar2 = param_1;
    } while (uVar6 < param_2);
  }
  func_0x2c643a98(param_1 + -uVar6,param_2,uVar6,bVar5,param_4);
  return uVar6;
}

