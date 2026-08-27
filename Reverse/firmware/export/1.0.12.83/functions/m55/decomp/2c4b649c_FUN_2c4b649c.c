/* FUN_2c4b649c @ 0x2c4b649c */

void FUN_2c4b649c(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_pc;
  undefined8 uVar6;
  
  puVar3 = DAT_2c4b6558;
  piVar2 = DAT_2c4b6554;
  uVar4 = *DAT_2c4b6558;
  if (((uVar4 < 2) && (DAT_2c4b6554[uVar4 * 4] == param_1)) &&
     (*(byte *)(DAT_2c4b6554 + uVar4 * 4 + 1) == param_2)) {
    return;
  }
  uVar4 = FUN_2c674348();
  if ((param_1 == *piVar2) && (param_2 == *(byte *)(piVar2 + 1))) {
    uVar4 = 0;
LAB_2c4b6510:
    *puVar3 = uVar4;
    uVar6 = *(undefined8 *)(piVar2 + uVar4 * 4 + 2);
  }
  else {
    if (*piVar2 == 0) {
      uVar5 = 0;
      if ((param_1 == piVar2[4]) && (param_2 == *(byte *)(piVar2 + 5))) {
LAB_2c4b6540:
        uVar4 = 1;
        goto LAB_2c4b6510;
      }
LAB_2c4b64d0:
      *puVar3 = uVar5;
    }
    else {
      if ((param_1 == piVar2[4]) && (param_2 == *(byte *)(piVar2 + 5))) goto LAB_2c4b6540;
      if (piVar2[4] == 0) {
        uVar5 = 1;
        goto LAB_2c4b64d0;
      }
      uVar5 = 0;
      *puVar3 = 0;
    }
    uVar1 = param_1 * param_2;
    uVar6 = FUN_2c672ae8(uVar1 + (uVar4 >> 1),
                         (uVar1 | unaff_pc << 0x1c) + (uint)CARRY4(uVar1,uVar4 >> 1),uVar4,0);
    *(char *)(piVar2 + uVar5 * 4 + 1) = (char)param_2;
    piVar2[uVar5 * 4] = param_1;
    *(undefined8 *)(piVar2 + uVar5 * 4 + 2) = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x2c674380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c674384)((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  return;
}

