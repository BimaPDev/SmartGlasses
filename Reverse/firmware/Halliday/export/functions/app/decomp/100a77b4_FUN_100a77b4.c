/* FUN_100a77b4 @ 0x100a77b4 */

undefined4 FUN_100a77b4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    iVar1 = FUN_100a7ab8();
    uVar2 = (DAT_100a7824 - DAT_100a7828) * 0x20 & 0xff00;
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_100641b0();
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_100a0b00();
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_1012d1f4();
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      FUN_1012d1f4(param_1);
      FUN_100a5b78(uVar2 | 0xfe0031,DAT_100a7830,DAT_100a7834,param_1);
      uVar3 = 0;
    }
    else {
      FUN_100a5b78(uVar2 | 0xeb0011,DAT_100a7830,DAT_100a782c);
      uVar3 = 0xfffffffd;
    }
  }
  return uVar3;
}

