/* FUN_101240d0 @ 0x101240d0 */

int FUN_101240d0(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_108;
  undefined4 local_104 [2];
  char *local_fc;
  byte local_f8 [2];
  undefined1 auStack_f6 [62];
  char *local_b8 [2];
  int local_b0;
  int local_88;
  int local_7c;
  byte local_6d;
  undefined1 auStack_68 [8];
  int local_60;
  int local_38;
  int local_2c;
  
  local_108 = param_2;
  local_104[0] = param_1;
  FUN_10084444(&local_108);
  iVar5 = FUN_10084bcc(local_104,&local_fc,2);
  if (iVar5 != 0) goto LAB_10124178;
  local_b8[0] = local_fc;
  iVar6 = thunk_FUN_1013cfe2(0x460);
  if (iVar6 == 0) {
    FUN_10122b7a(local_fc,0x11);
    return 0x11;
  }
  *(int *)(local_fc + 0xc) = iVar6;
  *(int *)(local_fc + 0x10) = iVar6 + 0x200;
  iVar5 = FUN_10084fcc(local_b8,local_104[0]);
  if (iVar5 == 0) {
    if ((local_6d & 0xa0) == 0) {
      iVar5 = FUN_1008432c(local_b8,2);
      if (iVar5 == 0) {
        if (*local_fc == '\x04') {
          FUN_10122580(local_f8,*(undefined4 *)(local_fc + 0x10),0x40);
          FUN_10122580(auStack_68,local_b8);
          iVar5 = FUN_10084fcc(auStack_68,local_108);
          if (iVar5 == 0) {
            if ((local_60 == local_b0) && (local_38 == local_88)) {
LAB_1012418a:
              iVar5 = FUN_100847dc(auStack_68);
              if (iVar5 == 0) {
                iVar5 = *(int *)(local_fc + 0x10);
                uVar3 = *(undefined2 *)(iVar5 + 0x24);
                uVar1 = *(undefined1 *)(iVar5 + 1);
                uVar2 = *(undefined1 *)(iVar5 + 0x23);
                FUN_10122580(iVar5,local_f8,0x40);
                *(undefined1 *)(*(int *)(local_fc + 0x10) + 1) = uVar1;
                *(undefined1 *)(*(int *)(local_fc + 0x10) + 0x23) = uVar2;
                iVar5 = *(int *)(local_fc + 0x10);
                *(char *)(iVar5 + 0x24) = (char)uVar3;
                *(char *)(iVar5 + 0x25) = (char)((ushort)uVar3 >> 8);
                iVar5 = FUN_10122f62(auStack_68);
                if (iVar5 == 0) goto LAB_101241de;
              }
            }
            else {
LAB_10124170:
              iVar5 = 8;
            }
          }
          else if (iVar5 == 4) goto LAB_1012418a;
        }
        else {
          FUN_10122580(local_f8,local_7c + 0xb,0x15);
          FUN_10122580(auStack_68,local_b8);
          iVar5 = FUN_10084fcc(auStack_68,local_108);
          if (iVar5 == 0) {
            if ((local_60 != local_b0) || (local_38 != local_88)) goto LAB_10124170;
          }
          else if (iVar5 != 4) goto LAB_10124172;
          iVar5 = FUN_100847dc(auStack_68);
          if (iVar5 == 0) {
            FUN_10122580(local_2c + 0xd,auStack_f6,0x13);
            pcVar4 = local_fc;
            *(byte *)(local_2c + 0xb) = local_f8[0] | 0x20;
            local_fc[3] = '\x01';
            if (((int)((uint)*(byte *)(local_2c + 0xb) << 0x1b) < 0) && (local_b0 != local_60)) {
              uVar7 = FUN_10122592(*local_fc,local_2c);
              iVar5 = FUN_101222f0(pcVar4,uVar7);
              if (iVar5 == 0) {
                iVar5 = 2;
              }
              else {
                iVar5 = FUN_10122662(pcVar4,iVar5);
                if (iVar5 == 0) {
                  if (local_fc[0x71] == '.') {
                    FUN_101225ae(local_fc,local_fc + 0x70,local_60);
                    local_fc[3] = '\x01';
                  }
                  goto LAB_101241de;
                }
              }
            }
            else {
LAB_101241de:
              iVar5 = FUN_10122fc8(local_b8);
              if (iVar5 == 0) {
                iVar5 = FUN_10122ae4(local_fc);
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 6;
    }
  }
LAB_10124172:
  thunk_FUN_1013cfd4(iVar6);
LAB_10124178:
  FUN_10122b7a(local_fc,iVar5);
  return iVar5;
}

