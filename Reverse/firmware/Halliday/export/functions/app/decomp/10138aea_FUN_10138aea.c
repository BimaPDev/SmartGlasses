/* FUN_10138aea @ 0x10138aea */

byte FUN_10138aea(int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(byte *)(param_1 + 0xd) < 3) {
    uVar3 = 2000;
  }
  else {
    uVar3 = 200;
  }
  bVar2 = *(byte *)(param_1 + 0xe) & 0x40;
  if ((*(byte *)(param_1 + 0xe) & 0x40) != 0) {
    iVar1 = thunk_FUN_10115958();
    if ((uint)(iVar1 - *(int *)(param_1 + 0x10)) < uVar3) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
  }
  return bVar2;
}

