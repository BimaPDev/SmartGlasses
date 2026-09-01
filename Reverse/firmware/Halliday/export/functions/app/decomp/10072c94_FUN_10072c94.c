/* FUN_10072c94 @ 0x10072c94 */

undefined4 FUN_10072c94(undefined4 param_1,int param_2,char *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined1 local_29 [5];
  
  if (*param_3 == 'I') {
    if (param_3[1] == -1) {
      FUN_10072994(param_1,param_2 + 8,DAT_10072dd0,param_3[5]);
      uVar7 = (uint)(byte)param_3[5];
      bVar4 = 0;
      pcVar3 = DAT_10072dd0;
      uVar5 = uVar7;
      while (bVar9 = uVar5 != 0, uVar5 = uVar5 - 1, bVar9) {
        bVar4 = bVar4 + *pcVar3;
        pcVar3 = pcVar3 + 1;
      }
      if (param_3[3] != (bVar4 ^ 0xa5)) {
        return 3;
      }
      if (param_4 != 0) {
        uVar1 = FUN_1007296c(param_3 + 3,5,0);
        uVar2 = FUN_1007296c(DAT_10072dd0,uVar7,uVar1);
        pcVar3 = DAT_10072dd0;
        uVar5 = 0x80;
        iVar8 = uVar7 + param_2 + 8;
        for (uVar7 = (uint)*(ushort *)(param_3 + 6); 0 < (int)uVar7; uVar7 = uVar7 - uVar5) {
          if ((int)uVar7 <= (int)uVar5) {
            uVar5 = uVar7;
          }
          FUN_10072994(param_1,iVar8,pcVar3,uVar5);
          uVar2 = FUN_1007296c(pcVar3,uVar5,uVar2);
          iVar8 = iVar8 + uVar5;
        }
        if ((byte)param_3[2] != uVar2) {
          FUN_100a5b78(DAT_10072dd4 | (DAT_10072dc0 - DAT_10072dbc) * 0x20 & 0xff00U,DAT_10072dc4,
                       DAT_10072dd8,param_2,uVar2,(uint)(byte)param_3[2]);
          local_29[0] = 0x5a;
          FUN_10072a48(param_1,param_2 + 1,local_29);
          return 3;
        }
      }
      return 1;
    }
    uVar5 = DAT_10072dcc;
    uVar1 = DAT_10072dc8;
    if (param_3[1] == 'Z') {
      return 2;
    }
  }
  else {
    pcVar3 = param_3;
    while (pcVar6 = pcVar3 + 1, uVar5 = DAT_10072de0, uVar1 = DAT_10072ddc, *pcVar3 == -1) {
      pcVar3 = pcVar6;
      if (pcVar6 == param_3 + 8) {
        return 0;
      }
    }
  }
  FUN_100a5b78(uVar5 | (DAT_10072dc0 - DAT_10072dbc) * 0x20 & 0xff00U,DAT_10072dc4,uVar1);
  return 3;
}

