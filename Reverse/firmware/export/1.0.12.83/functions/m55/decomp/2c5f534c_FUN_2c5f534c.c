/* FUN_2c5f534c @ 0x2c5f534c */

undefined4 * FUN_2c5f534c(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)*param_2)(1,0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    FUN_2c5f6a2c(param_2,puVar1 + 0xc,0x100);
    FUN_2c5f6a2c(param_2,puVar1 + 0x11,0);
    FUN_2c5f6a2c(param_2,puVar1 + 0x15,0);
    *(undefined2 *)(param_3 + 0x36) = 1;
    uVar2 = FUN_2c5fbcb0(param_2);
    puVar1[0x19] = param_1;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    puVar1[0x10] = 0;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    puVar1[1] = uVar2;
    puVar1[2] = param_3;
    puVar1[3] = param_3;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5f53d8,0x86,DAT_2c5f53d4,DAT_2c5f53d0);
}

