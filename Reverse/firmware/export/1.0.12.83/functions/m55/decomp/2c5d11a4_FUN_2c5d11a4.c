/* FUN_2c5d11a4 @ 0x2c5d11a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d11a4(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_2c5d1168(param_1,*(int *)(param_1 + 0x2c) + -1);
  bVar2 = FUN_2c5d1168(param_1,*(int *)(param_1 + 0x2c) + 1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5d1254,0x319,_LAB_2c5d1258,_LAB_2c5d1250,*(undefined4 *)(param_1 + 0x2c),
               bVar1 ^ 1,bVar2 ^ 1);
}

