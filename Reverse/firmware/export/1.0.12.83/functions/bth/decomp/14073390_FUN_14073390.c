/* FUN_14073390 @ 0x14073390 */

void FUN_14073390(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = DAT_1407344c;
  if (param_1 != 1) {
    if (param_1 - 2U < 2) {
      FUN_140739bc(DAT_1407344c + 0x28,param_2,0x434,1,param_4);
      FUN_140739bc(iVar1 + 0x20,param_3,0x434,1);
      FUN_140739bc(iVar1 + 0x18,param_4,0x234,2);
      FUN_140739bc(iVar1 + 0x10,param_5,0xb4,3);
      FUN_140739bc(iVar1 + 8,param_6,0x74,3);
      FUN_140739bc(iVar1,param_7,0x54,8);
      if (*(int *)(iVar1 + 0x30) != 0) {
        do {
          FUN_14073a58(iVar1 + 0x30);
          FUN_14074168();
        } while (*(int *)(iVar1 + 0x30) != 0);
      }
    }
    return;
  }
  FUN_140739b4(DAT_14073450);
  FUN_140739b4(DAT_14073454);
  FUN_140739b4(DAT_14073458);
  FUN_140739b4(DAT_1407345c);
  FUN_140739b4(DAT_14073460);
  FUN_140739b4(DAT_1407344c);
  FUN_140739b4(DAT_14073464);
  return;
}

