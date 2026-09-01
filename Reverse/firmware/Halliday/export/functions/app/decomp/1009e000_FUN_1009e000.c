/* FUN_1009e000 @ 0x1009e000 */

undefined4 * FUN_1009e000(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = DAT_1009e028;
  puVar3 = DAT_1009e024;
  while( true ) {
    if (puVar1 <= puVar3) {
      return (undefined4 *)0x0;
    }
    iVar2 = FUN_1011ea18(*puVar3,param_1);
    if (iVar2 == 0) break;
    puVar3 = puVar3 + 8;
  }
  return puVar3;
}

