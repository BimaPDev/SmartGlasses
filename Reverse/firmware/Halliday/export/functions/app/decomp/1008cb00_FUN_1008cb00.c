/* FUN_1008cb00 @ 0x1008cb00 */

undefined4 FUN_1008cb00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = 0;
  uVar3 = 0;
  puVar2 = DAT_1008cb28;
  do {
    if (puVar2[1] == param_1) {
      uVar3 = *puVar2;
      FUN_1008cadc((int)(short)iVar1);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 != 0x10);
  return uVar3;
}

