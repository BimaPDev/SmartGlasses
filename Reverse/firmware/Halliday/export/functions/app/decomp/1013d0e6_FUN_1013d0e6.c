/* FUN_1013d0e6 @ 0x1013d0e6 */

char * FUN_1013d0e6(undefined4 param_1,int param_2,uint param_3,char *param_4,int *param_5,
                   uint param_6,int *param_7)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  longlong in_d0;
  uint uStack_28;
  char *local_24;
  
  iVar5 = (int)((ulonglong)in_d0 >> 0x20);
  uVar7 = (undefined4)in_d0;
  if (in_d0 < 0) {
    iVar5 = iVar5 + -0x80000000;
    cVar4 = '-';
  }
  else {
    cVar4 = '\0';
  }
  *param_4 = cVar4;
  param_6 = param_6 & 0xffffffdf;
  if (param_6 == 0x46) {
    uVar3 = 3;
  }
  else {
    if (param_6 == 0x45) {
      param_2 = param_2 + 1;
    }
    uVar3 = 2;
  }
  uStack_28 = param_3;
  local_24 = param_4;
  pcVar1 = (char *)FUN_10008360(uVar7,param_1,uVar3,param_2,param_5,&uStack_28,&local_24);
  if ((param_6 != 0x47) || ((param_3 & 1) != 0)) {
    pcVar6 = pcVar1 + param_2;
    if (param_6 == 0x46) {
      if ((*pcVar1 == '0') && (iVar2 = FUN_10003fd8(uVar7,iVar5,0,0), iVar2 == 0)) {
        *param_5 = 1 - param_2;
      }
      pcVar6 = pcVar6 + *param_5;
    }
    iVar5 = FUN_10003fd8(uVar7,iVar5,0,0);
    if (iVar5 != 0) {
      local_24 = pcVar6;
    }
    while (local_24 < pcVar6) {
      *local_24 = '0';
      local_24 = local_24 + 1;
    }
  }
  *param_7 = (int)local_24 - (int)pcVar1;
  return pcVar1;
}

