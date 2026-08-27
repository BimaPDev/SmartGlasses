/* FUN_140832c8 @ 0x140832c8 */

void FUN_140832c8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = *DAT_14083368;
  puVar3 = (undefined2 *)*param_1;
  iVar1 = FUN_14083294();
  if (iVar1 != 0) {
    FUN_1408ad94((int)param_1 + 10);
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1408336c,*puVar3);
  }
  if (*DAT_14083368 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

