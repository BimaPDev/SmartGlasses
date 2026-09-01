/* FUN_100e4c18 @ 0x100e4c18 */

int FUN_100e4c18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_100a5b78((DAT_100e4c80 - DAT_100e4c84) * 0x20 & 0xff00U | 0x2c0011,DAT_100e4c88,0xffffffea,
                 DAT_100e4c84,param_4);
    iVar3 = 0;
  }
  else {
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      if ((*DAT_100e4c78 & 0x7f) >> 4 <= (uVar2 & 0xff)) {
        return 0;
      }
      uVar1 = uVar2 + 1;
    } while (*(int *)(uVar2 * 0xb8 + 0xb8 + DAT_100e4c7c) != 0);
    iVar3 = uVar2 * 0xb8 + DAT_100e4c8c;
    FUN_1011ea48(iVar3,0,0xb8);
  }
  return iVar3;
}

