/* FUN_100da180 @ 0x100da180 */

undefined4 FUN_100da180(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_1013211e(DAT_100da1ac);
  uVar2 = DAT_100da1b8;
  uVar1 = DAT_100da1b4;
  *DAT_100da1b0 = param_1;
  FUN_101164a0(uVar2,uVar1,0);
  FUN_101164a0(DAT_100da1c0,DAT_100da1bc,0);
  FUN_100e7898(param_1);
  return 0;
}

