/* FUN_2c4e752c @ 0x2c4e752c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e752c(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *param_2;
  uVar1 = FUN_2c66c4ec(uVar4);
  puVar2 = (undefined4 *)FUN_2c4eab7c();
  iVar3 = (*(code *)*puVar2)(uVar4,uVar1);
  uVar4 = _LAB_2c4e7554;
  if (iVar3 == 0) {
    uVar4 = _LAB_2c4e7558;
  }
  return uVar4;
}

