/* FUN_1004d074 @ 0x1004d074 */

undefined4 FUN_1004d074(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1004d0c4;
  FUN_1011ea48(DAT_1004d0c8,0,0x100,0,param_1,iVar1,param_3);
  FUN_1013d3c0(DAT_1004d0c8,DAT_1004d0cc,0x100);
  FUN_1013d3c0(DAT_1004d0c8,*(undefined4 *)(DAT_1004d0d4 + (uint)*DAT_1004d0d0 * 4),0x100);
  if (*DAT_1004d0c4 != iVar1) {
    FUN_1013cdc0();
  }
  return DAT_1004d0c8;
}

