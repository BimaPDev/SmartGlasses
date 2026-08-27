/* FUN_140511c0 @ 0x140511c0 */

void FUN_140511c0(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  if ((*(char *)(DAT_14051250 + 0x191) == '\0') && (*(char *)(DAT_14051250 + 0x193) == '\0')) {
    iVar7 = FUN_14050e38(param_1,1,1,*(undefined1 *)(DAT_14051250 + 0x192));
    uVar3 = DAT_14051258;
    uVar4 = DAT_1405125c;
    local_10 = DAT_14051260;
  }
  else {
    iVar7 = FUN_14050e38(param_1,1);
    uVar3 = DAT_14051258;
    uVar4 = DAT_1405125c;
    local_10 = DAT_14051260;
  }
  DAT_14051258 = uVar3;
  DAT_1405125c = uVar4;
  DAT_14051260 = local_10;
  if (iVar7 != 1) {
    if (iVar7 == 2) {
      *(undefined1 *)(param_1 + 0x101) = 1;
      *(undefined1 *)(param_1 + 0xfc) = 0xfe;
      FUN_1402a6e8(4,0x75e,uVar4,uVar3);
    }
    else if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 0xfc) = 0xff;
    }
    local_10 = DAT_14051254;
    FUN_1402a6e8(4,0x764,DAT_1405125c,DAT_14051258);
    return;
  }
  cVar1 = *(char *)(param_1 + 10);
  local_14 = *DAT_140511b4;
  iVar5 = FUN_1404a1b4();
  iVar7 = DAT_140511bc;
  if ((*(char *)(iVar5 + 6) != '\0') && (*(char *)(iVar5 + 0x44) != '\0')) {
    cVar2 = *(char *)(DAT_140511b8 + 0x26);
    *(char *)(DAT_140511bc + 0x121) = cVar1;
    if ((cVar2 != '\0') && (iVar6 = FUN_1409dc00(), iVar6 != 0)) {
      local_1c = 1;
      local_18 = 0x39;
      FUN_1409e6bc(2,&local_1c);
    }
    if ((*(char *)(iVar5 + 0x45) != '\0') &&
       ((*(char *)(iVar7 + 0x123) != cVar1 || (*(char *)(iVar7 + 0x126) != '\0')))) {
      *(char *)(iVar7 + 0x123) = cVar1;
      *(undefined1 *)(iVar7 + 0x126) = 0;
      thunk_FUN_140a9b8c();
      FUN_1409dc10(cVar1,1,3);
      FUN_1409d518(cVar1,3);
      local_1c = CONCAT11(cVar1,1);
      local_18 = 0x39;
      FUN_1409e650(1,&local_1c);
    }
  }
  if (*DAT_140511b4 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

