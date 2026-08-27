/* FUN_2c4b5cfc @ 0x2c4b5cfc */

void FUN_2c4b5cfc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_2c4b5d2c + param_1);
  if (-1 < cVar1) {
    *(undefined1 *)(DAT_2c4b5d30 + cVar1 + 7) = 1;
    FUN_2c4b9460(cVar1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4b5d38,DAT_2c4b5d34,0,param_1);
}

