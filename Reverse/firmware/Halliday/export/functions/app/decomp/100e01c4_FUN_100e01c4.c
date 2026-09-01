/* FUN_100e01c4 @ 0x100e01c4 */

void FUN_100e01c4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x5d) == '\x03') {
    uVar1 = *(ushort *)(*(int *)(param_2 + 8) + 1);
    if (((ushort)*(byte *)(param_1 + 0x5c) != (ushort)((uVar1 << 8 | uVar1 >> 8) - 3)) ||
       (iVar2 = FUN_1011ea30(*(undefined4 *)(param_1 + 0x58),*(int *)(param_2 + 8) + 3), iVar2 != 0)
       ) {
      FUN_100a5b78(DAT_100e0218 | (DAT_100e0210 - DAT_100e0214) * 0x20 & 0xff00U,DAT_100e021c,
                   DAT_100e0214,param_4);
      return;
    }
  }
  return;
}

