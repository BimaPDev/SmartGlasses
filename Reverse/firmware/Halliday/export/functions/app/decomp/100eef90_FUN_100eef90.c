/* FUN_100eef90 @ 0x100eef90 */

undefined4 FUN_100eef90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  
  uVar1 = (undefined1)param_1;
  if ((int)((uint)*(byte *)(DAT_100eefcc + 2) << 0x1f) < 0) {
    uVar1 = FUN_100eec68();
    param_2 = extraout_r1;
  }
  else if ((param_1 < 0) || ((int)(uint)*(byte *)(*DAT_100eefcc + 2) <= param_1)) {
    return 0xffffffea;
  }
  uVar2 = FUN_100eef38(uVar1,param_2,0,param_3);
  return uVar2;
}

