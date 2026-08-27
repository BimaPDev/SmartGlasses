/* FUN_2c5111ec @ 0x2c5111ec */

void FUN_2c5111ec(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_2c50f968();
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c511300,0x336,DAT_2c511304,DAT_2c5112fc,DAT_2c5112f8);
  }
  cVar2 = *(char *)(param_2 + 4);
  iVar3 = param_1[0xb11];
  if (*(char *)(param_1 + param_3 * 3 + 0xb0c) == cVar2) {
    bVar1 = false;
  }
  else {
    *(char *)(param_1 + param_3 * 3 + 0xb0c) = cVar2;
    if (iVar3 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = true;
      *(char *)(param_3 * 0x94 + iVar3 + 0x7c) = cVar2;
    }
  }
  if (*(char *)((int)param_1 + param_3 * 0xc + 0x2c31) != *(char *)(param_2 + 5)) {
    bVar1 = true;
    *(char *)((int)param_1 + param_3 * 0xc + 0x2c31) = *(char *)(param_2 + 5);
  }
  if (*(char *)((int)param_1 + param_3 * 0xc + 0x2c33) != *(char *)(param_2 + 7)) {
    bVar1 = true;
    *(char *)((int)param_1 + param_3 * 0xc + 0x2c33) = *(char *)(param_2 + 7);
  }
  if (*(char *)((int)param_1 + param_3 * 0xc + 0x2c32) == *(char *)(param_2 + 6)) {
    cVar2 = *(char *)(param_2 + 8);
    if (*(char *)(param_1 + param_3 * 3 + 0xb0d) == cVar2) {
      if (!bVar1) {
        return;
      }
      goto LAB_2c51129a;
    }
  }
  else {
    *(char *)((int)param_1 + param_3 * 0xc + 0x2c32) = *(char *)(param_2 + 6);
    cVar2 = *(char *)(param_2 + 8);
    if (*(char *)(param_1 + param_3 * 3 + 0xb0d) == cVar2) goto LAB_2c51129a;
  }
  *(char *)(param_1 + param_3 * 3 + 0xb0d) = cVar2;
LAB_2c51129a:
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x90) == '\0')) && (*(char *)(iVar3 + 0x124) == '\0')) {
    FUN_2c50f9b8(*param_1);
    uVar4 = *param_1;
    FUN_2c607df0();
    FUN_2c607588(uVar4);
    return;
  }
  return;
}

