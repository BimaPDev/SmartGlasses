/* FUN_10089c2c @ 0x10089c2c */

void FUN_10089c2c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  FUN_10089bf8();
  if (param_2 == 0) {
    param_2 = FUN_10126fae(param_1);
  }
  iVar1 = FUN_10126fae(param_1);
  iVar2 = FUN_101254a6();
  iVar3 = FUN_101254be(iVar1);
  iVar4 = FUN_101254d6(iVar1);
  iVar5 = FUN_101254a6(param_2);
  iVar6 = FUN_101254be(param_2);
  iVar6 = iVar6 + iVar5;
  iVar7 = FUN_101254d6(param_2);
  iVar5 = iVar5 + iVar7;
  if (param_3 == 0) {
    iVar7 = FUN_10125498(param_2);
    if (iVar7 != 1) goto switchD_10089cbe_caseD_1;
switchD_10089cbe_caseD_3:
    iVar7 = FUN_1012579a(param_2);
    iVar6 = iVar6 + ~*(uint *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14) + iVar7;
    goto switchD_10089cbe_caseD_1;
  }
  switch(param_3) {
  case 1:
    break;
  case 2:
    iVar7 = FUN_1012579a(param_2);
    iVar6 = (iVar6 - ((*(int *)(param_1 + 0x1c) + 1) - *(int *)(param_1 + 0x14)) / 2) + iVar7 / 2;
    break;
  case 3:
    goto switchD_10089cbe_caseD_3;
  case 4:
    goto switchD_10089cbe_caseD_4;
  case 5:
    iVar7 = FUN_1012579a(param_2);
    iVar6 = (iVar6 - ((*(int *)(param_1 + 0x1c) + 1) - *(int *)(param_1 + 0x14)) / 2) + iVar7 / 2;
    goto switchD_10089cbe_caseD_4;
  case 6:
    iVar7 = FUN_1012579a(param_2);
    iVar6 = iVar6 + ~*(uint *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14) + iVar7;
switchD_10089cbe_caseD_4:
    iVar7 = FUN_101257c8(param_2);
    iVar5 = iVar5 + ~*(uint *)(param_1 + 0x20) + *(int *)(param_1 + 0x18) + iVar7;
    break;
  case 7:
    goto switchD_10089cbe_caseD_7;
  case 8:
    iVar7 = FUN_1012579a(param_2);
    iVar6 = iVar6 + ~*(uint *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14) + iVar7;
    goto switchD_10089cbe_caseD_7;
  case 9:
    iVar7 = FUN_1012579a(param_2);
    iVar6 = (iVar6 - ((*(int *)(param_1 + 0x1c) + 1) - *(int *)(param_1 + 0x14)) / 2) + iVar7 / 2;
switchD_10089cbe_caseD_7:
    iVar7 = FUN_101257c8(param_2);
    iVar5 = (iVar5 - ((*(int *)(param_1 + 0x20) + 1) - *(int *)(param_1 + 0x18)) / 2) + iVar7 / 2;
    break;
  case 10:
    iVar5 = *(int *)(param_1 + 0x18) + -1;
    iVar7 = *(int *)(param_1 + 0x20);
    goto LAB_10089e38;
  case 0xb:
    iVar6 = ((*(int *)(param_2 + 0x1c) + 1) - *(int *)(param_2 + 0x14)) / 2 -
            ((*(int *)(param_1 + 0x1c) + 1) - *(int *)(param_1 + 0x14)) / 2;
    goto LAB_10089e62;
  case 0xc:
    iVar6 = ((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1c)) + *(int *)(param_2 + 0x1c)) -
            *(int *)(param_2 + 0x14);
LAB_10089e62:
    iVar5 = *(int *)(param_1 + 0x18) + -1;
    iVar7 = *(int *)(param_1 + 0x20);
LAB_10089e6a:
    iVar5 = iVar5 - iVar7;
    break;
  case 0xd:
    iVar5 = *(int *)(param_2 + 0x20) + 1;
    iVar7 = *(int *)(param_2 + 0x18);
LAB_10089e38:
    iVar6 = 0;
    iVar5 = iVar5 - iVar7;
    break;
  case 0xe:
    iVar6 = ((*(int *)(param_2 + 0x1c) + 1) - *(int *)(param_2 + 0x14)) / 2 -
            ((*(int *)(param_1 + 0x1c) + 1) - *(int *)(param_1 + 0x14)) / 2;
    goto LAB_10089eb4;
  case 0xf:
    iVar6 = ((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1c)) + *(int *)(param_2 + 0x1c)) -
            *(int *)(param_2 + 0x14);
LAB_10089eb4:
    iVar5 = *(int *)(param_2 + 0x20) + 1;
LAB_10089ebc:
    iVar7 = *(int *)(param_2 + 0x18);
    goto LAB_10089e6a;
  case 0x10:
    iVar7 = *(int *)(param_1 + 0x1c);
    iVar6 = *(int *)(param_1 + 0x14) + -1;
    goto LAB_10089edc;
  case 0x11:
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar6 = *(int *)(param_1 + 0x14) + -1;
    goto LAB_10089eea;
  case 0x12:
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar6 = *(int *)(param_1 + 0x14) + -1;
    goto LAB_10089f1a;
  case 0x13:
    iVar7 = *(int *)(param_2 + 0x14);
    iVar6 = *(int *)(param_2 + 0x1c) + 1;
LAB_10089edc:
    iVar5 = 0;
    iVar6 = iVar6 - iVar7;
    break;
  case 0x14:
    iVar5 = *(int *)(param_2 + 0x14);
    iVar6 = *(int *)(param_2 + 0x1c) + 1;
LAB_10089eea:
    iVar6 = iVar6 - iVar5;
    iVar5 = ((*(int *)(param_2 + 0x20) + 1) - *(int *)(param_2 + 0x18)) / 2 -
            ((*(int *)(param_1 + 0x20) + 1) - *(int *)(param_1 + 0x18)) / 2;
    break;
  case 0x15:
    iVar5 = *(int *)(param_2 + 0x14);
    iVar6 = *(int *)(param_2 + 0x1c) + 1;
LAB_10089f1a:
    iVar6 = iVar6 - iVar5;
    iVar5 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20)) + *(int *)(param_2 + 0x20);
    goto LAB_10089ebc;
  default:
    iVar5 = 0;
    iVar6 = 0;
  }
switchD_10089cbe_caseD_1:
  iVar7 = FUN_10125498(iVar1);
  iVar9 = *(int *)(param_2 + 0x14);
  iVar8 = *(int *)(iVar1 + 0x14);
  if (iVar7 == 1) {
    iVar7 = FUN_1008a0c0();
  }
  else {
    iVar7 = FUN_1008a000(iVar1);
  }
  iVar11 = *(int *)(iVar1 + 0x18);
  iVar10 = *(int *)(param_2 + 0x18);
  iVar1 = thunk_FUN_10126008(iVar1);
  FUN_10126e0a(param_1,1,0);
  FUN_1012562a(param_1,iVar7 + (((param_4 + iVar9) - iVar8) - (iVar3 + iVar2)) + iVar6,
               iVar5 + ((((iVar10 - iVar4) + param_5) - iVar2) - iVar11) + iVar1);
  return;
}

