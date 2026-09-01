/* FUN_1011ec66 @ 0x1011ec66 */

undefined4 FUN_1011ec66(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xe);
  if (uVar1 != 0) {
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(uVar1 + 0x2ff18002);
    *(short *)(uVar1 + 0x2ff18002) = (short)param_1 + -0x8000;
  }
  return 0;
}

