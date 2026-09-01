/* FUN_100fafdc @ 0x100fafdc */

int FUN_100fafdc(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x20);
  if (pcVar2 < *(char **)(param_1 + 0x24)) {
    *(char **)(param_1 + 0x20) = pcVar2 + 1;
    iVar1 = (int)*pcVar2;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

