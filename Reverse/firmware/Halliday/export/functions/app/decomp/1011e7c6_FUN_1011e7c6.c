/* FUN_1011e7c6 @ 0x1011e7c6 */

void FUN_1011e7c6(int param_1)

{
  char cVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar2 = *(byte *)(param_1 + 0x278);
  *(undefined1 *)(param_1 + 0x27c) = 0;
  cVar1 = *(char *)(param_1 + 0x27b) + -1;
  *(char *)(param_1 + 0x27b) = cVar1;
  if (cVar1 != '\0') {
    FUN_10067560(param_1 + -4,1);
  }
  FUN_1011e796((uint)bVar2 * 0xc4 + param_1 + -4 + 0x30);
  bVar2 = *(char *)(param_1 + 0x278) + 1;
  if (2 < bVar2) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x278) = bVar2;
  if (((*(char *)(param_1 + 0x27b) == '\0') && (*(int *)(param_1 + 0x28) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x28) + 4),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1011e81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

