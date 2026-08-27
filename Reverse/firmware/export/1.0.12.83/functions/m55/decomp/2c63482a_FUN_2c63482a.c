/* FUN_2c63482a @ 0x2c63482a */

void FUN_2c63482a(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_2 + 0x24) = param_4;
  uVar1 = lv_mem_alloc();
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  uVar1 = lv_mem_alloc((uint)*(ushort *)(param_2 + 0x26) << 1);
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  **(undefined2 **)(param_2 + 0x30) = 0x82;
  **(undefined2 **)(param_2 + 0x2c) = 0x82;
  puVar2 = (undefined4 *)
           FUN_2c62bebc(*(undefined4 *)(param_2 + 0x28),
                        (uint)*(ushort *)(param_2 + 0x24) * (uint)*(ushort *)(param_2 + 0x26) * 4);
  *(undefined4 **)(param_2 + 0x28) = puVar2;
  *puVar2 = 0;
  return;
}

