/* FUN_2c488700 @ 0x2c488700 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c488700(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = _LAB_2c488760;
  piVar2 = _LAB_2c488750;
  pcVar1 = _LAB_2c48874c;
  if ((*_LAB_2c48874c == '\0') && (*_LAB_2c488750 == 0)) {
    if (*_LAB_2c488760 == 0) {
      iVar4 = FUN_2c64419c(_LAB_2c488768);
      *piVar3 = iVar4;
    }
    FUN_2c485688();
    iVar4 = FUN_2c4856c8(_LAB_2c488764,0);
    *piVar2 = iVar4;
    *pcVar1 = '\x01';
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xce,_LAB_2c48875c,_LAB_2c488758,_LAB_2c488754);
}

