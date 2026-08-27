/* FUN_2c62e764 @ 0x2c62e764 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62e764(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_2c62c928(_LAB_2c62e7a4,0x44,param_3,param_4,param_4);
  uVar4 = FUN_2c62bdd8(_LAB_2c62e7a8,0x10,0);
  puVar3 = _LAB_2c62e7b0;
  puVar2 = _LAB_2c62e7ac;
  uVar1 = _LAB_2c62e7a4;
  *_LAB_2c62e7ac = uVar4;
  *puVar3 = 1;
  iVar5 = FUN_2c62ca10(uVar1);
  if (iVar5 != 0) {
    FUN_2c62be4c(*puVar2);
    *puVar3 = 0;
    return;
  }
  FUN_2c62be40(*puVar2);
  *puVar3 = 0;
  return;
}

