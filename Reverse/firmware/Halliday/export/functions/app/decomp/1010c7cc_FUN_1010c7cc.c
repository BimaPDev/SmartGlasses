/* FUN_1010c7cc @ 0x1010c7cc */

int FUN_1010c7cc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_1010c854;
  local_14 = param_2;
  uStack_10 = param_3;
  if (*(int *)(DAT_1010c854 + 0x74c) != 0) {
    local_18 = param_1;
    FUN_1010c720();
    FUN_10139762(*(undefined4 *)(iVar1 + 0x74c));
  }
  if (*(char *)(iVar1 + 0x790) != '\0') {
    local_18 = *(int *)(iVar1 + 0x6d8) << 1;
    local_14 = *(undefined4 *)(iVar1 + 0x6d0);
    iVar2 = FUN_10062a28(0x11,&local_18);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (*(char *)(iVar1 + 0x791) != '\0') {
    local_18 = *(int *)(iVar1 + 0x6f4) + *(int *)(iVar1 + 0x6f8);
    local_14 = *(undefined4 *)(iVar1 + 0x6f0);
    iVar2 = FUN_10062a28(0x11,&local_18);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  local_18 = iVar1;
  iVar2 = FUN_10062a28(1,&local_18);
  if (iVar2 == 0) {
    if (*(int *)(iVar1 + 0x720) != 0) {
      FUN_10139762();
    }
    iVar1 = DAT_1010c854;
    *DAT_1010c858 = 0;
    FUN_1011ea48(iVar1,0,0x7e8);
  }
  return iVar2;
}

