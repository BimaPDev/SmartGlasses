/* FUN_1013caa0 @ 0x1013caa0 */

uint FUN_1013caa0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffff7;
  if ((int)(uVar1 << 0x1c) < 0) {
    FUN_1013cdcc(param_1 + 0x10);
  }
  return (uVar1 & 0xf) >> 3;
}

