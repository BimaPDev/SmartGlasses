/* FUN_100ce370 @ 0x100ce370 */

void FUN_100ce370(undefined4 param_1,int param_2,char *param_3,int param_4,int *param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar7;
  undefined2 uVar8;
  uint local_60;
  undefined1 local_58 [2];
  undefined2 local_56;
  undefined1 local_54 [2];
  undefined2 local_52;
  char local_50;
  undefined4 uStack_4f;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  undefined1 local_2a;
  char *pcVar6;
  
  if (param_2 == 0) {
    cVar1 = *param_3;
    if (cVar1 == '\x01') {
      uVar7 = 4;
      local_50 = '\0';
    }
    else {
      if (cVar1 != '\x02') {
        FUN_100a5b78(DAT_100ce4e0 | (DAT_100ce4d8 - DAT_100ce4d4) * 0x20 & 0xff00U,DAT_100ce4e4,
                     DAT_100ce4dc,cVar1);
        goto LAB_100ce3a0;
      }
      uVar7 = 0x12;
      local_50 = '\x02';
    }
    local_60 = param_4 - 1U & 0xffff;
    if (uVar7 <= local_60) {
      bVar2 = false;
      local_60 = local_60 / uVar7;
      uVar8 = 0;
      param_3 = param_3 + 1;
      do {
        if (local_60 == 0) {
          FUN_10134c80(param_1,uVar8,param_5);
          return;
        }
        uVar8 = *(undefined2 *)param_3;
        if (bVar2) {
LAB_100ce4a6:
          bVar2 = false;
        }
        else {
          if (local_50 == '\0') {
            uStack_4f._1_2_ = *(undefined2 *)(param_3 + 2);
          }
          else if (local_50 == '\x02') {
            puVar4 = &uStack_4f;
            pcVar6 = param_3 + 2;
            do {
              pcVar5 = pcVar6 + 4;
              *puVar4 = *(undefined4 *)pcVar6;
              puVar4 = puVar4 + 1;
              pcVar6 = pcVar5;
            } while (pcVar5 != param_3 + 0x12);
          }
          if ((*param_5 != 0) && (iVar3 = FUN_10132c82(&local_50), iVar3 != 0)) goto LAB_100ce4a6;
          if ((char)param_5[4] == '\x04') {
            local_58[0] = 0;
            local_56 = 0x2800;
            iVar3 = FUN_10132c82(&local_50,local_58);
            if (iVar3 != 0) {
              local_54[0] = 0;
              local_52 = 0x2801;
              iVar3 = FUN_10132c82(&local_50,local_54);
              if (iVar3 != 0) {
                local_3c._0_2_ = (ushort)local_3c & 0xff00;
                local_3c = (char *)CONCAT22(0x2802,(ushort)local_3c);
                iVar3 = FUN_10132c82(&local_50,&local_3c);
                if (iVar3 != 0) {
                  local_3c._0_2_ = (ushort)local_3c & 0xff00;
                  local_3c = (char *)CONCAT22(0x2803,(ushort)local_3c);
                  iVar3 = FUN_10132c82(&local_50,&local_3c);
                  if (iVar3 != 0) goto LAB_100ce4ac;
                  bVar2 = true;
                }
              }
            }
          }
          else {
LAB_100ce4ac:
            uStack_38 = 0;
            local_34 = 0;
            uStack_30 = 0;
            local_2a = 0;
            local_3c = &local_50;
            local_2c = uVar8;
            iVar3 = (*(code *)param_5[1])(param_1,&local_3c,param_5);
            if (iVar3 == 0) {
              return;
            }
          }
        }
        param_3 = param_3 + uVar7;
        local_60 = local_60 - 1;
      } while( true );
    }
  }
LAB_100ce3a0:
  (*(code *)param_5[1])(param_1,0,param_5);
  return;
}

