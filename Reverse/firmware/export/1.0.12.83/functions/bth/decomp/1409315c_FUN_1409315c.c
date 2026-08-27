/* FUN_1409315c @ 0x1409315c */

void FUN_1409315c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_140755e4();
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(bool *)(iVar3 + 6) = param_2 != 1;
  uVar2 = FUN_140db6f0(0x40);
  uVar1 = DAT_14093190;
  *(undefined4 *)(iVar3 + 0x74) = uVar2;
  FUN_1407c1b4(iVar3,DAT_14093194,uVar1);
  FUN_1407561c();
  return;
}

