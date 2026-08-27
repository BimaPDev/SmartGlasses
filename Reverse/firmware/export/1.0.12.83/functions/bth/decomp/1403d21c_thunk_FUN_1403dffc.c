/* thunk_FUN_1403dffc @ 0x1403d21c */

void thunk_FUN_1403dffc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_1403e024;
  FUN_140e5658(DAT_1403e024,0,0x40);
  uVar2 = FUN_140e52f8(DAT_1403e028,0);
  uVar3 = DAT_1403e02c;
  *(undefined4 *)(iVar1 + 0x38) = uVar2;
  uVar3 = FUN_140e5138(uVar3);
  *(undefined4 *)(iVar1 + 0x3c) = uVar3;
  return;
}

