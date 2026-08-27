/* FUN_2c46cabc @ 0x2c46cabc */

void FUN_2c46cabc(char *param_1,int param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar2 = FUN_2c66c4ec(param_2);
  for (uVar6 = 0; uVar6 < uVar2; uVar6 = uVar6 + 1) {
    if (*(char *)(param_2 + uVar6) == param_3) {
      *(undefined1 *)(param_2 + uVar6) = param_4;
      uVar2 = FUN_2c66c4ec(param_2);
    }
  }
  iVar4 = uVar2 + 1;
  pcVar3 = (char *)(param_2 + -1);
  do {
    pcVar5 = param_1;
    if (iVar4 == 0) break;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
    iVar4 = iVar4 + -1;
    pcVar5 = param_1 + 1;
    *param_1 = cVar1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  pcVar3 = pcVar5 + iVar4;
  for (; pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
    *pcVar5 = '\0';
  }
  return;
}

