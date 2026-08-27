/* FUN_2c5e6b68 @ 0x2c5e6b68 */

int FUN_2c5e6b68(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = DAT_2c5e6b8c + 7;
  iVar1 = DAT_2c5e6b90;
  piVar2 = DAT_2c5e6b8c;
  while( true ) {
    iVar1 = (**(code **)(iVar1 + 0x44))(0);
    iVar3 = iVar3 + iVar1;
    if (piVar2 == piVar4) break;
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
  }
  return iVar3;
}

