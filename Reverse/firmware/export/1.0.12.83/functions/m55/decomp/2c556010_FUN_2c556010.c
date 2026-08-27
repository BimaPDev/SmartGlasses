/* FUN_2c556010 @ 0x2c556010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c556010(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_2c48e738();
  FUN_2c48e5b4(uVar1,_LAB_2c556068,*(undefined4 *)(param_1 + 4));
  FUN_2c48e4c8(uVar1,_LAB_2c55606c,*(undefined1 *)(param_1 + 0x1c));
  FUN_2c48e4c8(uVar1,_LAB_2c556070,*(undefined1 *)(param_1 + 0x1d));
  FUN_2c48e4c8(uVar1,_LAB_2c556074,*(undefined1 *)(param_1 + 0x1e));
  uVar2 = FUN_2c555524(param_1 + 0x20);
  FUN_2c48e474(uVar1,_LAB_2c556078,uVar2);
  uVar2 = FUN_2c555ee8(param_1 + 0x5c);
  FUN_2c48e474(uVar1,_LAB_2c55607c,uVar2);
  return uVar1;
}

