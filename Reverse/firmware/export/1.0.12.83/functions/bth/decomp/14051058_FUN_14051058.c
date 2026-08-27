/* FUN_14051058 @ 0x14051058 */

void FUN_14051058(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_14051100;
  iVar2 = FUN_1404a1b4();
  if ((*(char *)(DAT_14051104 + 0xc) == '\0') ||
     (iVar3 = FUN_14097fac(*(undefined4 *)(iVar2 + 0xd4)), iVar3 == 0)) {
    iVar3 = DAT_14051108;
    *(undefined1 *)(iVar2 + 0x5a) = 0;
    uVar1 = (undefined1)param_1;
    *(undefined1 *)(iVar3 + 0x120) = uVar1;
    iVar2 = FUN_1409dc00();
    if (iVar2 != 0) {
      local_1c = 1;
      local_18 = 0x39;
      FUN_1409e6bc(2,&local_1c);
    }
    if (*(byte *)(iVar3 + 0x122) != param_1) {
      *(undefined1 *)(iVar3 + 0x122) = uVar1;
      FUN_14034238(1);
      FUN_1409dc10(param_1,2,3);
      FUN_1409d5c8(param_1);
      local_1c = CONCAT11(uVar1,1);
      local_18 = 0x39;
      FUN_1409e650(4,&local_1c);
    }
  }
  else {
    *(undefined1 *)(iVar2 + 0x5a) = 1;
  }
  if (*DAT_14051100 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

