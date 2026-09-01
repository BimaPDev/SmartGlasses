/* FUN_100874f8 @ 0x100874f8 */

void FUN_100874f8(int param_1)

{
  undefined4 *puVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 5) << 0x1e) < 0) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    puVar1 = DAT_10087530;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xf0;
    *puVar1 = 0;
  }
  return;
}

