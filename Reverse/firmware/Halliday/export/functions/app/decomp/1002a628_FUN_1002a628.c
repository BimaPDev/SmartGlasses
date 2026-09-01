/* FUN_1002a628 @ 0x1002a628 */

void FUN_1002a628(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_d8 [6];
  ushort local_d2;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 auStack_c5 [161];
  int local_24;
  
  local_24 = *DAT_1002a734;
  if (param_1 == 0) goto LAB_1002a706;
  if (param_2 == 2) {
    FUN_1004337c(auStack_d8,2,param_3,0);
    local_d2 = local_d2 + 0x76c;
    iVar2 = 0;
    if (*(int *)(*DAT_1002a738 + 0x1c) != 0) {
      iVar2 = FUN_1012c10e();
    }
    uVar5 = (uint)local_d2 + iVar2;
    if (((uVar5 & 3) == 0) && ((int)uVar5 % 100 != 0)) goto LAB_1002a714;
    if ((int)uVar5 % 400 == 0) {
      iVar2 = 0x1d;
    }
    else {
      iVar2 = 0x1c;
    }
  }
  else if ((param_2 & 0xfd) == 4) {
    iVar2 = 0x1e;
  }
  else if ((param_2 & 0xfd) == 9) {
    iVar2 = 0x1e;
  }
  else {
    iVar2 = 0x1f;
  }
  do {
    FUN_1011ea48(auStack_c5 + 1,0,0xa0);
    uVar1 = DAT_1002a73c;
    iVar6 = 1;
    do {
      local_cc = 0;
      local_c8 = 0;
      FUN_10118a1c(&local_cc,5,uVar1,iVar6);
      iVar3 = FUN_1011ea10(auStack_c5 + 1);
      iVar4 = FUN_1011ea10(&local_cc);
      if (0x9f < (uint)(iVar4 + iVar3)) break;
      iVar6 = iVar6 + 1;
      FUN_1013d3c0(auStack_c5 + 1,&local_cc,0xa0);
    } while (iVar6 <= iVar2);
    iVar2 = FUN_1011ea10(auStack_c5 + 1);
    if (iVar2 != 0) {
      iVar2 = FUN_1011ea10(auStack_c5 + 1);
      auStack_c5[iVar2] = 0;
    }
    FUN_10098558(param_1,auStack_c5 + 1,1);
    FUN_10089bf8(param_1);
    FUN_10089680(param_1);
LAB_1002a706:
    if (*DAT_1002a734 == local_24) {
      return;
    }
    FUN_1013cdc0();
LAB_1002a714:
    iVar2 = 0x1d;
  } while( true );
}

