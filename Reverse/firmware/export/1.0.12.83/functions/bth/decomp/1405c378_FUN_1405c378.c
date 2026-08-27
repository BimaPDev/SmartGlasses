/* FUN_1405c378 @ 0x1405c378 */

void FUN_1405c378(int param_1,ushort param_2,ushort param_3,int param_4)

{
  ushort uVar1;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x3a) & 0xffeb | (param_3 & 1) << 2;
  if (param_4 != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_3 & 0xfe) == 4) {
    *(ushort *)(param_1 + 0x3a) = uVar1 & 0xfffc | 2;
    return;
  }
  if ((param_3 & 0xfe) == 0xc) {
    param_2 = 3;
  }
  else if (((uVar1 & 4) != 0) || (param_4 != 0)) {
    *(ushort *)(param_1 + 0x3a) = uVar1 & 0xfffc | 1;
    return;
  }
  *(ushort *)(param_1 + 0x3a) = param_2 | uVar1 & 0xfffc;
  return;
}

