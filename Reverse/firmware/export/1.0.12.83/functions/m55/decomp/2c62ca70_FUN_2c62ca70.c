/* FUN_2c62ca70 @ 0x2c62ca70 */

int FUN_2c62ca70(code *param_1,undefined4 param_2,int param_3,undefined4 param_4,char *param_5,
                uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar4 = param_3;
  uVar6 = param_4;
  if (((param_8 & 3) == 0) && (param_6 < param_7)) {
    iVar4 = (param_7 - param_6) + param_3;
    iVar1 = param_3;
    do {
      iVar2 = iVar1 + 1;
      (*param_1)(0x20,param_2,iVar1,param_4,uVar6);
      iVar1 = iVar2;
    } while (iVar2 != iVar4);
  }
  if (param_6 != 0) {
    pcVar3 = param_5 + param_6;
    do {
      iVar1 = iVar4 - (int)pcVar3;
      pcVar3 = pcVar3 + -1;
      (*param_1)((int)*pcVar3,param_2,param_5 + param_6 + iVar1,param_4,uVar6);
    } while (pcVar3 != param_5);
    iVar4 = iVar4 + param_6;
  }
  if ((int)(param_8 << 0x1e) < 0) {
    uVar5 = iVar4 - param_3;
    for (; uVar5 < param_7; uVar5 = uVar5 + 1) {
      (*param_1)(0x20,param_2,iVar4,param_4,uVar6);
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}

