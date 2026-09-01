/* FUN_10030490 @ 0x10030490 */

void FUN_10030490(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *local_60;
  undefined *local_5c;
  undefined *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined2 local_20;
  int local_1c;
  int *piVar4;
  
  piVar2 = DAT_100305b8;
  puVar1 = (undefined4 *)*DAT_100305b8;
  local_1c = *(int *)PTR_DAT_100305bc;
  if (puVar1 == (undefined4 *)0x0) goto LAB_10030572;
  piVar3 = puVar1 + 0x21;
  do {
    piVar4 = piVar3 + 1;
    if (*piVar3 != 0) {
      FUN_1002e994(*piVar3,1);
    }
    piVar3 = piVar4;
  } while (piVar4 != puVar1 + 0x2d);
  if (puVar1[param_1 + 0x21] != 0) {
    FUN_1002e994(puVar1[param_1 + 0x21],0);
  }
  FUN_100933f8();
  FUN_1002efe4();
  FUN_1002eefc(*puVar1);
  *(undefined1 *)((int)puVar1 + 0x81) = 0;
  *(undefined1 *)((int)puVar1 + 0x82) = 0;
  switch(param_1) {
  case 3:
    FUN_1002efe4();
    FUN_1002eefc(puVar1[7]);
    FUN_1002eefc(puVar1[6]);
    if (*piVar2 == 0) goto switchD_100304f0_caseD_4;
    piVar2 = *(int **)(*piVar2 + 0x20);
    FUN_10093284(&local_60);
    local_38 = 0xb;
    uStack_34 = 3000;
    local_5c = PTR_LAB_100305d0_1_100305c0;
    local_60 = piVar2;
    break;
  default:
    goto switchD_100304f0_caseD_4;
  case 5:
    FUN_1002eefc(puVar1[0xb]);
    goto switchD_100304f0_caseD_4;
  case 6:
    if (*piVar2 == 0) goto switchD_100304f0_caseD_4;
    piVar2 = *(int **)(*piVar2 + 0x24);
    FUN_10093284(&local_60);
    local_38 = 0xb;
    uStack_34 = 3000;
    local_5c = PTR_LAB_10030614_1_100305c4;
    local_60 = piVar2;
    break;
  case 10:
    goto switchD_100304f0_caseD_a;
  }
  do {
    piVar2 = local_60;
    local_20 = 0xffff;
    uStack_3c = 0;
    local_40 = 0;
    FUN_1009331c(&local_60);
switchD_100304f0_caseD_4:
    do {
      *(char *)(puVar1 + 0x20) = (char)param_1;
LAB_10030572:
      if (*(int *)PTR_DAT_100305bc == local_1c) {
        return;
      }
      FUN_1013cdc0();
switchD_100304f0_caseD_a:
    } while (*piVar2 == 0);
    piVar2 = *(int **)(*piVar2 + 0x28);
    FUN_10093284(&local_60);
    local_38 = 0xe10;
    uStack_34 = 5000;
    local_44 = PTR_LAB_1012a770_1_100305c8;
    local_5c = PTR_FUN_1012bd90_1_100305cc;
    local_60 = piVar2;
  } while( true );
}

