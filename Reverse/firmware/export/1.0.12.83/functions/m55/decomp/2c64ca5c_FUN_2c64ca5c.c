/* FUN_2c64ca5c @ 0x2c64ca5c */

void FUN_2c64ca5c(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    iVar1 = FUN_2c669578(param_1);
    if (iVar1 != 0) {
      return;
    }
    pcVar2 = (code *)FUN_2c664fe4();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c668474();
}

