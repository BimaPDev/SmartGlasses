/* FUN_100cf134 @ 0x100cf134 */

void FUN_100cf134(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [40];
  
  iVar6 = param_1 + 0x90;
  FUN_10134be0(1,0xffff,PTR_FUN_100cccc0_1_100cf27c,param_1);
  iVar1 = FUN_101331f8(*(undefined1 *)(param_1 + 8),iVar6);
  if (iVar1 == 0) goto LAB_100cf1ce;
  FUN_100cef94(*(undefined1 *)(param_1 + 8),iVar6);
  iVar1 = FUN_100cc790(param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar7 = 0;
LAB_100cf194:
    FUN_100c2210(auStack_4c,0x24,PTR_s_BT_CF_100cf280,iVar6,0);
  }
  else {
    iVar1 = iVar1 + 8;
    if (*(char *)(param_1 + 8) == '\0') {
      uVar7 = 1;
      goto LAB_100cf194;
    }
    FUN_10119c46(auStack_50,4);
    FUN_100c2210(auStack_4c,0x24,PTR_s_BT_CF_100cf280,iVar6,auStack_50);
    uVar7 = 1;
    if (*(char *)(param_1 + 8) == '\0') goto LAB_100cf194;
  }
  iVar1 = FUN_10131934(auStack_4c,iVar1,uVar7);
  if (iVar1 != 0) {
    FUN_100a5b78(((int)PTR_DAT_100cf288 - (int)PTR_DAT_100cf284) * 0x20 & 0xff00U | 0x13600011,
                 PTR_s_bt_gatt_store_cf_100cf290,PTR_s_Failed_to_store_Client_Features___100cf28c,
                 iVar1);
  }
LAB_100cf1ce:
  iVar1 = FUN_100cc814(param_1);
  if (((iVar1 != 0) && (piVar3 = *(int **)(iVar1 + 8), piVar3 != (int *)0x0)) &&
     (piVar3 + -5 != (int *)0x0)) {
    piVar4 = (int *)*piVar3;
    if (piVar4 != (int *)0x0) {
      piVar4 = piVar4 + -5;
    }
    piVar8 = (int *)0x0;
    piVar3 = piVar3 + -5;
    while( true ) {
      piVar5 = piVar4;
      iVar2 = FUN_101331f8(*(undefined1 *)(param_1 + 8),iVar6);
      if ((iVar2 == 0) || (iVar2 = FUN_1013457a(piVar3 + 4), iVar2 << 0x1f < 0)) {
        *(undefined2 *)(piVar3 + 3) = 0;
        FUN_101347ba(param_1,iVar1,piVar8,piVar3);
      }
      else {
        if (*(char *)(iVar1 + 1) != '\0') {
          FUN_10134778(iVar1 + 1,iVar6);
        }
        piVar8 = piVar3 + 5;
      }
      if (piVar5 == (int *)0x0) break;
      piVar4 = (int *)0x0;
      piVar3 = piVar5;
      if ((piVar5 != (int *)0xffffffec) && (piVar4 = (int *)piVar5[5], piVar4 != (int *)0x0)) {
        piVar4 = piVar4 + -5;
      }
    }
  }
  iVar1 = FUN_100cc790(param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_101331f8(*(undefined1 *)(param_1 + 8),iVar6);
    if (iVar2 == 0) {
      FUN_10134980(iVar1);
    }
    else {
      FUN_10134778(iVar1 + 1,iVar6);
      FUN_10134580(iVar1 + 0xc,0xfffffffd);
    }
  }
  return;
}

