/* FUN_10072de4 @ 0x10072de4 */

int FUN_10072de4(int param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  
  if (param_2 == 0) {
    iVar2 = -0x16;
  }
  else {
    iVar2 = FUN_1011ea10(param_2);
    bVar6 = 0;
    pcVar4 = (char *)(param_2 + -1);
    while ((char *)(iVar2 + param_2) != pcVar4) {
      pcVar4 = pcVar4 + 1;
      bVar6 = bVar6 + *pcVar4;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar2 = 0x10;
      uVar1 = DAT_10072eb4;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      iVar2 = FUN_1011f7ca(*(int *)(param_1 + 0x30),iVar2 >> 4);
      iVar2 = iVar2 << 4;
      uVar1 = DAT_10072eb4;
    }
    while (iVar2 < *(int *)(param_1 + 0x20)) {
      iVar5 = *(int *)(param_1 + 0x24) + iVar2;
      FUN_10072994(param_1,iVar5,param_3,8);
      if (*param_3 != 'I') break;
      if ((param_3[1] == -1) && (param_3[3] == (bVar6 ^ 0xa5))) {
        FUN_10072994(param_1,iVar5 + 8,uVar1,param_3[5]);
        iVar3 = FUN_1011ea30(param_2,uVar1,param_3[5]);
        if (iVar3 == 0) {
          return iVar5;
        }
      }
      iVar2 = iVar2 + ((uint)(byte)param_3[5] + (uint)*(ushort *)(param_3 + 6) + 0x17 & 0xfffffff0);
      if (*(int *)(param_1 + 0x30) != 0) {
        iVar5 = *(int *)(param_1 + 0x20);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xf;
        }
        iVar2 = FUN_1011f810(*(int *)(param_1 + 0x30),iVar5 >> 4,iVar2 >> 4);
        iVar2 = iVar2 << 4;
      }
    }
    iVar2 = -2;
  }
  return iVar2;
}

