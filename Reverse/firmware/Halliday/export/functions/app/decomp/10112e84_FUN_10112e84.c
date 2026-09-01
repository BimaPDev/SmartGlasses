/* FUN_10112e84 @ 0x10112e84 */

undefined4 * FUN_10112e84(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r2;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = DAT_10112edc;
  if ((param_1 != (char *)0x0) && (puVar3 = DAT_10112edc, puVar4 = DAT_10112ee0, *param_1 != '\0'))
  {
    for (; puVar5 = DAT_10112ee0, puVar4 != puVar3; puVar4 = puVar4 + 8) {
      iVar2 = FUN_1013c646(puVar4);
      if ((iVar2 != 0) && ((char *)*puVar4 == param_1)) {
        return puVar4;
      }
      puVar3 = extraout_r2;
    }
    for (; puVar5 != puVar1; puVar5 = puVar5 + 8) {
      iVar2 = FUN_1013c646(puVar5);
      if ((iVar2 != 0) && (iVar2 = FUN_1011ea18(param_1,*puVar5), iVar2 == 0)) {
        return puVar5;
      }
    }
    FUN_10119dc2(DAT_10112ee4,param_1);
  }
  return (undefined4 *)0x0;
}

