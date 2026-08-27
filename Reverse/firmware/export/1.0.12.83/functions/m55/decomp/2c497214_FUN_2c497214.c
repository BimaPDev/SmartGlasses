/* FUN_2c497214 @ 0x2c497214 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c497214(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = _LAB_2c497278;
  piVar2 = _LAB_2c497268;
  pcVar1 = _LAB_2c497264;
  if ((*_LAB_2c497264 == '\0') && (*_LAB_2c497268 == 0)) {
    if (*_LAB_2c497278 == 0) {
      iVar4 = FUN_2c64419c(_LAB_2c497280);
      *piVar3 = iVar4;
    }
    FUN_2c485688();
    iVar4 = FUN_2c4856c8(_LAB_2c49727c,0);
    *piVar2 = iVar4;
    *pcVar1 = '\x01';
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x122,_LAB_2c497274,_LAB_2c497270,_LAB_2c49726c);
}

