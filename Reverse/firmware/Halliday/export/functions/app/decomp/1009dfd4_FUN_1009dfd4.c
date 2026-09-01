/* FUN_1009dfd4 @ 0x1009dfd4 */

undefined4 * FUN_1009dfd4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)*DAT_1009dffc;
  if (puVar2 == (undefined4 *)0x0) {
LAB_1009dfde:
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*puVar2;
    while (iVar1 = FUN_1011ea18(puVar2[1],param_1), iVar1 != 0) {
      if (puVar3 == (undefined4 *)0x0) goto LAB_1009dfde;
      puVar2 = puVar3;
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  return puVar2;
}

