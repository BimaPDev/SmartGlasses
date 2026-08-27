/* FUN_2c4ec4ba @ 0x2c4ec4ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_2c4ec4ba(void)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *in_r3;
  byte *pbVar5;
  
  cVar1 = *in_r3;
  func_0x2c4ec3ec();
  if (*_LAB_2c4ec510 == cVar1) {
    if (_LAB_2c4ec510[8] != '\0') {
      pbVar2 = _LAB_2c4ec514 + (byte)(_LAB_2c4ec510[8] - 1) + 1;
      iVar3 = *(int *)(_LAB_2c4ec510 + 4);
      pbVar5 = _LAB_2c4ec514;
      do {
        pbVar4 = pbVar5;
        if (cVar1 != '\x03') {
          pbVar4 = (byte *)0x0;
        }
        pbVar5 = pbVar5 + 1;
        *(byte **)(iVar3 + 0x14) = pbVar4;
        if (5 < *pbVar4) {
          *pbVar4 = 0;
        }
        iVar3 = iVar3 + 0x24;
      } while (pbVar5 != pbVar2);
    }
    return _LAB_2c4ec510;
  }
  return (char *)0x0;
}

