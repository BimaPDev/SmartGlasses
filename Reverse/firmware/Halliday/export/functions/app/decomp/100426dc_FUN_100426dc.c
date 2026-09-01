/* FUN_100426dc @ 0x100426dc */

void FUN_100426dc(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  undefined1 local_24;
  undefined4 local_20;
  int local_14;
  
  iVar5 = *DAT_10042748;
  iVar4 = FUN_1000eb50();
  uVar6 = (DAT_1004274c - DAT_10042750) * 0x20 & 0xff00;
  if (iVar4 == 0) {
    FUN_100a5b78(uVar6 | 0x720031,DAT_10042758,DAT_1004275c);
    puVar1 = DAT_1000e48c;
    if (*DAT_10042748 == iVar5) {
      local_14 = *DAT_1000e488;
      FUN_100a5b78(DAT_1000e498 | (DAT_1000e494 - DAT_1000e490) * 0x20 & 0xff00U,DAT_1000e4a0,
                   DAT_1000e49c,*DAT_1000e48c,*(undefined1 *)(DAT_1000e48c + 2),
                   *(undefined1 *)((int)DAT_1000e48c + 10),*(undefined1 *)((int)DAT_1000e48c + 9));
      if (((*(char *)(puVar1 + 2) == '\0') || (*(char *)((int)puVar1 + 10) == '\0')) ||
         (*(char *)((int)puVar1 + 9) == '\0')) {
        FUN_1011ea48(auStack_28,0,0x14);
        local_26 = 0xd108;
        local_24 = 1;
        *(undefined1 *)(puVar1 + 2) = 1;
        uVar3 = FUN_1009e224();
        FUN_1009ece8(uVar3,auStack_28);
      }
      if (*DAT_1000e488 != local_14) {
        FUN_1013cdc0();
      }
      return;
    }
  }
  else {
    FUN_100a5b78(uVar6 | 0x6f0031,DAT_10042758,DAT_10042754);
    if (*DAT_10042748 == iVar5) goto LAB_10041e34;
  }
  FUN_1013cdc0();
LAB_10041e34:
  if (*DAT_10041e5c != *DAT_10041e5c) {
    FUN_1013cdc0();
  }
  piVar2 = DAT_1000e524;
  local_14 = *(int *)PTR_DAT_1000e518;
  FUN_100a5b78(DAT_1000e528 | ((int)PTR_DAT_1000e51c - (int)PTR_DAT_1000e520) * 0x20 & 0xff00U,
               DAT_1000e530,DAT_1000e52c,*DAT_1000e524,(char)DAT_1000e524[2],0);
  if (((char)piVar2[2] != '\0') || (*piVar2 != 0)) {
    FUN_1011ea48(auStack_28,0,0x14);
    local_26 = 0xd008;
    local_24 = 1;
    local_20 = 0;
    *(undefined1 *)(piVar2 + 2) = 0;
    uVar3 = FUN_1009e224();
    FUN_1009ece8(uVar3,auStack_28);
  }
  if (*(int *)PTR_DAT_1000e518 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

