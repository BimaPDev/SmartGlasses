/* FUN_100146a4 @ 0x100146a4 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100146a4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int local_28 [3];
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_10014748;
  local_28[0] = param_1 + 0x12;
  FUN_1011ea48(local_28 + 1,0,0x10);
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_100a5b78((DAT_10014750 - DAT_1001474c) * 0x20 & 0xff00U | 0x470031,DAT_10014758,DAT_10014754
                );
    local_28[0] = 0;
  }
  piVar1 = DAT_1001475c;
  local_28[2] = param_1 + 7;
  local_28[1] = 9;
  local_18 = DAT_10014760;
  local_1c = (undefined1 *)local_28;
  if (*DAT_1001475c == 0) goto LAB_10014732;
  local_1c = (undefined1 *)local_28;
  FUN_100a5b78((DAT_10014750 - DAT_1001474c) * 0x20 & 0xff00U | 0x510031,DAT_10014758,DAT_10014764);
  while( true ) {
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      uVar3 = 0xffffffa8;
    }
    else {
      FUN_1012d5ae(iVar2,param_1);
      uVar3 = 0;
    }
    if (*DAT_10014748 == local_14) break;
    FUN_1013cdc0(uVar3);
LAB_10014732:
    iVar2 = FUN_100a0304(local_28 + 1);
    *piVar1 = iVar2;
  }
  return;
}

