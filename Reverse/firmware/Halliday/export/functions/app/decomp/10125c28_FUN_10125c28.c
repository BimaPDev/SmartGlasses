/* FUN_10125c28 @ 0x10125c28 */

void FUN_10125c28(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_34;
  uint local_30;
  
  iVar2 = FUN_1008953c();
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_10126fae(param_1);
  local_34 = FUN_1012691c(param_1,0,7);
  uVar3 = FUN_1012691c(param_1,0,8);
  if (iVar2 == 0) goto LAB_10125c68;
  iVar4 = FUN_1012579a(iVar2);
  iVar5 = FUN_101257c8(iVar2);
  if (((local_34 & 0x60000000) == 0x20000000) && (uVar6 = local_34 & 0x9fffffff, (int)uVar6 < 0x7d1)
     ) {
    if (1000 < (int)uVar6) {
      uVar6 = 1000 - uVar6;
    }
    local_34 = (int)(uVar6 * iVar4) / 100;
  }
  if (((uVar3 & 0x60000000) == 0x20000000) && (uVar6 = uVar3 & 0x9fffffff, (int)uVar6 < 0x7d1)) {
    if (1000 < (int)uVar6) {
      uVar6 = 1000 - uVar6;
    }
    uVar3 = (int)(iVar5 * uVar6) / 100;
  }
  local_30 = FUN_1012691c(param_1,0,0x6b);
  uVar6 = FUN_1012691c(param_1,0,0x6c);
  iVar7 = *(int *)(param_1 + 0x14);
  iVar8 = *(int *)(param_1 + 0x1c) + 1;
  iVar12 = iVar8 - iVar7;
  iVar9 = *(int *)(param_1 + 0x18);
  iVar13 = *(int *)(param_1 + 0x20) + 1;
  iVar11 = iVar13 - iVar9;
  if (((local_30 & 0x60000000) == 0x20000000) &&
     (uVar10 = local_30 & 0x9fffffff, (int)uVar10 < 0x7d1)) {
    if (1000 < (int)uVar10) {
      uVar10 = 1000 - uVar10;
    }
    local_30 = (int)(iVar12 * uVar10) / 100;
  }
  if (((uVar6 & 0x60000000) == 0x20000000) && (uVar10 = uVar6 & 0x9fffffff, (int)uVar10 < 0x7d1)) {
    if (1000 < (int)uVar10) {
      uVar10 = 1000 - uVar10;
    }
    uVar6 = (int)(iVar11 * uVar10) / 100;
  }
  local_34 = local_34 + local_30;
  uVar3 = uVar3 + uVar6;
  cVar1 = FUN_1012691c(param_1,0,9);
  if (cVar1 == '\0') {
    iVar2 = FUN_10125498(iVar2);
    if (iVar2 != 1) goto LAB_10125c68;
switchD_10125d9a_caseD_3:
    iVar4 = iVar4 + (iVar7 - iVar8);
LAB_10125db4:
    local_34 = local_34 + iVar4;
    goto LAB_10125c68;
  }
  switch(cVar1) {
  case '\x02':
    iVar4 = iVar4 / 2 - iVar12 / 2;
    goto LAB_10125db4;
  case '\x03':
    goto switchD_10125d9a_caseD_3;
  case '\x04':
    goto switchD_10125d9a_caseD_4;
  case '\x05':
    iVar4 = iVar4 / 2 - iVar12 / 2;
    break;
  case '\x06':
    iVar4 = iVar4 + (iVar7 - iVar8);
    break;
  case '\a':
    goto switchD_10125d9a_caseD_7;
  case '\b':
    iVar4 = iVar4 + (iVar7 - iVar8);
    goto LAB_10125df0;
  case '\t':
    iVar4 = iVar4 / 2 - iVar12 / 2;
LAB_10125df0:
    local_34 = local_34 + iVar4;
switchD_10125d9a_caseD_7:
    iVar5 = iVar5 / 2 - iVar11 / 2;
    goto LAB_10125dda;
  default:
    goto LAB_10125c68;
  }
  local_34 = local_34 + iVar4;
switchD_10125d9a_caseD_4:
  iVar5 = iVar5 + (iVar9 - iVar13);
LAB_10125dda:
  uVar3 = uVar3 + iVar5;
LAB_10125c68:
  switchD_10125d9a::default(param_1,local_34,uVar3);
  return;
}

