/* FUN_100d56d4 @ 0x100d56d4 */

undefined4 FUN_100d56d4(undefined4 param_1,byte param_2,byte param_3,byte param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d573c | (DAT_100d5738 - DAT_100d5734) * 0x20 & 0xff00U,DAT_100d5744,
                 DAT_100d5740);
    uVar2 = 0xffffffed;
  }
  else {
    *(byte *)(iVar1 + 0x44) =
         (param_4 & 1) << 6 | (param_3 & 1) << 5 | (param_2 & 0xf) << 1 | param_5 << 7 |
         *(byte *)(iVar1 + 0x44) & 1;
    uVar2 = 0;
  }
  return uVar2;
}

