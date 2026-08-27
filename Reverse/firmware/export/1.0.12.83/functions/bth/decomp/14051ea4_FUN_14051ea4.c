/* FUN_14051ea4 @ 0x14051ea4 */

/* WARNING: Removing unreachable block (ram,0x14050cc4) */

int FUN_14051ea4(uint param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_38;
  undefined1 local_30;
  int local_24;
  
  local_24 = *DAT_140520dc;
  puVar5 = (undefined4 *)FUN_1404a1b4();
  iVar8 = DAT_140520e0;
  FUN_1402a6e8(4,0xab4,DAT_140520e8,DAT_140520ec,DAT_140520e4,param_1,
               *(undefined1 *)(DAT_140520e0 + 0x138));
  *(undefined2 *)(puVar5 + 0x37) = 0;
  FUN_1404a1b4();
  FUN_1409d4f0();
  if ((*(byte *)(iVar8 + 0x138) == 0xff) || (*(byte *)(iVar8 + 0x138) == param_1)) {
    if (*(byte *)(iVar8 + 0x122) == param_1) goto LAB_14051f62;
LAB_14051efa:
    if (*(char *)((int)puVar5 + 0xfd) == '\x01') goto LAB_14051f9c;
LAB_14051f02:
    iVar6 = FUN_1404a1b4(param_1);
    if (((*(char *)(iVar6 + 0xde) == '\0') || (*(int *)(iVar6 + 0xd8) != 0)) &&
       (iVar6 = FUN_1409e604(), 1 < iVar6)) {
      uVar7 = FUN_1409e5b8(1,*(undefined1 *)((int)puVar5 + 10));
      iVar6 = FUN_1409e610(1,*(undefined1 *)((int)puVar5 + 10),uVar7);
      if (iVar6 == 0) {
        iVar6 = FUN_1402a6e8(4,0x7d5,DAT_140520e8,DAT_140520ec,DAT_14052100,
                             *(undefined1 *)((int)puVar5 + 10));
      }
      else {
        FUN_1402a6e8(4,0x7d9,DAT_140520e8,DAT_140520ec,DAT_140520f4,
                     *(undefined1 *)((int)puVar5 + 10));
        local_40 = *puVar5;
        local_3a = *(undefined1 *)((int)puVar5 + 10);
        local_3c = *(undefined2 *)(puVar5 + 1);
        local_38 = 1;
        iVar6 = FUN_1409e5b8(1);
        if (iVar6 != 4) {
          iVar6 = 3;
        }
        local_30 = (undefined1)iVar6;
        iVar6 = FUN_1409e400(&local_40);
        if (iVar6 != 0) {
          *(undefined1 *)((int)puVar5 + 0xfd) = 0;
        }
      }
    }
    else {
      iVar6 = FUN_1404a1b4(param_1);
      if (((*(char *)(iVar6 + 0xde) != '\0') && (*(int *)(iVar6 + 0xd8) == 0)) &&
         (iVar6 = FUN_1409e5b8(1,*(undefined1 *)((int)puVar5 + 10)), iVar6 == 3)) {
        uVar2 = *(undefined1 *)((int)puVar5 + 10);
        uVar3 = *(undefined1 *)((int)puVar5 + 0xd9);
        uVar4 = *(undefined1 *)(puVar5 + 0x36);
        uVar7 = FUN_1409e604();
        FUN_1402a6e8(4,0xad0,DAT_140520e8,DAT_140520ec,DAT_140520f8,uVar2,uVar3,uVar4,uVar7);
        iVar6 = FUN_14051528(puVar5);
      }
    }
  }
  else {
    FUN_1409596c();
    if (*(byte *)(iVar8 + 0x122) != param_1) goto LAB_14051efa;
LAB_14051f62:
    *(undefined1 *)(iVar8 + 0x122) = 0xff;
    FUN_14034238(0);
    FUN_1409dc10(param_1,2,4);
    FUN_1409d5c8(param_1);
    local_44 = 0x39;
    local_48 = 1;
    local_47 = (char)param_1;
    FUN_1409e6bc(4,&local_48);
    if (*(char *)((int)puVar5 + 0xfd) != '\x01') goto LAB_14051f02;
LAB_14051f9c:
    FUN_14051528(puVar5);
    iVar6 = FUN_1402a6e8(4,0xac3,DAT_140520e8,DAT_140520ec,DAT_140520f0);
  }
  if (((*(char *)(iVar8 + 0x196) != '\0') && (*(char *)((int)puVar5 + 0xd9) != '\0')) &&
     ((iVar6 = FUN_1404a1b4(0), *(char *)(iVar6 + 0xda) != '\x01' &&
      (iVar6 = FUN_1404a1b4(0), *(char *)(iVar6 + 0xdc) == '\0')))) {
    iVar8 = thunk_FUN_140e5848();
    uVar9 = FUN_140e5548(iVar8 - puVar5[0x34]);
    iVar6 = FUN_1402a6e8(4,0xad9,DAT_140520e8,DAT_140520ec,DAT_140520fc,param_1,uVar9);
    if (uVar9 < 1000) {
      if (*DAT_140520dc == local_24) {
        iVar8 = FUN_1404a1b4();
        if (*(char *)(iVar8 + 0xde) != '\0') {
          if (*(char *)(iVar8 + 0xda) == '\x01') {
            return 0;
          }
          if ((*(char *)(iVar8 + 0xd9) == '\x01') || (*(char *)(iVar8 + 0xd8) != '\0')) {
            FUN_140488c0(*(undefined4 *)(iVar8 + 0xd4));
            iVar8 = DAT_14050cf4;
            pbVar1 = (byte *)(DAT_14050cf4 + 0x143);
            *(char *)(DAT_14050cf4 + 0x144) = (char)param_1;
            if (*pbVar1 == param_1) {
              *(undefined1 *)(iVar8 + 0x143) = 0xff;
            }
            return 1;
          }
        }
        return 0;
      }
      goto LAB_140520d6;
    }
  }
  if (*DAT_140520dc == local_24) {
    return iVar6;
  }
LAB_140520d6:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

