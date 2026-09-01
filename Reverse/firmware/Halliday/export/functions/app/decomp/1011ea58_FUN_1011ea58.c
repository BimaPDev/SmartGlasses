/* FUN_1011ea58 @ 0x1011ea58 */

int FUN_1011ea58(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 <= param_1[2]) {
    uVar1 = param_1[5] + uVar1;
  }
  return (uVar1 - 1) - (uint)param_1[2];
}

