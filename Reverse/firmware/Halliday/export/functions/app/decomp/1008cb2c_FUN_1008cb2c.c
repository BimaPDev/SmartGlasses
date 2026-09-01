/* FUN_1008cb2c @ 0x1008cb2c */

void FUN_1008cb2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 4) == '\x02') {
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x10) < 0) {
        FUN_10094268(*(undefined4 *)(iVar2 + 4),DAT_1008cb68);
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        goto LAB_1008cb4c;
      }
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
    }
  }
  else if (*(char *)(param_1 + 4) == '\x05') {
    uVar1 = *(undefined4 *)(param_1 + 8);
LAB_1008cb4c:
    FUN_10094268(uVar1,DAT_1008cb68);
    return;
  }
  return;
}

