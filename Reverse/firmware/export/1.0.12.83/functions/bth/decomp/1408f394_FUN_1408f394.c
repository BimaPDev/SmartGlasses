/* FUN_1408f394 @ 0x1408f394 */

void FUN_1408f394(int *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_1408f4ac;
  puVar3 = (undefined4 *)(*param_1 + 0xc);
  while( true ) {
    piVar5 = (int *)*puVar3;
    puVar4 = puVar3 + 1;
    if ((piVar5 != (int *)0x0) && (param_1 == piVar5)) break;
    puVar3 = puVar4;
    if ((undefined4 *)(*param_1 + 0x28) == puVar4) {
      if (*DAT_1408f4ac == local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_1408f4b0,param_1);
      }
LAB_1408f4a8:
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    }
  }
  piVar6 = piVar5 + 0x20;
  while ((iVar2 = FUN_14074b88(piVar6), iVar2 == 0 && (iVar1 = FUN_14074b48(piVar6), iVar1 != 0))) {
    local_30 = *(undefined4 *)(iVar1 + 0x14);
    local_50 = (uint)CONCAT12(*(undefined1 *)(iVar1 + 8),param_2);
    iStack_4c = iVar2;
    local_48 = iVar2;
    iStack_44 = iVar2;
    local_40 = iVar2;
    iStack_3c = iVar2;
    local_38 = iVar2;
    local_34 = piVar5;
    if (*(code **)(iVar1 + 0x10) != (code *)0x0) {
      (**(code **)(iVar1 + 0x10))(piVar5 + 1,2,&local_50);
    }
    *(short *)((int)piVar5 + 0x7e) = *(short *)((int)piVar5 + 0x7e) + -1;
    FUN_14074b0c(iVar1);
    FUN_14075b28(iVar1);
  }
  piVar5[0x20] = (int)piVar6;
  piVar5[0x21] = (int)piVar6;
  FUN_1408ee58(piVar5);
  if (*(char *)((int)piVar5 + 0xf) != '\0') {
    FUN_14074f94((int)piVar5 + 0xf);
    *(undefined1 *)((int)piVar5 + 0xf) = 0;
  }
  if (*(char *)((int)piVar5 + 0xe) != '\0') {
    FUN_14074f94((int)piVar5 + 0xe);
    *(undefined1 *)((int)piVar5 + 0xe) = 0;
  }
  if (piVar5[0x18] != 0) {
    FUN_14075b28();
    piVar5[0x18] = 0;
  }
  FUN_14075b28(*puVar3);
  *puVar3 = 0;
  if (*DAT_1408f4ac == local_2c) {
    return;
  }
  goto LAB_1408f4a8;
}

