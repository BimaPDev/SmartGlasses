/* FUN_2c66fd14 @ 0x2c66fd14 */

int FUN_2c66fd14(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int local_24;
  undefined4 *puStack_20;
  
  uVar6 = param_1;
  local_24 = param_2;
  puStack_20 = param_3;
  iVar2 = FUN_2c669488();
  if ((iVar2 == 1) && (param_2 - 1U < 0xff)) {
    local_24 = CONCAT31(local_24._1_3_,(char)param_2);
    iVar2 = 1;
  }
  else {
    iVar2 = FUN_2c66df3c(param_1,&local_24,param_2,param_3 + 0x17,uVar6);
    if (iVar2 == -1) {
      *(ushort *)(param_3 + 3) = *(ushort *)(param_3 + 3) | 0x40;
      return -1;
    }
  }
  iVar5 = 0;
  do {
    if (iVar5 == iVar2) {
      return param_2;
    }
    cVar1 = *(char *)((int)&local_24 + iVar5);
    iVar3 = param_3[2] + -1;
    param_3[2] = iVar3;
    if ((iVar3 < 0) && ((iVar3 < (int)param_3[6] || (cVar1 == '\n')))) {
      iVar3 = FUN_2c66de98(param_1,cVar1,param_3);
      if (iVar3 == -1) {
        return -1;
      }
    }
    else {
      pcVar4 = (char *)*param_3;
      *param_3 = pcVar4 + 1;
      *pcVar4 = cVar1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

