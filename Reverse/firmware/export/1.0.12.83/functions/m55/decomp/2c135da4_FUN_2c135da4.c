/* FUN_2c135da4 @ 0x2c135da4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c135da4(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = _DAT_2c135e00;
  if (*_DAT_2c135e00 != '\0') {
    FUN_2c1351d0(_DAT_2c135e04,1,*_DAT_2c135e00,param_1);
  }
  uVar2 = FUN_2c135620(_DAT_2c135e0c,100,_DAT_2c135e08,param_1,param_2);
  if (*pcVar1 != '\0') {
    FUN_2c1351d0(_DAT_2c135e0c,uVar2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

