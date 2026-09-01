/* FUN_10039a78 @ 0x10039a78 */

int FUN_10039a78(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *DAT_10039ad8;
  iVar1 = FUN_100396a4();
  if (iVar1 != 0) {
    uVar4 = (DAT_10039ae0 - DAT_10039adc) * 0x20 & 0xff00;
    FUN_100a5b78(uVar4 | 0xb90031,DAT_10039ae8,DAT_10039ae4,uVar4,param_1,iVar3,param_3);
    *(undefined1 *)(DAT_10039aec + 0x6a4) = 0;
    iVar2 = (**(code **)(DAT_10039af0 + 8))();
    if (iVar2 != 0x6e) {
      FUN_1013965a(0x6e,0);
    }
  }
  if (*DAT_10039ad8 != iVar3) {
    FUN_1013cdc0();
  }
  return iVar1;
}

