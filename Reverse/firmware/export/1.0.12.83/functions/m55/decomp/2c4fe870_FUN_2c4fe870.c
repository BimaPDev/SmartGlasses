/* FUN_2c4fe870 @ 0x2c4fe870 */

undefined4 * FUN_2c4fe870(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)lv_mem_alloc(0x24);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c4fe924,0x440,DAT_2c4fe928,DAT_2c4fe920,DAT_2c4fe91c);
  }
  puVar1[4] = param_2;
  puVar1[5] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf0;
  if (*(int *)(param_1 + 0x44) != 0) {
    *(ushort *)(puVar1 + 6) =
         *(ushort *)(puVar1 + 6) & 0xf |
         (ushort)((((int)((uint)*(ushort *)(*(int *)(param_1 + 0x44) + 0x18) << 0x10) >> 0x14) + 1U
                  & 0xfff) << 4);
    if ((*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x40)) &&
       (*(char *)(param_1 + 0x115) != '\0')) {
      iVar2 = 0;
      puVar1[7] = 0;
    }
    else {
      iVar2 = (int)*(short *)(param_1 + 0x112) + *(int *)(*(int *)(param_1 + 0x44) + 0x20);
      puVar1[7] = iVar2;
    }
    puVar1[8] = iVar2;
    *(undefined4 **)(*(int *)(param_1 + 0x44) + 4) = puVar1;
    *puVar1 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 **)(param_1 + 0x44) = puVar1;
    puVar1[1] = 0;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 1;
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c4fe924,0x447,DAT_2c4fe928,DAT_2c4fe920,DAT_2c4fe92c);
}

