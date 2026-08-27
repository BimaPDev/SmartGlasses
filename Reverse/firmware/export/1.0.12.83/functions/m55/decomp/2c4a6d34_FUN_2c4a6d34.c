/* FUN_2c4a6d34 @ 0x2c4a6d34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a6d34(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar2 = (undefined1 *)(param_1 + 8);
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 2;
    puVar2[9] = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined1 *)(param_1 + 0xe));
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x53c,_LAB_2c4a6d8c,_LAB_2c4a6d88,_LAB_2c4a6d84,_LAB_2c4a6d80,0x53c);
}

