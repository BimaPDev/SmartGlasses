/* FUN_2c63c588 @ 0x2c63c588 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63c588(undefined4 param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = _LAB_2c63c5cc;
  pcVar2 = _LAB_2c63c5c8;
  if (*_LAB_2c63c5c8 == *_LAB_2c63c5cc) {
    *(undefined1 *)(param_2 + 0xe) = 0;
    return;
  }
  iVar4 = FUN_2c4969a8();
  if (iVar4 != 0) {
    FUN_2c4967a0(0);
  }
  cVar1 = *pcVar3;
  *(undefined1 *)(param_2 + 0xe) = 1;
  if (cVar1 == '\0') {
    *pcVar2 = '\0';
    *(undefined4 *)(param_2 + 4) = 199;
  }
  else {
    if (cVar1 == '\x05') {
      *(undefined4 *)(param_2 + 4) = 0xc6;
    }
    *pcVar2 = cVar1;
  }
  return;
}

