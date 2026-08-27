/* FUN_2c5fc87c @ 0x2c5fc87c */

void FUN_2c5fc87c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10) + '\x01';
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    *(char *)(DAT_2c5fc8cc + 0x4c) = *(char *)(DAT_2c5fc8cc + 0x4c) + '\x01';
  }
  if (*DAT_2c5fc8d0 == '\0') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x5b5,DAT_2c5fc8dc,DAT_2c5fc8e0,DAT_2c5fc8d8,DAT_2c5fc8d4,param_1,
        (int)*(char *)(param_1 + 0x10),(int)*(char *)(DAT_2c5fc8cc + 0x4c));
}

