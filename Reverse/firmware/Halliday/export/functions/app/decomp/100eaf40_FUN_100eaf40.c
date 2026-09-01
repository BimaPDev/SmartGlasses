/* FUN_100eaf40 @ 0x100eaf40 */

void FUN_100eaf40(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *DAT_100eafb0;
  if (((uVar2 != 0) && (uVar2 <= param_1)) && (param_1 < *DAT_100eafb8 * *DAT_100eafb4 + uVar2)) {
    uVar2 = (param_1 - uVar2) / *DAT_100eafb4;
    if (-1 < (int)uVar2) {
      uVar1 = 1 << (uVar2 & 0xff);
      uVar3 = *DAT_100eafbc;
      if ((uVar1 & uVar3) == 0) {
        FUN_100a5b78((DAT_100eafc4 - DAT_100eafc0) * 0x20 & 0xff00U | 0xf00033,DAT_100eafcc,
                     DAT_100eafc8,uVar2,param_1,uVar3);
      }
      else {
        *DAT_100eafbc = uVar3 & ~uVar1;
      }
    }
    return;
  }
  FUN_100ed77c(2,param_1);
  return;
}

