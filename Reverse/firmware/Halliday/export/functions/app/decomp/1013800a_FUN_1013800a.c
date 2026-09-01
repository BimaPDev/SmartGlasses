/* FUN_1013800a @ 0x1013800a */

undefined4 FUN_1013800a(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_100e0e08();
  if (iVar1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    puVar3 = (undefined4 *)(iVar1 + 8);
    do {
      puVar4 = puVar3 + 1;
      *param_2 = *puVar3;
      param_2 = param_2 + 1;
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(iVar1 + 0x18));
    uVar2 = 0;
  }
  return uVar2;
}

