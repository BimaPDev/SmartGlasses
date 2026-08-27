/* FUN_2c526cfc @ 0x2c526cfc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c526cfc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = _LAB_2c526d30;
  uVar1 = _LAB_2c526d2c;
  *_LAB_2c526d30 = (char)param_1;
  *(short *)(puVar2 + 2) = (short)param_2;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c526d38,0x22,_LAB_2c526d34,uVar1,param_1,param_2);
}

