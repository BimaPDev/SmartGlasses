/* FUN_2c49ec4c @ 0x2c49ec4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49ec4c(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_2c674268(param_1 + 0x1c,0,0x20);
  puVar2 = (undefined1 *)(param_1 + 8);
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 2;
    puVar2[0xb] = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined1 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x478,uRam2c49ec94,uRam2c49ec90,_FUN_2c49ec8c);
}

