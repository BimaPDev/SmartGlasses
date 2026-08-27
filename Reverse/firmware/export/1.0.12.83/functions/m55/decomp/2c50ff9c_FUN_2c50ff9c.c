/* FUN_2c50ff9c @ 0x2c50ff9c */

undefined4 FUN_2c50ff9c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(byte *)(param_1 + 0x90) == 0) {
    puVar2 = (undefined4 *)lv_mem_alloc(0x198);
    *param_2 = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + (*(byte *)(param_1 + 0x90) - 1) * 4);
    *param_2 = iVar1;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c510038,0x4c6,DAT_2c510034,DAT_2c510030,DAT_2c51002c);
    }
    iVar1 = *(byte *)(param_1 + 0x90) - 1;
    *(undefined4 *)(param_1 + iVar1 * 4) = 0;
    *(char *)(param_1 + 0x90) = (char)iVar1;
    puVar2 = (undefined4 *)*param_2;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_2c62c3b0(puVar2 + 2,0x100);
  FUN_2c62c3b0(puVar2 + 0x42,0x82);
  *(undefined2 *)((int)puVar2 + 0x18a) = 0;
  *(undefined1 *)(puVar2 + 99) = 0;
  FUN_2c62a624((int)puVar2 + 0x18e,0,0,0,0);
  return 1;
}

