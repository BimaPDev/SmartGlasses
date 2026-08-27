/* FUN_2c1391f8 @ 0x2c1391f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1391f8(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = _DAT_2c13925c;
  piVar2 = _DAT_2c13924c;
  pcVar1 = _DAT_2c139248;
  if ((*_DAT_2c139248 == '\0') && (*_DAT_2c13924c == 0)) {
    if (*_DAT_2c13925c == 0) {
      iVar4 = func_0x2c13f39c(_DAT_2c139264);
      *piVar3 = iVar4;
    }
    func_0x2c13e12c();
    iVar4 = func_0x2c13e16c(_DAT_2c139260,0);
    *piVar2 = iVar4;
    *pcVar1 = '\x01';
    return;
  }
  FUN_2c135988(4,0x122,_DAT_2c139258,_DAT_2c139254,_DAT_2c139250);
  return;
}

