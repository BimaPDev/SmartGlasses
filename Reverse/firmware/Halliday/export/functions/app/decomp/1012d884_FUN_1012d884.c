/* FUN_1012d884 @ 0x1012d884 */

void FUN_1012d884(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_10067f20();
  if ((param_1 != (undefined4 *)&UsageFault) && (-1 < (int)((uint)*(byte *)(param_1 + -6) << 0x1f)))
  {
    puVar2 = param_1 + -5;
    do {
      puVar3 = puVar2 + 1;
      if (((code *)*puVar2 != (code *)0x0) && (iVar1 = (*(code *)*puVar2)(), iVar1 != 0)) {
        FUN_100a1b34();
      }
      puVar2 = puVar3;
    } while (puVar3 != param_1);
  }
  return;
}

