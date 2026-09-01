/* FUN_10123d94 @ 0x10123d94 */

int FUN_10123d94(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_fc [2];
  char *local_f4;
  char *local_f0;
  byte local_e9;
  uint local_e8;
  undefined8 local_e0;
  char *local_c0;
  byte local_ba;
  undefined4 local_84;
  byte local_75;
  char *local_70;
  undefined1 local_69;
  uint local_68;
  undefined8 local_60;
  
  local_fc[0] = param_1;
  iVar3 = FUN_10084bcc(local_fc,&local_f4,2);
  local_c0 = local_f4;
  if (iVar3 != 0) goto LAB_10123e0c;
  iVar4 = thunk_FUN_1013cfe2(0x460);
  if (iVar4 == 0) {
    FUN_10122b7a(local_f4,0x11);
    return 0x11;
  }
  *(int *)(local_f4 + 0xc) = iVar4;
  *(int *)(local_f4 + 0x10) = iVar4 + 0x200;
  iVar3 = FUN_10084fcc(&local_c0,local_fc[0]);
  if (iVar3 == 0) {
    if ((int)((uint)local_75 << 0x1a) < 0) {
LAB_10123ec6:
      iVar3 = 6;
    }
    else {
      iVar3 = FUN_1008432c(&local_c0,2);
      pcVar2 = local_f4;
      if (iVar3 == 0) {
        if ((int)((uint)local_75 << 0x18) < 0) goto LAB_10123ec6;
        if ((local_ba & 1) == 0) {
          local_f0 = local_f4;
          cVar1 = *local_f4;
          if (cVar1 == '\x04') {
            iVar3 = *(int *)(local_f4 + 0x10);
            uVar5 = FUN_1012227a(iVar3 + 0x34);
            local_e8 = uVar5;
            local_e0 = FUN_1012228a(iVar3 + 0x38);
            local_e9 = *(byte *)(iVar3 + 0x21) & 2;
          }
          else {
            uVar5 = FUN_10122592(cVar1,local_84);
          }
          if ((local_ba & 0x10) == 0) {
LAB_10123e4e:
            iVar3 = FUN_10122fc8(&local_c0);
            if (iVar3 == 0) {
              if (uVar5 != 0) {
                iVar3 = FUN_101229d4(&local_f0,uVar5,0);
                if (iVar3 != 0) goto LAB_10123e06;
              }
              iVar3 = FUN_10122ae4(local_f4);
            }
          }
          else {
            uVar6 = *(uint *)(pcVar2 + 0x24);
            if (uVar6 == uVar5) goto LAB_10123e04;
            if (cVar1 == '\x04') {
              uVar6 = (uint)local_e9;
              local_60 = local_e0;
            }
            local_70 = pcVar2;
            if (cVar1 == '\x04') {
              local_69 = (undefined1)uVar6;
            }
            local_68 = uVar5;
            iVar3 = FUN_10122840(&local_70,0);
            if (iVar3 == 0) {
              iVar3 = FUN_100844c0(&local_70);
              if (iVar3 == 0) goto LAB_10123e04;
              if (iVar3 == 4) goto LAB_10123e4e;
            }
          }
        }
        else {
LAB_10123e04:
          iVar3 = 7;
        }
      }
    }
  }
LAB_10123e06:
  thunk_FUN_1013cfd4(iVar4);
LAB_10123e0c:
  FUN_10122b7a(local_f4,iVar3);
  return iVar3;
}

