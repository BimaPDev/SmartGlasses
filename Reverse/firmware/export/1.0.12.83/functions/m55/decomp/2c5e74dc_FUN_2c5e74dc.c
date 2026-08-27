/* FUN_2c5e74dc @ 0x2c5e74dc */

char * FUN_2c5e74dc(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(DAT_2c5e7528 + 0x20);
  if (cVar1 != '\0') {
    if (cVar1 == '\x06') {
      uVar3 = FUN_2c5e44c0();
    }
    else {
      uVar3 = 0;
    }
    uVar2 = FUN_2c5e7270(cVar1,uVar3);
    *(undefined4 *)(param_1 + 4) = uVar2;
    *param_1 = cVar1;
    param_1[1] = (char)uVar3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5e7534,0x2d6,DAT_2c5e7530,DAT_2c5e752c);
}

