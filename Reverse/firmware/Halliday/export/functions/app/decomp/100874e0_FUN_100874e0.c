/* FUN_100874e0 @ 0x100874e0 */

uint FUN_100874e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  bVar1 = *(byte *)(param_1 + 1);
  puVar2 = (undefined4 *)((uint)bVar1 << 0x1e);
  puVar3 = puVar2;
  if ((int)puVar2 < 0) {
    param_3 = 0;
    puVar3 = DAT_100874f4;
  }
  if ((int)puVar2 < 0) {
    *puVar3 = param_3;
  }
  return (bVar1 & 3) >> 1;
}

