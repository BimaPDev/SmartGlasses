/* FUN_2c489bd0 @ 0x2c489bd0 */

void FUN_2c489bd0(void)

{
  undefined4 *puVar1;
  ushort *puVar2;
  uint *puVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  
  puVar2 = DAT_2c489c8c;
  puVar1 = DAT_2c489c88;
  FUN_2c644044(*DAT_2c489c88,0xffffffff);
  uVar6 = FUN_2c49d134();
  puVar3 = DAT_2c489c9c;
  if (99 < (int)uVar6) {
    uVar6 = 100;
  }
  uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
  if (uVar6 != *puVar2) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xc3,DAT_2c489c98,DAT_2c489c94,DAT_2c489c90,uVar6);
  }
  uVar6 = FUN_2c49d108();
  pcVar4 = DAT_2c489ca0;
  uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
  if (uVar6 == *puVar3) {
    FUN_2c644080(*puVar1);
    return;
  }
  *puVar3 = uVar6;
  piVar5 = DAT_2c489ca4;
  if (*pcVar4 != '\0') {
    if (*DAT_2c489ca4 != 0) {
      for (iVar7 = FUN_2c485890(); iVar8 = FUN_2c4858a8(*piVar5), iVar7 != iVar8;
          iVar7 = FUN_2c4858c0(iVar7)) {
        if (((iVar7 != 0) && (*(undefined4 **)(iVar7 + 4) != (undefined4 *)0x0)) &&
           (pcVar9 = (code *)**(undefined4 **)(iVar7 + 4), pcVar9 != (code *)0x0)) {
          (*pcVar9)(*puVar3);
        }
      }
      FUN_2c644080(*puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xf9,DAT_2c489c98,DAT_2c489c94,DAT_2c489ca8);
}

