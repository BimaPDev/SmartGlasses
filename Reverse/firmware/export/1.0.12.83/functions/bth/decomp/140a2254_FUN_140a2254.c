/* FUN_140a2254 @ 0x140a2254 */

void FUN_140a2254(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar2 = DAT_140a22d8;
  piVar1 = DAT_140a22c0;
  if (param_1 != 0) {
    if (*DAT_140a22bc == 0) {
      iVar4 = 0;
      puVar5 = DAT_140a22d8;
      if (0 < *DAT_140a22c0) {
        do {
          uVar3 = FUN_140a2b9c(*puVar5);
          if (param_1 <= uVar3) {
            if (iVar4 < *piVar1) {
              iVar4 = FUN_140a2734(puVar2[iVar4],param_1);
              goto LAB_140a2294;
            }
            break;
          }
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 < *piVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a22d4,DAT_140a22d0,iVar4);
    }
    iVar4 = FUN_140a2734(*DAT_140a22c4,param_1);
LAB_140a2294:
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a22cc,DAT_140a22c8,param_1);
    }
  }
  return;
}

