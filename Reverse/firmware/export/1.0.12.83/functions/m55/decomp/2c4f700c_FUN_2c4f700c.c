/* FUN_2c4f700c @ 0x2c4f700c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f700c(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = _LAB_2c4f7070;
  piVar2 = _LAB_2c4f7060;
  pcVar1 = _LAB_2c4f705c;
  if ((*_LAB_2c4f705c == '\0') && (*_LAB_2c4f7060 == 0)) {
    if (*_LAB_2c4f7070 == 0) {
      iVar4 = FUN_2c64419c(_LAB_2c4f7078);
      *piVar3 = iVar4;
    }
    FUN_2c485688();
    iVar4 = FUN_2c4856c8(_LAB_2c4f7074,0);
    *piVar2 = iVar4;
    *pcVar1 = '\x01';
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x16e,_LAB_2c4f706c,_LAB_2c4f7068,_LAB_2c4f7064);
}

