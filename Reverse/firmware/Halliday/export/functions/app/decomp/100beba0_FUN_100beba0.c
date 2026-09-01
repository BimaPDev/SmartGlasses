/* FUN_100beba0 @ 0x100beba0 */

undefined4 FUN_100beba0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)((int)DAT_100bebf0 + 0xe);
  if (*DAT_100bebf0 == 0) {
    uVar2 = 0xfffffffb;
  }
  else if (param_1 < 3) {
    iVar3 = (uint)bVar1 * 3 + param_1;
    FUN_1013241c(*DAT_100bebf0,DAT_100bebf4 + iVar3 * 8,param_3,iVar3,param_1,param_2);
    FUN_100a5b78(DAT_100bec00 | (DAT_100bebf8 - DAT_100bebfc) * 0x20 & 0xff00U,DAT_100bec08,
                 DAT_100bec04,(uint)bVar1,param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}

