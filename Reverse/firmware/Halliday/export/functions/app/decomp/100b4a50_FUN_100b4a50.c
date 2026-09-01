/* FUN_100b4a50 @ 0x100b4a50 */

undefined4 FUN_100b4a50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_3;
  iVar1 = FUN_100a07a0(*(undefined4 *)(param_1 + 0x24));
  if (iVar1 < 0) {
    FUN_100a5b78(DAT_100b4a90 | (DAT_100b4a8c - DAT_100b4a88) * 0x20 & 0xff00U,DAT_100b4a98,
                 DAT_100b4a94,param_3,iVar1,param_2,uVar2);
    uVar2 = 0xfffffffb;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

