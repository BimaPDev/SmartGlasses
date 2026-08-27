/* FUN_2c48a608 @ 0x2c48a608 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48a608(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = _LAB_2c48a668;
  piVar2 = _LAB_2c48a658;
  pcVar1 = _LAB_2c48a654;
  if ((*_LAB_2c48a654 == '\0') && (*_LAB_2c48a658 == 0)) {
    if (*_LAB_2c48a668 == 0) {
      iVar4 = FUN_2c64419c(_LAB_2c48a670);
      *piVar3 = iVar4;
    }
    FUN_2c485688();
    iVar4 = FUN_2c4856c8(_LAB_2c48a66c,0);
    *piVar2 = iVar4;
    *pcVar1 = '\x01';
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x57,_LAB_2c48a664,_LAB_2c48a660,_LAB_2c48a65c);
}

