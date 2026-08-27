/* FUN_140d8044 @ 0x140d8044 */

bool FUN_140d8044(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_2 == param_1) {
    bVar2 = true;
  }
  else if (**(char **)(param_1 + 4) == '*') {
    bVar2 = false;
  }
  else {
    pcVar4 = *(char **)(param_2 + 4);
    cVar1 = *pcVar4;
    if (cVar1 == '*') {
      pcVar4 = pcVar4 + 1;
    }
    iVar3 = FUN_140dc518(*(char **)(param_1 + 4),pcVar4,param_3,cVar1,param_4);
    bVar2 = iVar3 == 0;
  }
  return bVar2;
}

