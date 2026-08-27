/* FUN_14046d84 @ 0x14046d84 */

undefined4 FUN_14046d84(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_14046dd8;
  FUN_1402a6e8(4,0x31,DAT_14046de0,DAT_14046ddc,DAT_14046dd4,DAT_14046dd8);
  uVar2 = FUN_14049358();
  if ((uVar2 & 0xfb) != 1) {
    FUN_1402a6e8(4,0x3a,DAT_14046de0,DAT_14046ddc,DAT_14046de4,uVar1,uVar2);
    return 0xffffffff;
  }
  FUN_14048cd8(8);
  return 0;
}

