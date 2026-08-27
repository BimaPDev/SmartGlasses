/* FUN_2c5f9dd8 @ 0x2c5f9dd8 */

undefined4
FUN_2c5f9dd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (*(ushort *)(param_1 + 0xd) < 0x13)) {
    uVar2 = 1 << (*(ushort *)(param_1 + 0xd) & 0xff) & DAT_2c5f9e10;
    if (uVar2 == 0) {
      return 0;
    }
    uVar1 = FUN_2c5f9c0c(*param_1,param_1 + 7,param_2,uVar2,param_4);
    param_1[8] = uVar1;
    return 1;
  }
  return 0;
}

