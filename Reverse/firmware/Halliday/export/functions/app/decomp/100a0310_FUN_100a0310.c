/* FUN_100a0310 @ 0x100a0310 */

bool FUN_100a0310(int param_1,uint param_2)

{
  bool bVar1;
  
  if (param_1 == 0) {
    FUN_100a5b78((DAT_100a0344 - DAT_100a0340) * 0x20 & 0xff00U | 0x160031,DAT_100a034c,DAT_100a0348
                );
    bVar1 = false;
  }
  else {
    bVar1 = *(byte *)(param_1 + 2) == param_2;
  }
  return bVar1;
}

