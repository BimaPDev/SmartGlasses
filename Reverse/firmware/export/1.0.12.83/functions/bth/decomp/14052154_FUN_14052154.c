/* FUN_14052154 @ 0x14052154 */

undefined4 FUN_14052154(uint param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char local_40;
  char local_3f;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  int local_30;
  char local_28;
  int local_1c;
  
  local_1c = *DAT_14052430;
  puVar2 = (undefined4 *)FUN_1404a1b4();
  if (param_2 - 1U < 2) {
    iVar3 = FUN_1404a1b4(param_1);
    if (param_2 == 1) {
      if (param_3 == 2) {
        *(undefined1 *)(iVar3 + 0x84) = 1;
        FUN_140e5378(*(undefined4 *)(iVar3 + 0x8c),500);
LAB_140522d6:
        uVar6 = 0;
        FUN_1402a6e8(4,0x930,DAT_14052438,DAT_1405243c,DAT_14052448,param_1,DAT_14052444,0,0);
        goto LAB_14052208;
      }
    }
    else {
      FUN_140e5718(*(undefined4 *)(iVar3 + 0x8c));
      if (*(char *)(iVar3 + 0x84) == '\0') goto LAB_140522d6;
    }
    *(undefined1 *)(iVar3 + 0x84) = 0;
    FUN_1402a6e8(4,0x930,DAT_14052438,DAT_1405243c,DAT_14052448,param_1,DAT_14052444,1,param_3);
    FUN_1402a6e8(4,0xb13,DAT_14052438,DAT_1405243c,DAT_14052434,param_3);
    FUN_1402a6e8(4,0xb14,DAT_14052438,DAT_1405243c,DAT_14052440,param_1,3);
switchD_140521a6_caseD_3:
    if (param_3 == 2) {
      *(undefined1 *)(puVar2 + 0x47) = 0;
      FUN_1409d518(param_1,0xb);
      uVar4 = FUN_1404b24c();
      if (1 < uVar4) {
        if ((*(char *)(DAT_14052760 + 0x191) != '\0') || (*(char *)(DAT_14052760 + 0x193) != '\0'))
        {
          FUN_140516e8(param_1);
          local_38 = *puVar2;
          local_34 = *(undefined2 *)(puVar2 + 1);
          local_32 = *(undefined1 *)((int)puVar2 + 10);
          local_30 = 1;
          local_28 = '\x01';
          FUN_1409e1ec(&local_38);
          *(undefined1 *)(puVar2 + 0x3f) = 0;
        }
        uVar4 = FUN_1404b24c();
        if (1 < uVar4) {
          FUN_1404a1b4(0);
        }
      }
    }
    else if (param_3 == 1) {
      FUN_1409d518(param_1,10);
      if (*(char *)((int)puVar2 + 0x85) != '\0') {
        *(undefined1 *)((int)puVar2 + 0x85) = 0;
        FUN_140e5718(puVar2[0x22]);
      }
      if (*(char *)((int)puVar2 + 0x45) != '\0') goto switchD_140521a6_caseD_a;
    }
    goto switchD_140521a6_caseD_6;
  }
  FUN_1402a6e8(4,0xb13,DAT_14052438,DAT_1405243c,DAT_14052434,param_3);
  iVar5 = param_2;
  FUN_1402a6e8(4,0xb14,DAT_14052438,DAT_1405243c,DAT_14052440,param_1,param_2);
  uVar6 = DAT_14052774;
  iVar3 = DAT_1405244c;
  switch(param_2) {
  case 3:
  case 4:
    goto switchD_140521a6_caseD_3;
  case 5:
    if ((*(char *)(DAT_14052760 + 0x191) != '\0') || (*(char *)(DAT_14052760 + 0x193) != '\0')) {
      FUN_140516e8(param_1);
LAB_140525ac:
      local_38 = *puVar2;
      local_34 = *(undefined2 *)(puVar2 + 1);
      local_32 = *(undefined1 *)((int)puVar2 + 10);
      local_30 = 1;
      local_28 = '\x01';
      FUN_1409e1ec(&local_38);
      uVar6 = 0;
      *(undefined1 *)(puVar2 + 0x3f) = 0;
      break;
    }
  default:
    goto switchD_140521a6_caseD_6;
  case 8:
    iVar3 = FUN_1409dbc8();
    if (*(byte *)(iVar3 + 1) == param_1) {
      FUN_1409d518(param_1,8);
      uVar6 = 0;
      break;
    }
    goto switchD_140521a6_caseD_6;
  case 9:
    uVar6 = 0;
    *(undefined1 *)((int)puVar2 + 0xff) = 0;
    FUN_14052104(param_1);
    thunk_FUN_140a9b8c();
    if ((*(char *)(DAT_1405244c + 0x193) == '\0') || (*(char *)((int)puVar2 + 0x101) == '\0')) {
      *(undefined1 *)((int)puVar2 + 0x101) = 0;
      FUN_140516e8(param_1);
      local_38 = *puVar2;
      uVar6 = 0;
      local_34 = *(undefined2 *)(puVar2 + 1);
      local_32 = *(undefined1 *)((int)puVar2 + 10);
      local_30 = 1;
      local_28 = '\x01';
      FUN_1409e1ec(&local_38);
      *(undefined1 *)(puVar2 + 0x3f) = 0;
    }
    else {
      FUN_1402a6e8(4,0xb3c,DAT_1405276c,DAT_14052768,DAT_14052778,param_1,iVar5);
    }
    break;
  case 10:
  case 0xb:
switchD_140521a6_caseD_a:
    uVar6 = 0;
    *(undefined1 *)((int)puVar2 + 0xff) = 1;
    *(undefined1 *)((int)puVar2 + 0x101) = 0;
    FUN_14052104(param_1);
    FUN_140511c0(puVar2);
    FUN_1404a1b4(0);
    break;
  case 0xc:
    *(undefined1 *)((int)puVar2 + 0xff) = 0;
    thunk_FUN_140a9b8c();
    if (*(char *)((int)puVar2 + 0x85) != '\0') {
      *(undefined1 *)((int)puVar2 + 0x85) = 0;
      FUN_140e5718(puVar2[0x22]);
    }
    iVar3 = DAT_14052760;
    FUN_140516e8(param_1);
    if (*(char *)(iVar3 + 0x192) != '\0') {
      cVar1 = *(char *)(puVar2 + 0x3f);
      if (cVar1 == 1) {
        local_38 = *puVar2;
        local_34 = *(undefined2 *)(puVar2 + 1);
        local_32 = *(undefined1 *)((int)puVar2 + 10);
        local_30 = (int)cVar1;
        local_28 = cVar1;
        FUN_1409e1ec(&local_38);
        *(undefined1 *)(puVar2 + 0x3f) = 0;
        if (((param_1 != 0) && (iVar5 = FUN_1404a1b4(0), *(char *)(iVar5 + 0x45) != '\0')) &&
           (*(char *)(iVar5 + 0x49) == '\0')) {
          FUN_1402a6e8(4,0xaea,DAT_1405281c,DAT_14052818,DAT_14052814,0);
          FUN_1404a1b4(0);
          FUN_140511c0();
        }
      }
    }
    if (*(char *)(iVar3 + 0x191) != '\0') goto LAB_140525ac;
    goto switchD_140521a6_caseD_6;
  case 0xd:
    FUN_140511c0(puVar2);
    uVar6 = 0;
    break;
  case 0xf:
    FUN_1409d518(param_1,1);
    uVar6 = 0;
    break;
  case 0x10:
    *(undefined1 *)((int)puVar2 + 0x111) = 0;
    puVar2[0x30] = 0;
    iVar3 = FUN_14098328(puVar2[0x35]);
    if ((iVar3 == 0) && ((puVar2[0x36] & 0xff00ff) == 1)) {
      *(undefined1 *)((int)puVar2 + 0x111) = 1;
      FUN_14051a2c(puVar2);
      uVar6 = 0;
      break;
    }
    goto switchD_140521a6_caseD_6;
  case 0x11:
    iVar3 = FUN_1409dbc8();
    if (*(byte *)(iVar3 + 1) == param_1) goto switchD_140521a6_caseD_27;
    goto switchD_140521a6_caseD_6;
  case 0x12:
    if (*(byte *)(DAT_1405244c + 0x143) == param_1) {
      *(undefined1 *)(DAT_1405244c + 0x143) = 0xff;
    }
    if (*(byte *)(iVar3 + 0x144) == param_1) {
      *(undefined1 *)(iVar3 + 0x144) = 0xff;
    }
    FUN_14051a80(puVar2,0);
  case 0x15:
    uVar6 = 0;
    puVar2[0x30] = 0;
    FUN_14051ea4(param_1);
    break;
  case 0x13:
    uVar6 = FUN_14051b8c(param_1);
    FUN_1402a6e8(4,0xbc6,DAT_1405276c,DAT_14052768,DAT_14052764,param_1,uVar6);
    break;
  case 0x14:
    iVar3 = *(int *)(DAT_14052760 + 0x13c) + 1;
    *(int *)(DAT_14052760 + 0x13c) = iVar3;
    puVar2[0x30] = iVar3;
    FUN_1402a6e8(4,0xbcb,DAT_1405276c,DAT_14052768,uVar6,*(undefined1 *)((int)puVar2 + 10),
                 *(undefined1 *)(puVar2 + 0x36));
    FUN_14051c40(param_1);
    uVar6 = 0;
    break;
  case 0x17:
    if (*(char *)((int)puVar2 + 0x111) == '\0') {
      iVar3 = FUN_1404b280();
      if (iVar3 == 0) {
        iVar3 = FUN_14098328(puVar2[0x35]);
        if (iVar3 == 0) goto LAB_14052636;
      }
      else if (((*(char *)(puVar2 + 0x36) == '\x01') && (*(char *)((int)puVar2 + 0xda) != '\x01'))
              && (iVar3 = FUN_14050c00(param_1), iVar3 == 0xff)) {
        FUN_1402a6e8(4,0xbf8,DAT_1405276c,DAT_14052768,DAT_14052770,param_1,iVar5);
LAB_14052636:
        uVar6 = 0;
        FUN_14050f9c(puVar2);
        break;
      }
    }
    goto switchD_140521a6_caseD_6;
  case 0x19:
  case 0x24:
    FUN_14051d90(param_1);
    FUN_1409d5c8(param_1);
    uVar6 = 0;
    break;
  case 0x1a:
  case 0x25:
    FUN_14051cfc(param_1);
    FUN_1409d5c8(param_1);
    uVar6 = 0;
    break;
  case 0x1b:
  case 0x26:
    if (param_1 != 0) {
      iVar3 = FUN_1404a1b4(0);
      cVar1 = *(char *)((int)puVar2 + 0xfd);
      if (((cVar1 == '\x01') && (*(char *)((int)puVar2 + 0xdb) == '\x02')) &&
         (*(char *)(iVar3 + 0xd8) != '\0')) {
        if (*(byte *)(DAT_1405244c + 0x122) == param_1) {
          *(undefined1 *)(DAT_1405244c + 0x122) = 0xff;
          FUN_14034238(0);
          FUN_1409dc10(param_1,2,4);
          FUN_1409d5c8(param_1);
          local_3c = 0x39;
          local_40 = cVar1;
          local_3f = (char)param_1;
          FUN_1409e6bc(4,&local_40);
        }
        iVar3 = FUN_1404a1b4(0);
        if (*(char *)(iVar3 + 0xd8) == '\x01') {
          iVar3 = FUN_1404a1b4(0);
          FUN_14097fcc(*(undefined4 *)(iVar3 + 0xd4));
        }
      }
    }
  case 0x27:
  case 0x28:
switchD_140521a6_caseD_27:
    FUN_1409d5c8(param_1);
    uVar6 = 0;
    break;
  case 0x1d:
    uVar6 = 0;
    FUN_1409dc10(param_1,7);
    break;
  case 0x21:
  case 0x23:
    FUN_1409dc10(param_1,7,1);
    uVar6 = 0;
    break;
  case 0x22:
    FUN_1409dc10(param_1,7,2);
    if (*(byte *)(DAT_14052760 + 0x122) == param_1) {
      *(undefined1 *)(DAT_14052760 + 0x122) = 0xff;
      FUN_14034238(0);
      FUN_1409dc10(param_1,2,4);
      FUN_1409d5c8(param_1);
      local_40 = '\x01';
      local_3c = 0x39;
      local_3f = (char)param_1;
      FUN_1409e6bc(4,&local_40);
    }
    FUN_140516e8(param_1);
    iVar3 = FUN_1409e5b8(1,*(undefined1 *)((int)puVar2 + 10));
    if (iVar3 != 0) {
      local_38 = *puVar2;
      local_34 = *(undefined2 *)(puVar2 + 1);
      local_32 = *(undefined1 *)((int)puVar2 + 10);
      local_28 = (char)iVar3;
      local_30 = 1;
      FUN_1409e1ec(&local_38);
      if (iVar3 == 1) {
        *(undefined1 *)(puVar2 + 0x3f) = 0;
      }
      else if (iVar3 == 3) {
        *(undefined1 *)((int)puVar2 + 0xfd) = 0;
      }
      else if (iVar3 == 4) {
        *(undefined1 *)((int)puVar2 + 0xfe) = 0;
      }
    }
    goto switchD_140521a6_caseD_6;
  case 0x2a:
    cVar1 = *(char *)(DAT_14052760 + 0x122);
    if (cVar1 != -1) {
      *(undefined1 *)(DAT_14052760 + 0x122) = 0xff;
      FUN_14034238(0);
      FUN_1409dc10(cVar1,2,4);
      FUN_1409d5c8(cVar1);
      local_40 = '\x01';
      local_3c = 0x39;
      local_3f = cVar1;
      FUN_1409e6bc(4,&local_40);
    }
    if (*(char *)((int)puVar2 + 0xda) == '\x01') {
      uVar6 = 0;
      puVar2[0x30] = 0;
      FUN_14051058(param_1);
      break;
    }
switchD_140521a6_caseD_6:
    uVar6 = 0;
  }
LAB_14052208:
  if (*DAT_14052430 != local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return uVar6;
}

