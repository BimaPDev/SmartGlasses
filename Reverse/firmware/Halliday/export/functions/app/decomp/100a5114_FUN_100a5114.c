/* FUN_100a5114 @ 0x100a5114 */

uint FUN_100a5114(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  
  uVar2 = 0;
  local_c = 0;
  iVar1 = FUN_10055524(&local_c);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100a515c | (DAT_100a5158 - DAT_100a5154) * 0x20 & 0xff00U,DAT_100a5164,
                 DAT_100a5160,(local_c & 0xf) >> 3,param_1);
    uVar2 = (local_c & 0xf) >> 3;
  }
  return uVar2;
}

