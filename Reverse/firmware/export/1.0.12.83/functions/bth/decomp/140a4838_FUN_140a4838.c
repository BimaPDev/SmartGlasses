/* FUN_140a4838 @ 0x140a4838 */

void FUN_140a4838(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = DAT_140a489c;
  piVar2 = DAT_140a488c;
  pcVar1 = DAT_140a4888;
  if ((*DAT_140a4888 == '\0') && (*DAT_140a488c == 0)) {
    if (*DAT_140a489c == 0) {
      iVar4 = FUN_140e5138(DAT_140a48a4);
      *piVar3 = iVar4;
    }
    FUN_140b4c68();
    iVar4 = FUN_140b4ca8(DAT_140a48a0,0);
    *piVar2 = iVar4;
    *pcVar1 = '\x01';
    return;
  }
  FUN_1402a6e8(4,0x16e,DAT_140a4898,DAT_140a4894,DAT_140a4890);
  return;
}

