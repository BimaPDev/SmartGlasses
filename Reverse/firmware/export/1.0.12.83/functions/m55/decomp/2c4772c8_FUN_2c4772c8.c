/* FUN_2c4772c8 @ 0x2c4772c8 */

void FUN_2c4772c8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = DAT_2c4772fc;
  puVar3 = (undefined1 *)(param_2 + -1);
  iVar2 = param_1;
  do {
    puVar3 = puVar3 + 1;
    FUN_2c66b4b8(iVar2,uVar1,*puVar3);
    *(undefined1 *)(iVar2 + 2) = 0x3a;
    iVar2 = iVar2 + 3;
  } while (puVar3 != (undefined1 *)(param_2 + 5));
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}

