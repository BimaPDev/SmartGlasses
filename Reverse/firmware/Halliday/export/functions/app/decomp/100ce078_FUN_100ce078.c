/* FUN_100ce078 @ 0x100ce078 */

void FUN_100ce078(undefined4 param_1,int param_2,byte *param_3,int param_4,int *param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  code *pcVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 local_5c [2];
  undefined2 local_5a;
  char *local_58;
  undefined2 local_54;
  undefined2 local_52;
  char local_50;
  undefined4 uStack_4f;
  undefined1 *local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  char **local_30;
  short local_2c;
  undefined1 local_2a;
  byte *pbVar7;
  
  if (param_2 != 0) {
    pcVar8 = (code *)param_5[1];
    goto LAB_100ce08e;
  }
  bVar1 = *param_3;
  if ((char)param_5[4] == '\x02') {
    if (bVar1 == 6) {
      local_50 = '\x02';
LAB_100ce0a8:
      sVar2 = 0;
      pbVar10 = param_3 + 1;
      for (uVar9 = param_4 - 1; uVar9 = uVar9 & 0xffff, *param_3 <= uVar9; uVar9 = uVar9 - *param_3)
      {
        sVar2 = *(short *)pbVar10;
        if (sVar2 == 0) goto LAB_100ce0c6;
        local_54 = *(undefined2 *)(pbVar10 + 2);
        local_52 = *(undefined2 *)(pbVar10 + 4);
        if (local_50 == '\0') {
          uStack_4f._1_2_ = *(undefined2 *)(pbVar10 + 6);
          local_58 = &local_50;
        }
        else if (local_50 == '\x02') {
          *(short *)(param_5 + 2) = sVar2;
          *(undefined2 *)((int)param_5 + 10) = local_54;
          *(undefined2 *)(param_5 + 3) = local_52;
          sVar2 = FUN_10134ab0(param_1,DAT_100ce2a4,param_5,DAT_100ce2a8,10,2);
          if (sVar2 == 0) {
            return;
          }
          goto LAB_100ce282;
        }
        if ((*param_5 == 0) || (iVar3 = FUN_10132c82(&local_50), iVar3 == 0)) {
          local_5a = 0x2802;
          local_3c = local_5c;
          uStack_38 = 0;
          local_30 = &local_58;
          local_5c[0] = 0;
          local_34 = 0;
          local_2a = 0;
          local_2c = sVar2;
          iVar3 = (*(code *)param_5[1])(param_1,&local_3c,param_5);
          if (iVar3 == 0) {
            return;
          }
        }
        pbVar10 = pbVar10 + *param_3;
      }
      goto LAB_100ce0be;
    }
    uVar9 = DAT_100ce2a0;
    uVar4 = DAT_100ce298;
    if (bVar1 == 8) {
      local_50 = '\0';
      goto LAB_100ce0a8;
    }
LAB_100ce0e8:
    FUN_100a5b78(uVar9 | (DAT_100ce294 - DAT_100ce290) * 0x20 & 0xff00U,uVar4,DAT_100ce29c);
  }
  else {
    if (bVar1 == 7) {
      local_50 = '\0';
    }
    else {
      uVar9 = DAT_100ce2b0;
      uVar4 = DAT_100ce2ac;
      if (bVar1 != 0x15) goto LAB_100ce0e8;
      local_50 = '\x02';
    }
    sVar2 = 0;
    pbVar10 = param_3 + 1;
    for (uVar9 = param_4 - 1; uVar9 = uVar9 & 0xffff, *param_3 <= uVar9; uVar9 = uVar9 - *param_3) {
      sVar2 = *(short *)pbVar10;
      if (sVar2 == 0) goto LAB_100ce0c6;
      if (local_50 == '\0') {
        uStack_4f._1_2_ = *(undefined2 *)(pbVar10 + 5);
      }
      else if (local_50 == '\x02') {
        puVar5 = &uStack_4f;
        pbVar7 = pbVar10 + 5;
        do {
          pbVar6 = pbVar7 + 4;
          *puVar5 = *(undefined4 *)pbVar7;
          puVar5 = puVar5 + 1;
          pbVar7 = pbVar6;
        } while (pbVar6 != pbVar10 + 0x15);
      }
      if ((*param_5 == 0) || (iVar3 = FUN_10132c82(&local_50), iVar3 == 0)) {
        local_54 = *(undefined2 *)(pbVar10 + 3);
        local_52 = CONCAT11(local_52._1_1_,pbVar10[2]);
        local_5a = 0x2803;
        local_3c = local_5c;
        uStack_38 = 0;
        local_30 = &local_58;
        local_5c[0] = 0;
        local_34 = 0;
        local_2a = 0;
        local_58 = &local_50;
        local_2c = sVar2;
        iVar3 = (*(code *)param_5[1])(param_1,&local_3c,param_5);
        if (iVar3 == 0) {
          return;
        }
      }
      pbVar10 = pbVar10 + *param_3;
    }
LAB_100ce0be:
    if ((uVar9 == 0) && (sVar2 != 0)) {
LAB_100ce282:
      FUN_10134c80(param_1,sVar2,param_5);
      return;
    }
  }
LAB_100ce0c6:
  pcVar8 = (code *)param_5[1];
LAB_100ce08e:
  (*pcVar8)(param_1,0,param_5);
  return;
}

