/* FUN_2c617e20 @ 0x2c617e20 */

undefined4 * FUN_2c617e20(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  
  puVar1 = (undefined4 *)FUN_2c62c938(param_1 + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar2 = (undefined2 *)lv_mem_alloc((uint)*(ushort *)(param_1 + 0x82) << 1);
    puVar1[1] = puVar2;
    if ((*(byte *)(param_1 + 0x88) & 7) == 3) {
      uVar3 = lv_mem_alloc((uint)*(ushort *)(param_1 + 0x82) << 1);
      puVar2 = (undefined2 *)puVar1[1];
      *puVar1 = uVar3;
    }
    if (puVar2 == (undefined2 *)0x0) {
      FUN_2c62c998(param_1 + 0x24,puVar1);
      FUN_2c62bea8(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    else {
      uVar4 = 0;
      *(undefined2 *)(puVar1 + 3) = 0;
      *(byte *)((int)puVar1 + 0xe) =
           (byte)(param_3 << 4) & 0x10 | (byte)(((param_3 & 7) >> 2) << 3) |
           *(byte *)((int)puVar1 + 0xe) & 0xe2;
      if (*(short *)(param_1 + 0x82) != 0) {
        do {
          uVar4 = uVar4 + 1;
          *puVar2 = 0x7fff;
          puVar2 = puVar2 + 1;
        } while (uVar4 < *(ushort *)(param_1 + 0x82));
      }
    }
  }
  return puVar1;
}

