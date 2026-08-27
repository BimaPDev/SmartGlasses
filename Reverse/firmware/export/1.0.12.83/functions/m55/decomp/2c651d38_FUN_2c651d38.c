/* FUN_2c651d38 @ 0x2c651d38 */

undefined4 FUN_2c651d38(int param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  puVar2 = (undefined4 *)(param_1 + 0x4a0);
  pbVar4 = (byte *)(param_1 + 0x490);
  while ((pbVar3 = pbVar4 + 1, (*pbVar4 & param_2) == 0 ||
         (iVar1 = FUN_2c6690f4(param_3,*puVar2), iVar1 == 0))) {
    puVar2 = puVar2 + 1;
    pbVar4 = pbVar3;
    if (pbVar3 == (byte *)(param_1 + 0x498)) {
      return 0;
    }
  }
  return 1;
}

