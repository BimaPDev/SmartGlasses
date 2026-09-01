/* FUN_100a1ba4 @ 0x100a1ba4 */

uint FUN_100a1ba4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined2 uStack_18;
  undefined2 uStack_16;
  uint uStack_14;
  undefined4 uStack_10;
  
  iVar1 = *DAT_100a1bf8;
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < *DAT_100a1bfc; iVar2 = iVar2 + 1) {
      if (*(byte *)(iVar1 + iVar2 * 3) == param_1) {
        uVar3 = (uint)*(byte *)(iVar1 + iVar2 * 3 + 1);
        if (uVar3 == 0) {
          return param_1;
        }
        uStack_10 = param_4;
        FUN_100a5b78((DAT_100a1c04 - DAT_100a1c00) * 0x20 & 0xff00U | 0x7f0031,DAT_100a1c0c,
                     DAT_100a1c08,uVar3);
        uStack_1c = 0;
        uStack_1a = 9;
        uStack_19 = 5;
        uStack_10 = 0;
        uStack_18 = 0;
        uStack_16 = 0;
        uStack_14 = uVar3;
        uVar3 = FUN_1009ece8(DAT_100e7d68,&uStack_1c);
        return (uVar3 ^ 1) & 0xff;
      }
    }
  }
  return param_1;
}

