/* FUN_10136d20 @ 0x10136d20 */

undefined4 FUN_10136d20(int param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char local_14;
  char local_13;
  char local_12;
  byte local_11 [5];
  
  if (param_1 == 0) {
    iVar1 = FUN_10136580();
  }
  else {
    iVar1 = FUN_10136574();
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_100d5748(iVar1,&local_14,&local_13,&local_12,local_11);
    if ((iVar3 == 0) && (param_2 != (byte *)0x0)) {
      *param_2 = local_13 << 2 | local_14 << 4 | local_11[0] | local_12 << 1;
    }
    uVar2 = FUN_100d55bc(iVar1);
  }
  return uVar2;
}

