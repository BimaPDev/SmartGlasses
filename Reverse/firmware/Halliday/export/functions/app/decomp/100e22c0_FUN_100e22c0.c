/* FUN_100e22c0 @ 0x100e22c0 */

uint FUN_100e22c0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_2 + 0xc);
  if (*(short *)((int)param_1 + 0x46) == 0x19) {
    uVar1 = 0x37f;
  }
  else {
    uVar1 = (uint)*(ushort *)((int)param_1 + 0x56);
  }
  if (uVar1 < uVar2) {
    FUN_100a5b78(DAT_100e2310 | (DAT_100e230c - DAT_100e2308) * 0x20 & 0xff00U,DAT_100e2314,uVar2);
    uVar2 = 0xffffff86;
  }
  else {
    FUN_10138146(*param_1,*(undefined2 *)(param_1 + 0x15),param_2,uVar1,param_4);
  }
  return uVar2;
}

