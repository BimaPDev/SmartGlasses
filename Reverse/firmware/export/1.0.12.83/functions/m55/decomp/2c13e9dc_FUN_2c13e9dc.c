/* FUN_2c13e9dc @ 0x2c13e9dc */

void FUN_2c13e9dc(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)((int)param_1 + param_3);
  if (param_3 < 4) {
    if (param_3 != 0) {
      do {
        puVar4 = (undefined4 *)((int)param_1 + 1);
        *(undefined1 *)param_1 = param_2;
        param_1 = puVar4;
      } while (puVar5 != puVar4);
    }
  }
  else {
    uVar1 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    *param_1 = uVar1;
    puVar5[-1] = uVar1;
    if (8 < param_3) {
      iVar3 = 4 - ((uint)param_1 & 3);
      uVar2 = param_3 - iVar3 >> 2;
      param_1 = (undefined4 *)(iVar3 + (int)param_1);
      puVar4 = param_1 + uVar2;
      puVar5 = param_1;
      switch(uVar2 & 0xf) {
      case 1:
        goto switchD_2c13ea12_caseD_1;
      case 2:
        goto switchD_2c13ea12_caseD_2;
      case 3:
        goto switchD_2c13ea12_caseD_3;
      case 4:
        goto switchD_2c13ea12_caseD_4;
      case 5:
        goto switchD_2c13ea12_caseD_5;
      case 6:
        goto switchD_2c13ea12_caseD_6;
      case 7:
        goto switchD_2c13ea12_caseD_7;
      case 8:
        goto switchD_2c13ea12_caseD_8;
      case 9:
        goto switchD_2c13ea12_caseD_9;
      case 10:
        goto switchD_2c13ea12_caseD_a;
      case 0xb:
        goto switchD_2c13ea12_caseD_b;
      case 0xc:
        goto switchD_2c13ea12_caseD_c;
      case 0xd:
        goto switchD_2c13ea12_caseD_d;
      case 0xe:
        goto switchD_2c13ea12_caseD_e;
      case 0xf:
        goto switchD_2c13ea12_caseD_f;
      }
      do {
        puVar5 = param_1 + 1;
        *param_1 = uVar1;
switchD_2c13ea12_caseD_f:
        param_1 = puVar5 + 1;
        *puVar5 = uVar1;
switchD_2c13ea12_caseD_e:
        puVar5 = param_1 + 1;
        *param_1 = uVar1;
switchD_2c13ea12_caseD_d:
        param_1 = puVar5 + 1;
        *puVar5 = uVar1;
switchD_2c13ea12_caseD_c:
        puVar5 = param_1 + 1;
        *param_1 = uVar1;
switchD_2c13ea12_caseD_b:
        param_1 = puVar5 + 1;
        *puVar5 = uVar1;
switchD_2c13ea12_caseD_a:
        puVar5 = param_1 + 1;
        *param_1 = uVar1;
switchD_2c13ea12_caseD_9:
        param_1 = puVar5 + 1;
        *puVar5 = uVar1;
switchD_2c13ea12_caseD_8:
        puVar5 = param_1 + 1;
        *param_1 = uVar1;
switchD_2c13ea12_caseD_7:
        param_1 = puVar5 + 1;
        *puVar5 = uVar1;
switchD_2c13ea12_caseD_6:
        puVar5 = param_1 + 1;
        *param_1 = uVar1;
switchD_2c13ea12_caseD_5:
        param_1 = puVar5 + 1;
        *puVar5 = uVar1;
switchD_2c13ea12_caseD_4:
        puVar5 = param_1 + 1;
        *param_1 = uVar1;
switchD_2c13ea12_caseD_3:
        param_1 = puVar5 + 1;
        *puVar5 = uVar1;
switchD_2c13ea12_caseD_2:
        puVar5 = param_1 + 1;
        *param_1 = uVar1;
switchD_2c13ea12_caseD_1:
        param_1 = puVar5 + 1;
        *puVar5 = uVar1;
      } while (puVar4 != param_1);
      return;
    }
  }
  return;
}

