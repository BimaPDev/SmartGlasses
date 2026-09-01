/* FUN_1011adac @ 0x1011adac */

undefined4 * FUN_1011adac(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_2c [5];
  
  puVar5 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = local_2c;
    puVar5 = param_1 + 4;
    do {
      uVar1 = *param_1;
      uVar4 = param_1[1];
      param_1 = param_1 + 2;
      *puVar2 = uVar1;
      puVar2[1] = uVar4;
      puVar2 = puVar2 + 2;
    } while (param_1 != puVar5);
    puVar5 = local_2c;
    *puVar2 = *param_1;
  }
  iVar6 = 0;
  do {
    puVar2 = (undefined4 *)FUN_1005955c(puVar5,iVar6,param_3);
    iVar6 = iVar6 + 1;
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar3 = FUN_1011ea18(param_2,*puVar2);
  } while (iVar3 != 0);
  return puVar2;
}

