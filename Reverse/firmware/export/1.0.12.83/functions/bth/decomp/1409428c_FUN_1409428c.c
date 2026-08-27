/* FUN_1409428c @ 0x1409428c */

undefined4 FUN_1409428c(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined1 *)(param_1 + 0x4e8) = 0x30;
  *(undefined2 *)(param_1 + 0x4ea) = 0;
  *(undefined4 *)(param_1 + 0x508) = 1;
  FUN_140755e4();
  iVar1 = FUN_140e5558(param_1 + 4,param_1 + 0x4e0);
  if (iVar1 != 0) {
    FUN_140933d8(param_1);
    FUN_1407561c();
    return 1;
  }
  FUN_140e59c8(param_1 + 4,param_1 + 0x4e0);
  FUN_140933d8(param_1);
  FUN_1407561c();
  return 2;
}

