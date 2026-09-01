/* FUN_10126ad8 @ 0x10126ad8 */

undefined4 FUN_10126ad8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    if ((*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4 <= uVar3) {
      return 0;
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar3 * 8);
    if (((int)((uint)*(byte *)((int)puVar2 + 7) << 0x1f) < 0) && ((puVar2[1] & 0xffffff) == param_4)
       ) break;
    uVar3 = uVar3 + 1;
  }
  uVar1 = FUN_1012b1e4(*puVar2);
  return uVar1;
}

