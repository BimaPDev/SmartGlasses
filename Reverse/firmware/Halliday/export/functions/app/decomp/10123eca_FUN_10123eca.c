/* FUN_10123eca @ 0x10123eca */

int FUN_10123eca(undefined4 param_1)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 local_84 [2];
  char *local_7c;
  char *local_78 [2];
  int local_70;
  int local_68;
  uint uStack_64;
  int local_3c;
  byte local_2d;
  
  local_84[0] = param_1;
  iVar3 = FUN_10084bcc(local_84,&local_7c,2);
  local_78[0] = local_7c;
  if (iVar3 != 0) goto LAB_10124066;
  iVar4 = thunk_FUN_1013cfe2(0x460);
  if (iVar4 == 0) {
    FUN_10122b7a(local_7c,0x11);
    return 0x11;
  }
  *(int *)(local_7c + 0xc) = iVar4;
  *(int *)(local_7c + 0x10) = iVar4 + 0x200;
  iVar3 = FUN_10084fcc(local_78,local_84[0]);
  if (iVar3 == 0) {
    iVar3 = 8;
  }
  else if (iVar3 == 4) {
    uVar7 = local_2d & 0x20;
    if ((local_2d & 0x20) == 0) {
      iVar5 = FUN_10122b90(local_78,uVar7);
      local_68 = (uint)*(ushort *)(local_7c + 10) << 9;
      uStack_64 = uVar7;
      if (iVar5 == 0) {
        iVar3 = 7;
      }
      else if (iVar5 == 1) {
        iVar3 = 2;
      }
      else if (iVar5 == -1) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_10122656(local_7c);
        pcVar2 = local_7c;
        if (iVar3 == 0) {
          iVar6 = FUN_101222f0(local_7c,iVar5);
          pcVar9 = pcVar2 + 0x50;
          FUN_101222e4(pcVar9,0,0x200);
          if (*local_7c != '\x04') {
            FUN_101222e4(pcVar9,0x20,0xb);
            pcVar2[0x5b] = '\x10';
            pcVar2[0x66] = '\0';
            pcVar2[0x67] = '\0';
            pcVar2[0x68] = '!';
            pcVar2[0x69] = 'H';
            pcVar2[0x50] = '.';
            FUN_101225ae(local_7c,pcVar9,iVar5);
            FUN_10122580(pcVar2 + 0x70,extraout_r1,0x20);
            pcVar2[0x71] = '.';
            if ((*local_7c == '\x03') && (*(int *)(local_7c + 0x44) == local_70)) {
              local_70 = 0;
            }
            FUN_101225ae(local_7c,pcVar2 + 0x70,local_70);
          }
          uVar1 = *(ushort *)(local_7c + 10);
          iVar8 = iVar6;
          while (iVar8 != (uint)uVar1 + iVar6) {
            *(int *)(local_7c + 0x4c) = iVar8;
            local_7c[3] = '\x01';
            iVar3 = FUN_1012260a();
            if (iVar3 != 0) goto LAB_101240b4;
            FUN_101222e4(pcVar9,0,0x200);
            iVar8 = iVar8 + 1;
          }
          iVar3 = FUN_100847dc(local_78);
          if (iVar3 == 0) {
            if (*local_7c == '\x04') {
              iVar3 = *(int *)(local_7c + 0x10);
              *(undefined1 *)(iVar3 + 0xe) = 0x21;
              *(undefined1 *)(iVar3 + 0xc) = 0;
              *(undefined1 *)(iVar3 + 0xf) = 0x48;
              *(undefined1 *)(iVar3 + 0xd) = 0;
              FUN_101222b6(*(int *)(local_7c + 0x10) + 0x34,iVar5);
              FUN_101222b6(*(int *)(local_7c + 0x10) + 0x38,local_68);
              FUN_101222b6(*(int *)(local_7c + 0x10) + 0x28,local_68);
              *(undefined1 *)(*(int *)(local_7c + 0x10) + 0x21) = 3;
              *(undefined1 *)(*(int *)(local_7c + 0x10) + 4) = 0x10;
              iVar3 = FUN_10122f62(local_78);
              if (iVar3 != 0) goto LAB_10124060;
            }
            else {
              *(undefined1 *)(local_3c + 0x18) = 0x21;
              *(undefined1 *)(local_3c + 0x19) = 0x48;
              *(undefined1 *)(local_3c + 0x16) = 0;
              *(undefined1 *)(local_3c + 0x17) = 0;
              FUN_101225ae(local_7c,local_3c,iVar5);
              *(undefined1 *)(extraout_r1_00 + 0xb) = 0x10;
              local_7c[3] = '\x01';
            }
            iVar3 = FUN_10122ae4(local_7c);
            goto LAB_10124060;
          }
        }
      }
LAB_101240b4:
      FUN_101229d4(local_78,iVar5,0);
    }
    else {
      iVar3 = 6;
    }
  }
LAB_10124060:
  thunk_FUN_1013cfd4(iVar4);
LAB_10124066:
  FUN_10122b7a(local_7c,iVar3);
  return iVar3;
}

