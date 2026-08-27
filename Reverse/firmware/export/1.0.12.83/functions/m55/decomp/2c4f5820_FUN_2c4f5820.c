/* FUN_2c4f5820 @ 0x2c4f5820 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f5820(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar1 = _LAB_2c4f585c;
  if (*_LAB_2c4f585c != '\0') {
    return;
  }
  FUN_2c4f56d8();
  iVar2 = FUN_2c4b530c(_LAB_2c4f5864,_LAB_2c4f5860);
  if (iVar2 == 0) {
    FUN_2c6444fc(5);
    if ((*_LAB_2c4f5868 != 0) && (pcVar3 = *(code **)(*_LAB_2c4f5868 + 4), pcVar3 != (code *)0x0)) {
      (*pcVar3)(0);
    }
    *pcVar1 = '\x01';
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f586c,iVar2);
}

