/* FUN_1011d578 @ 0x1011d578 */

bool FUN_1011d578(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_1011ea48(param_1,0,0x10);
    thunk_FUN_1011ea48(param_1 + 0x30,0,0x10);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x10000;
  }
  return param_1 != 0;
}

