/* FUN_2c48950c @ 0x2c48950c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48950c(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = _LAB_2c489574;
  piVar2 = _LAB_2c489564;
  pcVar1 = _LAB_2c489560;
  if (*_LAB_2c489560 == '\0') {
    if (*_LAB_2c489564 == 0) {
      func_0x2c4c0ea8(_LAB_2c489578);
      if (*piVar3 == 0) {
        iVar4 = FUN_2c64419c(_LAB_2c489580);
        *piVar3 = iVar4;
      }
      FUN_2c485688();
      iVar4 = FUN_2c4856c8(_LAB_2c48957c,0);
      *piVar2 = iVar4;
      *pcVar1 = '\x01';
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x83,_LAB_2c489570,_LAB_2c48956c,_LAB_2c489568);
}

