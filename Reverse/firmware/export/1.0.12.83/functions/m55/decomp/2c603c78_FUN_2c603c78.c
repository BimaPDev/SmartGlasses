/* FUN_2c603c78 @ 0x2c603c78 */

undefined4 FUN_2c603c78(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(ushort *)(param_1 + 0x22) & 0x1f8) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      if (((*(byte *)((int)puVar1 + 7) & 1) != 0) && ((puVar1[1] & 0xffffff) == param_4)) {
        uVar2 = FUN_2c62b108(*puVar1);
        return uVar2;
      }
      puVar1 = puVar1 + 2;
    } while (uVar3 != (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3);
  }
  return 0;
}

